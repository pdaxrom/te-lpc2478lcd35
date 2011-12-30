#include <common.h>

#if	defined(CONFIG_AT91SAM9260) || defined(CONFIG_SAM9_L9260)
#include <asm/arch/at91sam9260.h>
#elif	defined(CONFIG_AT91SAM9261)
#include <asm/arch/at91sam9261.h>
#elif	defined(CONFIG_AT91SAM9263)
#include <asm/arch/at91sam9263.h>
#endif
#include <led.h>

const	char	*init_string1	="lowlevel_init.c:1\n";
const	char	*init_string3	="lowlevel_init.c:3\n";

void	lowlevel_init(void)
{
	/* This will only work if the stack is initialized */
	/* Since we call a second time */
#if	0
	serial_puts(init_string1);
	serial_puts("lowlevel_init.c:2\n");
	green_LED_blink(5);
	serial_init();
	yellow_LED_blink(5);
	serial_puts(init_string3);
	serial_puts("lowlevel_init.c:4\n");
#endif
	green_LED_blink(2);
}
