/*
 * (C) Copyright 2003
 * Tait Electronics Limited, Christchurch, New Zealand
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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

/*
 * This file provides a shell like 'test' function to return
 * true/false from an integer or string compare of two memory
 * locations or a location and a scalar/literal.
 * A few parts were lifted from bash 'test' command
 */

#include <common.h>
#include <config.h>
#include <command.h>

#if defined(CONFIG_AT91RM9200DF) || defined(CONFIG_AT91RM9200DK) || defined(CONFIG_AT91RM9200EK)
#include	<led.h>
#include <asm/arch/AT91RM9200.h>

/* command line interface to the shell test */
int do_led ( cmd_tbl_t *cmdtp, int flag, int argc, char *argv[] )
{
	int	value, w;
	int	led;
	AT91PS_PIO	PIOB	= AT91C_BASE_PIOB;
	AT91PS_PMC	PMC	= AT91C_BASE_PMC;
	PMC->PMC_PCER		= (1 << AT91C_ID_PIOB);	/* Enable PIOB clock */
	/* Validate arguments */
	if ((argc != 3)){
		printf("Usage:\n%s\n", cmdtp->usage);
		return 1;
	}
	if (strcmp(argv[1], "1") == 0) {
		led = (1 << 0);
	} else if (strcmp(argv[1], "2") == 0) {
		led = (1 << 1);
	} else if (strcmp(argv[1], "3") == 0) {
		led = (1 << 2);
	} else if (strcmp(argv[1], "green") == 0) {
		led = (1 << 0);
	} else if (strcmp(argv[1], "yellow") == 0) {
		led = (1 << 1);
	} else if (strcmp(argv[1], "red") == 0) {
		led = (1 << 2);
	} else if (strcmp(argv[1], "all") == 0) {
		led = 7;
	} else {
		printf ("Usage:\n%s\n", cmdtp->usage);
		return 1;
	}

	if (strcmp(argv[2], "off") == 0) {
		PIOB->PIO_SODR		= led;
	} else if (strcmp(argv[2], "on") == 0) {
		PIOB->PIO_CODR		= led;
	} else {
		printf ("Usage:\n%s\n", cmdtp->usage);
		return 1;
	}


	/* Check for a data width specification.
	 * Defaults to long (4) if no specification.
	 * Uses -2 as 'width' for .s (string) so as not to upset existing code
	 */
	return 0;
}

U_BOOT_CMD(
	led, 3, 1, do_led,
	"led\t- [1|2|3|green|yellow|red|all] [on|off]\n",
	"led [1|2|3|green|yellow|red|all] [on|off] sets /clears led 1,2,3\n"
);
#endif	/* defined(CONFIG_AT91RM9200DK) || defined(CONFIG_AT91RM9200DK) || defined(CONFIG_AT91RM9200DK) */

