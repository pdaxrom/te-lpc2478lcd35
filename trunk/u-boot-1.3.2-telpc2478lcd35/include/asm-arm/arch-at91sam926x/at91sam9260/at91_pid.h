/*
 * (C) Copyright 2006
 * M Amine SAYA ATMEL Rousset, France.
 * include/asm/arch/pio.h contains pio config and management functions
 *
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

#ifndef AT91SAM9260_AT91_PID_H
#define AT91SAM9260_AT91_PID_H

/* ***************************************************************************** */
/*               PERIPHERAL ID DEFINITIONS FOR AT91SAM9260 */
/* ***************************************************************************** */
#define AT91C_ID_FIQ    ((unsigned int)  0) /* Advanced Interrupt Controller (FIQ) */
#define AT91C_ID_SYS    ((unsigned int)  1) /* System Controller */
#define AT91C_ID_PIOA   ((unsigned int)  2) /* Parallel IO Controller A */
#define AT91C_ID_PIOB   ((unsigned int)  3) /* Parallel IO Controller B */
#define AT91C_ID_PIOC   ((unsigned int)  4) /* Parallel IO Controller C */
#define AT91C_ID_ADC    ((unsigned int)  5) /* ADC */
#define AT91C_ID_US0    ((unsigned int)  6) /* USART 0 */
#define AT91C_ID_US1    ((unsigned int)  7) /* USART 1 */
#define AT91C_ID_US2    ((unsigned int)  8) /* USART 2 */
#define AT91C_ID_MCI    ((unsigned int)  9) /* Multimedia Card Interface 0 */
#define AT91C_ID_UDP    ((unsigned int) 10) /* USB Device Port */
#define AT91C_ID_TWI    ((unsigned int) 11) /* Two-Wire Interface */
#define AT91C_ID_SPI0   ((unsigned int) 12) /* Serial Peripheral Interface 0 */
#define AT91C_ID_SPI1   ((unsigned int) 13) /* Serial Peripheral Interface 1 */
#define AT91C_ID_SSC0   ((unsigned int) 14) /* Serial Synchronous Controller 0 */
#define AT91C_ID_TC0    ((unsigned int) 17) /* Timer Counter 0 */
#define AT91C_ID_TC1    ((unsigned int) 18) /* Timer Counter 1 */
#define AT91C_ID_TC2    ((unsigned int) 19) /* Timer Counter 2 */
#define AT91C_ID_UHP    ((unsigned int) 20) /* USB Host Port */
#define AT91C_ID_EMAC   ((unsigned int) 21) /* Ethernet Mac */
#define AT91C_ID_HISI   ((unsigned int) 22) /* Image Sensor Interface */
#define AT91C_ID_US3    ((unsigned int) 23) /* USART 3 */
#define AT91C_ID_US4    ((unsigned int) 24) /* USART 4 */
#define AT91C_ID_US5    ((unsigned int) 25) /* USART 5 */
#define AT91C_ID_TC3    ((unsigned int) 26) /* Timer Counter 3 */
#define AT91C_ID_TC4    ((unsigned int) 27) /* Timer Counter 4 */
#define AT91C_ID_TC5    ((unsigned int) 28) /* Timer Counter 5 */
#define AT91C_ID_IRQ0   ((unsigned int) 29) /* Advanced Interrupt Controller (IRQ0) */
#define AT91C_ID_IRQ1   ((unsigned int) 30) /* Advanced Interrupt Controller (IRQ1) */
#define AT91C_ID_IRQ2   ((unsigned int) 31) /* Advanced Interrupt Controller (IRQ2) */
#define AT91C_ALL_INT   ((unsigned int) 0xFFFE7FFF) /* ALL VALID INTERRUPTS */

#endif
