/*
 * (C) Copyright 2006
 * Atmel Nordic AB <www.atmel.com>
 * Ulf Samuelsson <ulf@atmel.com>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <common.h>
#if	defined(CONFIG_AT91RM9200)
#include <asm/arch/at91rm9200.h>
#elif	defined(CONFIG_AT91SAM9260)
#include <asm/arch/at91sam9260.h>
#elif	defined(CONFIG_AT91SAM9261)
#include <asm/arch/at91sam9261.h>
#elif	defined(CONFIG_AT91SAM9263)
#include <asm/arch/at91sam9263.h>
#endif

static void	delay(unsigned int	time)
{
	volatile unsigned int	counter = time;
	while(counter > 0) counter--;
}

void	green_LED_on(void)
{
	AT91PS_PIO	PIOA	= PIO_LEDS;
	PIOA->GREEN_LED_ON	= GREEN_LED;
}

void	green_LED_off(void)
{
	AT91PS_PIO	PIOA	= PIO_LEDS;
	PIOA->GREEN_LED_OFF	= GREEN_LED;
}

void	green_LED_blink(unsigned int time)
{
	while(time > 0) {
		green_LED_on();
		delay(TIME_SLICE);
		green_LED_off();
		delay(TIME_SLICE);
		time--;
	}
}

void	 yellow_LED_on(void)
{
	AT91PS_PIO	PIOA	= PIO_LEDS;
	PIOA->YELLOW_LED_ON	= YELLOW_LED;
}

void	yellow_LED_off(void)
{
	AT91PS_PIO	PIOA	= PIO_LEDS;
	PIOA->YELLOW_LED_OFF	= YELLOW_LED;
}

void	yellow_LED_blink(unsigned int time)
{
	while(time > 0) {
		yellow_LED_on();
		delay(TIME_SLICE);
		yellow_LED_off();
		delay(TIME_SLICE);
		time--;
	}
}

void	red_LED_off(void)
{
#ifdef	AT91SAM9263EK
	AT91PS_PIO	PIOA	= PIO_LEDS;
#else
	AT91PS_PIO	PIOA	= AT91C_BASE_PIOC;
#endif
	PIOA->RED_LED_OFF	= RED_LED;
}

void	 red_LED_on(void)
{
#ifdef	AT91SAM9263EK
	AT91PS_PIO	PIOA	= PIO_LEDS;
#else
	AT91PS_PIO	PIOA	= AT91C_BASE_PIOC;
#endif
	PIOA->RED_LED_ON	= RED_LED;
}

void	red_LED_blink(unsigned int time)
{
	while(time > 0) {
		red_LED_on();
		delay(TIME_SLICE);
		red_LED_off();
		delay(TIME_SLICE);
		time--;
	}
}

void LED_init (void)
{
	DECLARE_GLOBAL_DATA_PTR;
	AT91PS_PIO	PIOA	= PIO_LEDS;
	AT91PS_PMC	PMC	= AT91C_BASE_PMC;
	PMC->PMC_PCER		= (1 << PIO_ID);	/* Enable PIOA clock */
	/* Disable peripherals on LEDs */
	PIOA->PIO_PER		= ALL_LEDS;
	/* Enable pins as outputs */
	PIOA->PIO_OER		= ALL_LEDS;
	/* Turn all LEDs OFF */
	PIOA->GREEN_LED_OFF	= GREEN_LED;
	PIOA->YELLOW_LED_OFF	= YELLOW_LED;
	PIOA->RED_LED_OFF	= RED_LED;
}
