/*
 *  linux/arch/arm/mach-lpc22xx/time.c
 *
 *  Copyright (C) 2004 Philips Semiconductors
 */

#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/init.h>
#include <linux/interrupt.h>
#include <asm/system.h>
#include <asm/leds.h>
#include <asm/mach-types.h>

#include <asm/io.h>
#include <asm/irq.h>
#include <asm/hardware.h>
#include <asm/mach/time.h>
#include <asm/arch/time.h>

#include <linux/irq.h>

extern void	lpc22xx_unmask_irq(unsigned int);

unsigned long lpc22xx_gettimeoffset (void)
{
    return (T0TC/CLOCKS_PER_USEC);
}

static irqreturn_t
lpc22xx_timer_interrupt(int irq, void *dev_id)
{

    if (!(T0IR & 0x01)) return IRQ_NONE;
/*    do_timer(regs);
    do_profile(regs);
*/ timer_tick();  /* modified 20050608 for new version */

    T0IR |= 0x01;	/* reset interrupt */
    return IRQ_HANDLED;
}

static struct irqaction lpc22xx_timer_irq = {
        .name           = "lpc22xx-tick",
	.flags		= IRQF_DISABLED | IRQF_TIMER,
        .handler        = lpc22xx_timer_interrupt
};

/*
 * Set up timer interrupt, and return the current time in seconds.
 */
/*
 Setup PCLK_TIMER0 = Fcclk (01)
 Setup T0MR0 = 10 (ms)
 Setup T0PR0 = (LPC22xx_Fcclk/1000) -1 (an interrupt every ms)
*/
void __init  lpc22xx_time_init (void)
{
	unsigned long stat = PLLSTAT;
	unsigned long M = stat & 0x7FFFF;
	unsigned long N = (stat>>16) & 0xFF;
	unsigned long Fcco = (2 * (M+1) *CONFIG_LPC22xx_Fosc) / (N+1);
	unsigned long Fcclk = Fcco / ((CCLKCFG&0xFF)+1);
	printk("LPC22XX Clocking Fin=%ldHz Fcco=%ldHz M=%ld N=%ld\n",
		CONFIG_LPC22xx_Fosc,
		Fcco,
		M,
		N);
	PCLKSEL0 &= ~(3<<2);
	PCLKSEL0 |=  (1<<2);
	printk("Fcclk=%ld PCLKSEL=%08lx %08lx\n",
		Fcclk, PCLKSEL0, PCLKSEL1);
	/*
	 * disable and clear timer 0, set to
	 */
	T0TCR &= ~0x01;
	/* initialize the timer period and prescaler */
	T0MR0 = MR0_INIT_VALUE;
	T0PR = (LPC22xx_Fcclk/1000) - 1;
	T0MCR |= 0x03;			/* generate interrupt when T0MR0 match T0TC and Reset Timer Count*/

	/*
	 * @todo do those really need to be function pointers ?
	 */
/*	gettimeoffset     = lpc22xx_gettimeoffset; */
	lpc22xx_timer_irq.handler = lpc22xx_timer_interrupt;

	/* set up the interrupt vevtor for timer 0 match */
	setup_irq(LPC22xx_INTERRUPT_TIMER0, &lpc22xx_timer_irq);
	
	/* enable the timer IRQ */
	lpc22xx_unmask_irq(LPC22xx_INTERRUPT_TIMER0);

	/* let timer 0 run... */
	T0IR = 0x01; /* reset MR0 interrupt*/
	T0TCR = 0x02;	/* Reset timer count and prescale counter */
	T0TCR = 0x01;	/* enable timer counter and prescale counter */
}

struct sys_timer lpc22xx_timer = {
	.init		= lpc22xx_time_init,
	.offset		= lpc22xx_gettimeoffset,
};
