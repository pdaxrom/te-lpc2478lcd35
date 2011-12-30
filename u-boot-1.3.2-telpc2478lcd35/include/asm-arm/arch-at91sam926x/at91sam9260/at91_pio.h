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

#ifndef AT91SAM9260_AT91_PIO_H
#define AT91SAM9260_AT91_PIO_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Parallel Input Output Controler */
/* ***************************************************************************** */
typedef struct _AT91S_PIO {
	AT91_REG	 PIO_PER; 	/* PIO Enable Register */
	AT91_REG	 PIO_PDR; 	/* PIO Disable Register */
	AT91_REG	 PIO_PSR; 	/* PIO Status Register */
	AT91_REG	 Reserved0[1]; 	/*  */
	AT91_REG	 PIO_OER; 	/* Output Enable Register */
	AT91_REG	 PIO_ODR; 	/* Output Disable Registerr */
	AT91_REG	 PIO_OSR; 	/* Output Status Register */
	AT91_REG	 Reserved1[1]; 	/*  */
	AT91_REG	 PIO_IFER; 	/* Input Filter Enable Register */
	AT91_REG	 PIO_IFDR; 	/* Input Filter Disable Register */
	AT91_REG	 PIO_IFSR; 	/* Input Filter Status Register */
	AT91_REG	 Reserved2[1]; 	/*  */
	AT91_REG	 PIO_SODR; 	/* Set Output Data Register */
	AT91_REG	 PIO_CODR; 	/* Clear Output Data Register */
	AT91_REG	 PIO_ODSR; 	/* Output Data Status Register */
	AT91_REG	 PIO_PDSR; 	/* Pin Data Status Register */
	AT91_REG	 PIO_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PIO_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PIO_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 PIO_ISR; 	/* Interrupt Status Register */
	AT91_REG	 PIO_MDER; 	/* Multi-driver Enable Register */
	AT91_REG	 PIO_MDDR; 	/* Multi-driver Disable Register */
	AT91_REG	 PIO_MDSR; 	/* Multi-driver Status Register */
	AT91_REG	 Reserved3[1]; 	/*  */
	AT91_REG	 PIO_PPUDR; 	/* Pull-up Disable Register */
	AT91_REG	 PIO_PPUER; 	/* Pull-up Enable Register */
	AT91_REG	 PIO_PPUSR; 	/* Pull-up Status Register */
	AT91_REG	 Reserved4[1]; 	/*  */
	AT91_REG	 PIO_ASR; 	/* Select A Register */
	AT91_REG	 PIO_BSR; 	/* Select B Register */
	AT91_REG	 PIO_ABSR; 	/* AB Select Status Register */
	AT91_REG	 Reserved5[9]; 	/*  */
	AT91_REG	 PIO_OWER; 	/* Output Write Enable Register */
	AT91_REG	 PIO_OWDR; 	/* Output Write Disable Register */
	AT91_REG	 PIO_OWSR; 	/* Output Write Status Register */
} AT91S_PIO, *AT91PS_PIO;

/* ========== Register definition for PIOA peripheral ==========  */
#define AT91C_PIOA_IMR  ((AT91_REG *) 	0xFFFFF448) /* (PIOA) Interrupt Mask Register */
#define AT91C_PIOA_IER  ((AT91_REG *) 	0xFFFFF440) /* (PIOA) Interrupt Enable Register */
#define AT91C_PIOA_OWDR ((AT91_REG *) 	0xFFFFF4A4) /* (PIOA) Output Write Disable Register */
#define AT91C_PIOA_ISR  ((AT91_REG *) 	0xFFFFF44C) /* (PIOA) Interrupt Status Register */
#define AT91C_PIOA_PPUDR ((AT91_REG *) 	0xFFFFF460) /* (PIOA) Pull-up Disable Register */
#define AT91C_PIOA_MDSR ((AT91_REG *) 	0xFFFFF458) /* (PIOA) Multi-driver Status Register */
#define AT91C_PIOA_MDER ((AT91_REG *) 	0xFFFFF450) /* (PIOA) Multi-driver Enable Register */
#define AT91C_PIOA_PER  ((AT91_REG *) 	0xFFFFF400) /* (PIOA) PIO Enable Register */
#define AT91C_PIOA_PSR  ((AT91_REG *) 	0xFFFFF408) /* (PIOA) PIO Status Register */
#define AT91C_PIOA_OER  ((AT91_REG *) 	0xFFFFF410) /* (PIOA) Output Enable Register */
#define AT91C_PIOA_BSR  ((AT91_REG *) 	0xFFFFF474) /* (PIOA) Select B Register */
#define AT91C_PIOA_PPUER ((AT91_REG *) 	0xFFFFF464) /* (PIOA) Pull-up Enable Register */
#define AT91C_PIOA_MDDR ((AT91_REG *) 	0xFFFFF454) /* (PIOA) Multi-driver Disable Register */
#define AT91C_PIOA_PDR  ((AT91_REG *) 	0xFFFFF404) /* (PIOA) PIO Disable Register */
#define AT91C_PIOA_ODR  ((AT91_REG *) 	0xFFFFF414) /* (PIOA) Output Disable Registerr */
#define AT91C_PIOA_IFDR ((AT91_REG *) 	0xFFFFF424) /* (PIOA) Input Filter Disable Register */
#define AT91C_PIOA_ABSR ((AT91_REG *) 	0xFFFFF478) /* (PIOA) AB Select Status Register */
#define AT91C_PIOA_ASR  ((AT91_REG *) 	0xFFFFF470) /* (PIOA) Select A Register */
#define AT91C_PIOA_PPUSR ((AT91_REG *) 	0xFFFFF468) /* (PIOA) Pull-up Status Register */
#define AT91C_PIOA_ODSR ((AT91_REG *) 	0xFFFFF438) /* (PIOA) Output Data Status Register */
#define AT91C_PIOA_SODR ((AT91_REG *) 	0xFFFFF430) /* (PIOA) Set Output Data Register */
#define AT91C_PIOA_IFSR ((AT91_REG *) 	0xFFFFF428) /* (PIOA) Input Filter Status Register */
#define AT91C_PIOA_IFER ((AT91_REG *) 	0xFFFFF420) /* (PIOA) Input Filter Enable Register */
#define AT91C_PIOA_OSR  ((AT91_REG *) 	0xFFFFF418) /* (PIOA) Output Status Register */
#define AT91C_PIOA_IDR  ((AT91_REG *) 	0xFFFFF444) /* (PIOA) Interrupt Disable Register */
#define AT91C_PIOA_PDSR ((AT91_REG *) 	0xFFFFF43C) /* (PIOA) Pin Data Status Register */
#define AT91C_PIOA_CODR ((AT91_REG *) 	0xFFFFF434) /* (PIOA) Clear Output Data Register */
#define AT91C_PIOA_OWSR ((AT91_REG *) 	0xFFFFF4A8) /* (PIOA) Output Write Status Register */
#define AT91C_PIOA_OWER ((AT91_REG *) 	0xFFFFF4A0) /* (PIOA) Output Write Enable Register */
/* ========== Register definition for PIOB peripheral ==========  */
#define AT91C_PIOB_OWSR ((AT91_REG *) 	0xFFFFF6A8) /* (PIOB) Output Write Status Register */
#define AT91C_PIOB_PPUSR ((AT91_REG *) 	0xFFFFF668) /* (PIOB) Pull-up Status Register */
#define AT91C_PIOB_PPUDR ((AT91_REG *) 	0xFFFFF660) /* (PIOB) Pull-up Disable Register */
#define AT91C_PIOB_MDSR ((AT91_REG *) 	0xFFFFF658) /* (PIOB) Multi-driver Status Register */
#define AT91C_PIOB_MDER ((AT91_REG *) 	0xFFFFF650) /* (PIOB) Multi-driver Enable Register */
#define AT91C_PIOB_IMR  ((AT91_REG *) 	0xFFFFF648) /* (PIOB) Interrupt Mask Register */
#define AT91C_PIOB_OSR  ((AT91_REG *) 	0xFFFFF618) /* (PIOB) Output Status Register */
#define AT91C_PIOB_OER  ((AT91_REG *) 	0xFFFFF610) /* (PIOB) Output Enable Register */
#define AT91C_PIOB_PSR  ((AT91_REG *) 	0xFFFFF608) /* (PIOB) PIO Status Register */
#define AT91C_PIOB_PER  ((AT91_REG *) 	0xFFFFF600) /* (PIOB) PIO Enable Register */
#define AT91C_PIOB_BSR  ((AT91_REG *) 	0xFFFFF674) /* (PIOB) Select B Register */
#define AT91C_PIOB_PPUER ((AT91_REG *) 	0xFFFFF664) /* (PIOB) Pull-up Enable Register */
#define AT91C_PIOB_IFDR ((AT91_REG *) 	0xFFFFF624) /* (PIOB) Input Filter Disable Register */
#define AT91C_PIOB_ODR  ((AT91_REG *) 	0xFFFFF614) /* (PIOB) Output Disable Registerr */
#define AT91C_PIOB_ABSR ((AT91_REG *) 	0xFFFFF678) /* (PIOB) AB Select Status Register */
#define AT91C_PIOB_ASR  ((AT91_REG *) 	0xFFFFF670) /* (PIOB) Select A Register */
#define AT91C_PIOB_IFER ((AT91_REG *) 	0xFFFFF620) /* (PIOB) Input Filter Enable Register */
#define AT91C_PIOB_IFSR ((AT91_REG *) 	0xFFFFF628) /* (PIOB) Input Filter Status Register */
#define AT91C_PIOB_SODR ((AT91_REG *) 	0xFFFFF630) /* (PIOB) Set Output Data Register */
#define AT91C_PIOB_ODSR ((AT91_REG *) 	0xFFFFF638) /* (PIOB) Output Data Status Register */
#define AT91C_PIOB_CODR ((AT91_REG *) 	0xFFFFF634) /* (PIOB) Clear Output Data Register */
#define AT91C_PIOB_PDSR ((AT91_REG *) 	0xFFFFF63C) /* (PIOB) Pin Data Status Register */
#define AT91C_PIOB_OWER ((AT91_REG *) 	0xFFFFF6A0) /* (PIOB) Output Write Enable Register */
#define AT91C_PIOB_IER  ((AT91_REG *) 	0xFFFFF640) /* (PIOB) Interrupt Enable Register */
#define AT91C_PIOB_OWDR ((AT91_REG *) 	0xFFFFF6A4) /* (PIOB) Output Write Disable Register */
#define AT91C_PIOB_MDDR ((AT91_REG *) 	0xFFFFF654) /* (PIOB) Multi-driver Disable Register */
#define AT91C_PIOB_ISR  ((AT91_REG *) 	0xFFFFF64C) /* (PIOB) Interrupt Status Register */
#define AT91C_PIOB_IDR  ((AT91_REG *) 	0xFFFFF644) /* (PIOB) Interrupt Disable Register */
#define AT91C_PIOB_PDR  ((AT91_REG *) 	0xFFFFF604) /* (PIOB) PIO Disable Register */
/* ========== Register definition for PIOC peripheral ==========  */
#define AT91C_PIOC_IFDR ((AT91_REG *) 	0xFFFFF824) /* (PIOC) Input Filter Disable Register */
#define AT91C_PIOC_ODR  ((AT91_REG *) 	0xFFFFF814) /* (PIOC) Output Disable Registerr */
#define AT91C_PIOC_ABSR ((AT91_REG *) 	0xFFFFF878) /* (PIOC) AB Select Status Register */
#define AT91C_PIOC_SODR ((AT91_REG *) 	0xFFFFF830) /* (PIOC) Set Output Data Register */
#define AT91C_PIOC_IFSR ((AT91_REG *) 	0xFFFFF828) /* (PIOC) Input Filter Status Register */
#define AT91C_PIOC_CODR ((AT91_REG *) 	0xFFFFF834) /* (PIOC) Clear Output Data Register */
#define AT91C_PIOC_ODSR ((AT91_REG *) 	0xFFFFF838) /* (PIOC) Output Data Status Register */
#define AT91C_PIOC_IER  ((AT91_REG *) 	0xFFFFF840) /* (PIOC) Interrupt Enable Register */
#define AT91C_PIOC_IMR  ((AT91_REG *) 	0xFFFFF848) /* (PIOC) Interrupt Mask Register */
#define AT91C_PIOC_OWDR ((AT91_REG *) 	0xFFFFF8A4) /* (PIOC) Output Write Disable Register */
#define AT91C_PIOC_MDDR ((AT91_REG *) 	0xFFFFF854) /* (PIOC) Multi-driver Disable Register */
#define AT91C_PIOC_PDSR ((AT91_REG *) 	0xFFFFF83C) /* (PIOC) Pin Data Status Register */
#define AT91C_PIOC_IDR  ((AT91_REG *) 	0xFFFFF844) /* (PIOC) Interrupt Disable Register */
#define AT91C_PIOC_ISR  ((AT91_REG *) 	0xFFFFF84C) /* (PIOC) Interrupt Status Register */
#define AT91C_PIOC_PDR  ((AT91_REG *) 	0xFFFFF804) /* (PIOC) PIO Disable Register */
#define AT91C_PIOC_OWSR ((AT91_REG *) 	0xFFFFF8A8) /* (PIOC) Output Write Status Register */
#define AT91C_PIOC_OWER ((AT91_REG *) 	0xFFFFF8A0) /* (PIOC) Output Write Enable Register */
#define AT91C_PIOC_ASR  ((AT91_REG *) 	0xFFFFF870) /* (PIOC) Select A Register */
#define AT91C_PIOC_PPUSR ((AT91_REG *) 	0xFFFFF868) /* (PIOC) Pull-up Status Register */
#define AT91C_PIOC_PPUDR ((AT91_REG *) 	0xFFFFF860) /* (PIOC) Pull-up Disable Register */
#define AT91C_PIOC_MDSR ((AT91_REG *) 	0xFFFFF858) /* (PIOC) Multi-driver Status Register */
#define AT91C_PIOC_MDER ((AT91_REG *) 	0xFFFFF850) /* (PIOC) Multi-driver Enable Register */
#define AT91C_PIOC_IFER ((AT91_REG *) 	0xFFFFF820) /* (PIOC) Input Filter Enable Register */
#define AT91C_PIOC_OSR  ((AT91_REG *) 	0xFFFFF818) /* (PIOC) Output Status Register */
#define AT91C_PIOC_OER  ((AT91_REG *) 	0xFFFFF810) /* (PIOC) Output Enable Register */
#define AT91C_PIOC_PSR  ((AT91_REG *) 	0xFFFFF808) /* (PIOC) PIO Status Register */
#define AT91C_PIOC_PER  ((AT91_REG *) 	0xFFFFF800) /* (PIOC) PIO Enable Register */
#define AT91C_PIOC_BSR  ((AT91_REG *) 	0xFFFFF874) /* (PIOC) Select B Register */
#define AT91C_PIOC_PPUER ((AT91_REG *) 	0xFFFFF864) /* (PIOC) Pull-up Enable Register */

/* ***************************************************************************** */
/*               PIO DEFINITIONS FOR AT91SAM9260 */
/* ***************************************************************************** */
#define AT91C_PIO_PA0        ((unsigned int) 1 <<  0) /* Pin Controlled by PA0 */
#define AT91C_PA0_SPI0_MISO ((unsigned int) AT91C_PIO_PA0) /*  SPI 0 Master In Slave */
#define AT91C_PA0_MCDB0    ((unsigned int) AT91C_PIO_PA0) /*  Multimedia Card B Data 0 */
#define AT91C_PIO_PA1        ((unsigned int) 1 <<  1) /* Pin Controlled by PA1 */
#define AT91C_PA1_SPI0_MOSI ((unsigned int) AT91C_PIO_PA1) /*  SPI 0 Master Out Slave */
#define AT91C_PA1_MCCDB    ((unsigned int) AT91C_PIO_PA1) /*  Multimedia Card B Command */
#define AT91C_PIO_PA10       ((unsigned int) 1 << 10) /* Pin Controlled by PA10 */
#define AT91C_PA10_MCDA2    ((unsigned int) AT91C_PIO_PA10) /*  Multimedia Card A Data 2 */
#define AT91C_PA10_ETX2     ((unsigned int) AT91C_PIO_PA10) /*  Ethernet MAC Transmit Data 2 */
#define AT91C_PIO_PA11       ((unsigned int) 1 << 11) /* Pin Controlled by PA11 */
#define AT91C_PA11_MCDA3    ((unsigned int) AT91C_PIO_PA11) /*  Multimedia Card A Data 3 */
#define AT91C_PA11_ETX3     ((unsigned int) AT91C_PIO_PA11) /*  Ethernet MAC Transmit Data 3 */
#define AT91C_PIO_PA12       ((unsigned int) 1 << 12) /* Pin Controlled by PA12 */
#define AT91C_PA12_ETX0     ((unsigned int) AT91C_PIO_PA12) /*  Ethernet MAC Transmit Data 0 */
#define AT91C_PIO_PA13       ((unsigned int) 1 << 13) /* Pin Controlled by PA13 */
#define AT91C_PA13_ETX1     ((unsigned int) AT91C_PIO_PA13) /*  Ethernet MAC Transmit Data 1 */
#define AT91C_PIO_PA14       ((unsigned int) 1 << 14) /* Pin Controlled by PA14 */
#define AT91C_PA14_ERX0     ((unsigned int) AT91C_PIO_PA14) /*  Ethernet MAC Receive Data 0 */
#define AT91C_PIO_PA15       ((unsigned int) 1 << 15) /* Pin Controlled by PA15 */
#define AT91C_PA15_ERX1     ((unsigned int) AT91C_PIO_PA15) /*  Ethernet MAC Receive Data 1 */
#define AT91C_PIO_PA16       ((unsigned int) 1 << 16) /* Pin Controlled by PA16 */
#define AT91C_PA16_ETXEN    ((unsigned int) AT91C_PIO_PA16) /*  Ethernet MAC Transmit Enable */
#define AT91C_PIO_PA17       ((unsigned int) 1 << 17) /* Pin Controlled by PA17 */
#define AT91C_PA17_ERXDV    ((unsigned int) AT91C_PIO_PA17) /*  Ethernet MAC Receive Data Valid */
#define AT91C_PIO_PA18       ((unsigned int) 1 << 18) /* Pin Controlled by PA18 */
#define AT91C_PA18_ERXER    ((unsigned int) AT91C_PIO_PA18) /*  Ethernet MAC Receive Error */
#define AT91C_PIO_PA19       ((unsigned int) 1 << 19) /* Pin Controlled by PA19 */
#define AT91C_PA19_ETXCK    ((unsigned int) AT91C_PIO_PA19) /*  Ethernet MAC Transmit Clock/Reference Clock */
#define AT91C_PIO_PA2        ((unsigned int) 1 <<  2) /* Pin Controlled by PA2 */
#define AT91C_PA2_SPI0_SPCK ((unsigned int) AT91C_PIO_PA2) /*  SPI 0 Serial Clock */
#define AT91C_PIO_PA20       ((unsigned int) 1 << 20) /* Pin Controlled by PA20 */
#define AT91C_PA20_EMDC     ((unsigned int) AT91C_PIO_PA20) /*  Ethernet MAC Management Data Clock */
#define AT91C_PIO_PA21       ((unsigned int) 1 << 21) /* Pin Controlled by PA21 */
#define AT91C_PA21_EMDIO    ((unsigned int) AT91C_PIO_PA21) /*  Ethernet MAC Management Data Input/Output */
#define AT91C_PIO_PA22       ((unsigned int) 1 << 22) /* Pin Controlled by PA22 */
#define AT91C_PA22_ADTRG    ((unsigned int) AT91C_PIO_PA22) /*  ADC Trigger */
#define AT91C_PA22_ETXER    ((unsigned int) AT91C_PIO_PA22) /*  Ethernet MAC Transmikt Coding Error */
#define AT91C_PIO_PA23       ((unsigned int) 1 << 23) /* Pin Controlled by PA23 */
#define AT91C_PA23_TWD      ((unsigned int) AT91C_PIO_PA23) /*  TWI Two-wire Serial Data */
#define AT91C_PA23_ETX2     ((unsigned int) AT91C_PIO_PA23) /*  Ethernet MAC Transmit Data 2 */
#define AT91C_PIO_PA24       ((unsigned int) 1 << 24) /* Pin Controlled by PA24 */
#define AT91C_PA24_TWCK     ((unsigned int) AT91C_PIO_PA24) /*  TWI Two-wire Serial Clock */
#define AT91C_PA24_ETX3     ((unsigned int) AT91C_PIO_PA24) /*  Ethernet MAC Transmit Data 3 */
#define AT91C_PIO_PA25       ((unsigned int) 1 << 25) /* Pin Controlled by PA25 */
#define AT91C_PA25_TCLK0    ((unsigned int) AT91C_PIO_PA25) /*  Timer Counter 0 external clock input */
#define AT91C_PA25_ERX2     ((unsigned int) AT91C_PIO_PA25) /*  Ethernet MAC Receive Data 2 */
#define AT91C_PIO_PA26       ((unsigned int) 1 << 26) /* Pin Controlled by PA26 */
#define AT91C_PA26_TIOA0    ((unsigned int) AT91C_PIO_PA26) /*  Timer Counter 0 Multipurpose Timer I/O Pin A */
#define AT91C_PA26_ERX3     ((unsigned int) AT91C_PIO_PA26) /*  Ethernet MAC Receive Data 3 */
#define AT91C_PIO_PA27       ((unsigned int) 1 << 27) /* Pin Controlled by PA27 */
#define AT91C_PA27_TIOA1    ((unsigned int) AT91C_PIO_PA27) /*  Timer Counter 1 Multipurpose Timer I/O Pin A */
#define AT91C_PA27_ERXCK    ((unsigned int) AT91C_PIO_PA27) /*  Ethernet MAC Receive Clock */
#define AT91C_PIO_PA28       ((unsigned int) 1 << 28) /* Pin Controlled by PA28 */
#define AT91C_PA28_TIOA2    ((unsigned int) AT91C_PIO_PA28) /*  Timer Counter 2 Multipurpose Timer I/O Pin A */
#define AT91C_PA28_ECRS     ((unsigned int) AT91C_PIO_PA28) /*  Ethernet MAC Carrier Sense/Carrier Sense and Data Valid */
#define AT91C_PIO_PA29       ((unsigned int) 1 << 29) /* Pin Controlled by PA29 */
#define AT91C_PA29_SCK1     ((unsigned int) AT91C_PIO_PA29) /*  USART 1 Serial Clock */
#define AT91C_PA29_ECOL     ((unsigned int) AT91C_PIO_PA29) /*  Ethernet MAC Collision Detected */
#define AT91C_PIO_PA3        ((unsigned int) 1 <<  3) /* Pin Controlled by PA3 */
#define AT91C_PA3_SPI0_NPCS0 ((unsigned int) AT91C_PIO_PA3) /*  SPI 0 Peripheral Chip Select 0 */
#define AT91C_PA3_MCDB3    ((unsigned int) AT91C_PIO_PA3) /*  Multimedia Card B Data 3 */
#define AT91C_PIO_PA30       ((unsigned int) 1 << 30) /* Pin Controlled by PA30 */
#define AT91C_PA30_SCK2     ((unsigned int) AT91C_PIO_PA30) /*  USART 2 Serial Clock */
#define AT91C_PA30_RXD4     ((unsigned int) AT91C_PIO_PA30) /*  USART 4 Receive Data */
#define AT91C_PIO_PA31       ((unsigned int) 1 << 31) /* Pin Controlled by PA31 */
#define AT91C_PA31_SCK0     ((unsigned int) AT91C_PIO_PA31) /*  USART 0 Serial Clock */
#define AT91C_PA31_TXD4     ((unsigned int) AT91C_PIO_PA31) /*  USART 4 Transmit Data */
#define AT91C_PIO_PA4        ((unsigned int) 1 <<  4) /* Pin Controlled by PA4 */
#define AT91C_PA4_RTS2     ((unsigned int) AT91C_PIO_PA4) /*  USART 2 Ready To Send */
#define AT91C_PA4_MCDB2    ((unsigned int) AT91C_PIO_PA4) /*  Multimedia Card B Data 2 */
#define AT91C_PIO_PA5        ((unsigned int) 1 <<  5) /* Pin Controlled by PA5 */
#define AT91C_PA5_CTS2     ((unsigned int) AT91C_PIO_PA5) /*  USART 2 Clear To Send */
#define AT91C_PA5_MCDB1    ((unsigned int) AT91C_PIO_PA5) /*  Multimedia Card B Data 1 */
#define AT91C_PIO_PA6        ((unsigned int) 1 <<  6) /* Pin Controlled by PA6 */
#define AT91C_PA6_MCDA0    ((unsigned int) AT91C_PIO_PA6) /*  Multimedia Card A Data 0 */
#define AT91C_PIO_PA7        ((unsigned int) 1 <<  7) /* Pin Controlled by PA7 */
#define AT91C_PA7_MCCDA    ((unsigned int) AT91C_PIO_PA7) /*  Multimedia Card A Command */
#define AT91C_PIO_PA8        ((unsigned int) 1 <<  8) /* Pin Controlled by PA8 */
#define AT91C_PA8_MCCK     ((unsigned int) AT91C_PIO_PA8) /*  Multimedia Card Clock */
#define AT91C_PIO_PA9        ((unsigned int) 1 <<  9) /* Pin Controlled by PA9 */
#define AT91C_PA9_MCDA1    ((unsigned int) AT91C_PIO_PA9) /*  Multimedia Card A Data 1 */
#define AT91C_PIO_PB0        ((unsigned int) 1 <<  0) /* Pin Controlled by PB0 */
#define AT91C_PB0_SPI1_MISO ((unsigned int) AT91C_PIO_PB0) /*  SPI 1 Master In Slave */
#define AT91C_PB0_TIOA3    ((unsigned int) AT91C_PIO_PB0) /*  Timer Counter 3 Multipurpose Timer I/O Pin A */
#define AT91C_PIO_PB1        ((unsigned int) 1 <<  1) /* Pin Controlled by PB1 */
#define AT91C_PB1_SPI1_MOSI ((unsigned int) AT91C_PIO_PB1) /*  SPI 1 Master Out Slave */
#define AT91C_PB1_TIOB3    ((unsigned int) AT91C_PIO_PB1) /*  Timer Counter 3 Multipurpose Timer I/O Pin B */
#define AT91C_PIO_PB10       ((unsigned int) 1 << 10) /* Pin Controlled by PB10 */
#define AT91C_PB10_TXD3     ((unsigned int) AT91C_PIO_PB10) /*  USART 3 Transmit Data */
#define AT91C_PB10_ISI_D8   ((unsigned int) AT91C_PIO_PB10) /*  Image Sensor Data 8 */
#define AT91C_PIO_PB11       ((unsigned int) 1 << 11) /* Pin Controlled by PB11 */
#define AT91C_PB11_RXD3     ((unsigned int) AT91C_PIO_PB11) /*  USART 3 Receive Data */
#define AT91C_PB11_ISI_D9   ((unsigned int) AT91C_PIO_PB11) /*  Image Sensor Data 9 */
#define AT91C_PIO_PB12       ((unsigned int) 1 << 12) /* Pin Controlled by PB12 */
#define AT91C_PB12_TXD5     ((unsigned int) AT91C_PIO_PB12) /*  USART 5 Transmit Data */
#define AT91C_PB12_ISI_D10  ((unsigned int) AT91C_PIO_PB12) /*  Image Sensor Data 10 */
#define AT91C_PIO_PB13       ((unsigned int) 1 << 13) /* Pin Controlled by PB13 */
#define AT91C_PB13_RXD5     ((unsigned int) AT91C_PIO_PB13) /*  USART 5 Receive Data */
#define AT91C_PB13_ISI_D11  ((unsigned int) AT91C_PIO_PB13) /*  Image Sensor Data 11 */
#define AT91C_PIO_PB14       ((unsigned int) 1 << 14) /* Pin Controlled by PB14 */
#define AT91C_PB14_DRXD     ((unsigned int) AT91C_PIO_PB14) /*  DBGU Debug Receive Data */
#define AT91C_PIO_PB15       ((unsigned int) 1 << 15) /* Pin Controlled by PB15 */
#define AT91C_PB15_DTXD     ((unsigned int) AT91C_PIO_PB15) /*  DBGU Debug Transmit Data */
#define AT91C_PIO_PB16       ((unsigned int) 1 << 16) /* Pin Controlled by PB16 */
#define AT91C_PB16_TK0      ((unsigned int) AT91C_PIO_PB16) /*  SSC0 Transmit Clock */
#define AT91C_PB16_TCLK3    ((unsigned int) AT91C_PIO_PB16) /*  Timer Counter 3 external clock input */
#define AT91C_PIO_PB17       ((unsigned int) 1 << 17) /* Pin Controlled by PB17 */
#define AT91C_PB17_TF0      ((unsigned int) AT91C_PIO_PB17) /*  SSC0 Transmit Frame Sync */
#define AT91C_PB17_TCLK4    ((unsigned int) AT91C_PIO_PB17) /*  Timer Counter 4 external clock input */
#define AT91C_PIO_PB18       ((unsigned int) 1 << 18) /* Pin Controlled by PB18 */
#define AT91C_PB18_TD0      ((unsigned int) AT91C_PIO_PB18) /*  SSC0 Transmit data */
#define AT91C_PB18_TIOB4    ((unsigned int) AT91C_PIO_PB18) /*  Timer Counter 4 Multipurpose Timer I/O Pin B */
#define AT91C_PIO_PB19       ((unsigned int) 1 << 19) /* Pin Controlled by PB19 */
#define AT91C_PB19_RD0      ((unsigned int) AT91C_PIO_PB19) /*  SSC0 Receive Data */
#define AT91C_PB19_TIOB5    ((unsigned int) AT91C_PIO_PB19) /*  Timer Counter 5 Multipurpose Timer I/O Pin B */
#define AT91C_PIO_PB2        ((unsigned int) 1 <<  2) /* Pin Controlled by PB2 */
#define AT91C_PB2_SPI1_SPCK ((unsigned int) AT91C_PIO_PB2) /*  SPI 1 Serial Clock */
#define AT91C_PB2_TIOA4    ((unsigned int) AT91C_PIO_PB2) /*  Timer Counter 4 Multipurpose Timer I/O Pin A */
#define AT91C_PIO_PB20       ((unsigned int) 1 << 20) /* Pin Controlled by PB20 */
#define AT91C_PB20_RK0      ((unsigned int) AT91C_PIO_PB20) /*  SSC0 Receive Clock */
#define AT91C_PB20_ISI_D0   ((unsigned int) AT91C_PIO_PB20) /*  Image Sensor Data 0 */
#define AT91C_PIO_PB21       ((unsigned int) 1 << 21) /* Pin Controlled by PB21 */
#define AT91C_PB21_RF0      ((unsigned int) AT91C_PIO_PB21) /*  SSC0 Receive Frame Sync */
#define AT91C_PB21_ISI_D1   ((unsigned int) AT91C_PIO_PB21) /*  Image Sensor Data 1 */
#define AT91C_PIO_PB22       ((unsigned int) 1 << 22) /* Pin Controlled by PB22 */
#define AT91C_PB22_DSR0     ((unsigned int) AT91C_PIO_PB22) /*  USART 0 Data Set ready */
#define AT91C_PB22_ISI_D2   ((unsigned int) AT91C_PIO_PB22) /*  Image Sensor Data 2 */
#define AT91C_PIO_PB23       ((unsigned int) 1 << 23) /* Pin Controlled by PB23 */
#define AT91C_PB23_DCD0     ((unsigned int) AT91C_PIO_PB23) /*  USART 0 Data Carrier Detect */
#define AT91C_PB23_ISI_D3   ((unsigned int) AT91C_PIO_PB23) /*  Image Sensor Data 3 */
#define AT91C_PIO_PB24       ((unsigned int) 1 << 24) /* Pin Controlled by PB24 */
#define AT91C_PB24_DTR0     ((unsigned int) AT91C_PIO_PB24) /*  USART 0 Data Terminal ready */
#define AT91C_PB24_ISI_D4   ((unsigned int) AT91C_PIO_PB24) /*  Image Sensor Data 4 */
#define AT91C_PIO_PB25       ((unsigned int) 1 << 25) /* Pin Controlled by PB25 */
#define AT91C_PB25_RI0      ((unsigned int) AT91C_PIO_PB25) /*  USART 0 Ring Indicator */
#define AT91C_PB25_ISI_D5   ((unsigned int) AT91C_PIO_PB25) /*  Image Sensor Data 5 */
#define AT91C_PIO_PB26       ((unsigned int) 1 << 26) /* Pin Controlled by PB26 */
#define AT91C_PB26_RTS0     ((unsigned int) AT91C_PIO_PB26) /*  USART 0 Ready To Send */
#define AT91C_PB26_ISI_D6   ((unsigned int) AT91C_PIO_PB26) /*  Image Sensor Data 6 */
#define AT91C_PIO_PB27       ((unsigned int) 1 << 27) /* Pin Controlled by PB27 */
#define AT91C_PB27_CTS0     ((unsigned int) AT91C_PIO_PB27) /*  USART 0 Clear To Send */
#define AT91C_PB27_ISI_D7   ((unsigned int) AT91C_PIO_PB27) /*  Image Sensor Data 7 */
#define AT91C_PIO_PB28       ((unsigned int) 1 << 28) /* Pin Controlled by PB28 */
#define AT91C_PB28_RTS1     ((unsigned int) AT91C_PIO_PB28) /*  USART 1 Ready To Send */
#define AT91C_PB28_ISI_PCK  ((unsigned int) AT91C_PIO_PB28) /*  Image Sensor Data Clock */
#define AT91C_PIO_PB29       ((unsigned int) 1 << 29) /* Pin Controlled by PB29 */
#define AT91C_PB29_CTS1     ((unsigned int) AT91C_PIO_PB29) /*  USART 1 Clear To Send */
#define AT91C_PB29_ISI_VSYNC ((unsigned int) AT91C_PIO_PB29) /*  Image Sensor Vertical Synchro */
#define AT91C_PIO_PB3        ((unsigned int) 1 <<  3) /* Pin Controlled by PB3 */
#define AT91C_PB3_SPI1_NPCS0 ((unsigned int) AT91C_PIO_PB3) /*  SPI 1 Peripheral Chip Select 0 */
#define AT91C_PB3_TIOA5    ((unsigned int) AT91C_PIO_PB3) /*  Timer Counter 5 Multipurpose Timer I/O Pin A */
#define AT91C_PIO_PB30       ((unsigned int) 1 << 30) /* Pin Controlled by PB30 */
#define AT91C_PB30_PCK0_0   ((unsigned int) AT91C_PIO_PB30) /*  PMC Programmable Clock Output 0 */
#define AT91C_PB30_ISI_HSYNC ((unsigned int) AT91C_PIO_PB30) /*  Image Sensor Horizontal Synchro */
#define AT91C_PIO_PB31       ((unsigned int) 1 << 31) /* Pin Controlled by PB31 */
#define AT91C_PB31_PCK1_0   ((unsigned int) AT91C_PIO_PB31) /*  PMC Programmable Clock Output 1 */
#define AT91C_PB31_ISI_MCK  ((unsigned int) AT91C_PIO_PB31) /*  Image Sensor Reference Clock */
#define AT91C_PIO_PB4        ((unsigned int) 1 <<  4) /* Pin Controlled by PB4 */
#define AT91C_PB4_TXD0     ((unsigned int) AT91C_PIO_PB4) /*  USART 0 Transmit Data */
#define AT91C_PIO_PB5        ((unsigned int) 1 <<  5) /* Pin Controlled by PB5 */
#define AT91C_PB5_RXD0     ((unsigned int) AT91C_PIO_PB5) /*  USART 0 Receive Data */
#define AT91C_PIO_PB6        ((unsigned int) 1 <<  6) /* Pin Controlled by PB6 */
#define AT91C_PB6_TXD1     ((unsigned int) AT91C_PIO_PB6) /*  USART 1 Transmit Data */
#define AT91C_PB6_TCLK1    ((unsigned int) AT91C_PIO_PB6) /*  Timer Counter 1 external clock input */
#define AT91C_PIO_PB7        ((unsigned int) 1 <<  7) /* Pin Controlled by PB7 */
#define AT91C_PB7_RXD1     ((unsigned int) AT91C_PIO_PB7) /*  USART 1 Receive Data */
#define AT91C_PB7_TCLK2    ((unsigned int) AT91C_PIO_PB7) /*  Timer Counter 2 external clock input */
#define AT91C_PIO_PB8        ((unsigned int) 1 <<  8) /* Pin Controlled by PB8 */
#define AT91C_PB8_TXD2     ((unsigned int) AT91C_PIO_PB8) /*  USART 2 Transmit Data */
#define AT91C_PIO_PB9        ((unsigned int) 1 <<  9) /* Pin Controlled by PB9 */
#define AT91C_PB9_RXD2     ((unsigned int) AT91C_PIO_PB9) /*  USART 2 Receive Data */
#define AT91C_PIO_PC0        ((unsigned int) 1 <<  0) /* Pin Controlled by PC0 */
#define AT91C_PC0_AD0      ((unsigned int) AT91C_PIO_PC0) /*  ADC Analog Input 0 */
#define AT91C_PC0_SCK3     ((unsigned int) AT91C_PIO_PC0) /*  USART 3 Serial Clock */
#define AT91C_PIO_PC1        ((unsigned int) 1 <<  1) /* Pin Controlled by PC1 */
#define AT91C_PC1_AD1      ((unsigned int) AT91C_PIO_PC1) /*  ADC Analog Input 1 */
#define AT91C_PC1_PCK0     ((unsigned int) AT91C_PIO_PC1) /*  PMC Programmable Clock Output 0 */
#define AT91C_PIO_PC10       ((unsigned int) 1 << 10) /* Pin Controlled by PC10 */
#define AT91C_PC10_A25_CFRNW ((unsigned int) AT91C_PIO_PC10) /*  Address Bus[25] */
#define AT91C_PC10_CTS3     ((unsigned int) AT91C_PIO_PC10) /*  USART 3 Clear To Send */
#define AT91C_PIO_PC11       ((unsigned int) 1 << 11) /* Pin Controlled by PC11 */
#define AT91C_PC11_NCS2     ((unsigned int) AT91C_PIO_PC11) /*  Chip Select Line 2 */
#define AT91C_PC11_SPI0_NPCS1 ((unsigned int) AT91C_PIO_PC11) /*  SPI 0 Peripheral Chip Select 1 */
#define AT91C_PIO_PC12       ((unsigned int) 1 << 12) /* Pin Controlled by PC12 */
#define AT91C_PC12_IRQ0     ((unsigned int) AT91C_PIO_PC12) /*  External Interrupt 0 */
#define AT91C_PC12_NCS7     ((unsigned int) AT91C_PIO_PC12) /*  Chip Select Line 7 */
#define AT91C_PIO_PC13       ((unsigned int) 1 << 13) /* Pin Controlled by PC13 */
#define AT91C_PC13_FIQ      ((unsigned int) AT91C_PIO_PC13) /*  AIC Fast Interrupt Input */
#define AT91C_PC13_NCS6     ((unsigned int) AT91C_PIO_PC13) /*  Chip Select Line 6 */
#define AT91C_PIO_PC14       ((unsigned int) 1 << 14) /* Pin Controlled by PC14 */
#define AT91C_PC14_NCS3_NANDCS ((unsigned int) AT91C_PIO_PC14) /*  Chip Select Line 3 */
#define AT91C_PC14_IRQ2     ((unsigned int) AT91C_PIO_PC14) /*  External Interrupt 2 */
#define AT91C_PIO_PC15       ((unsigned int) 1 << 15) /* Pin Controlled by PC15 */
#define AT91C_PC15_NWAIT    ((unsigned int) AT91C_PIO_PC15) /*  External Wait Signal */
#define AT91C_PC15_IRQ1     ((unsigned int) AT91C_PIO_PC15) /*  External Interrupt 1 */
#define AT91C_PIO_PC16       ((unsigned int) 1 << 16) /* Pin Controlled by PC16 */
#define AT91C_PC16_D16      ((unsigned int) AT91C_PIO_PC16) /*  Data Bus[16] */
#define AT91C_PC16_SPI0_NPCS2 ((unsigned int) AT91C_PIO_PC16) /*  SPI 0 Peripheral Chip Select 2 */
#define AT91C_PIO_PC17       ((unsigned int) 1 << 17) /* Pin Controlled by PC17 */
#define AT91C_PC17_D17      ((unsigned int) AT91C_PIO_PC17) /*  Data Bus[17] */
#define AT91C_PC17_SPI0_NPCS3 ((unsigned int) AT91C_PIO_PC17) /*  SPI 0 Peripheral Chip Select 3 */
#define AT91C_PIO_PC18       ((unsigned int) 1 << 18) /* Pin Controlled by PC18 */
#define AT91C_PC18_D18      ((unsigned int) AT91C_PIO_PC18) /*  Data Bus[18] */
#define AT91C_PC18_SPI1_NPCS1 ((unsigned int) AT91C_PIO_PC18) /*  SPI 1 Peripheral Chip Select 1 */
#define AT91C_PIO_PC19       ((unsigned int) 1 << 19) /* Pin Controlled by PC19 */
#define AT91C_PC19_D19      ((unsigned int) AT91C_PIO_PC19) /*  Data Bus[19] */
#define AT91C_PC19_SPI1_NPCS2 ((unsigned int) AT91C_PIO_PC19) /*  SPI 1 Peripheral Chip Select 2 */
#define AT91C_PIO_PC2        ((unsigned int) 1 <<  2) /* Pin Controlled by PC2 */
#define AT91C_PC2_AD2      ((unsigned int) AT91C_PIO_PC2) /*  ADC Analog Input 2 */
#define AT91C_PC2_PCK1     ((unsigned int) AT91C_PIO_PC2) /*  PMC Programmable Clock Output 1 */
#define AT91C_PIO_PC20       ((unsigned int) 1 << 20) /* Pin Controlled by PC20 */
#define AT91C_PC20_D20      ((unsigned int) AT91C_PIO_PC20) /*  Data Bus[20] */
#define AT91C_PC20_SPI1_NPCS3 ((unsigned int) AT91C_PIO_PC20) /*  SPI 1 Peripheral Chip Select 3 */
#define AT91C_PIO_PC21       ((unsigned int) 1 << 21) /* Pin Controlled by PC21 */
#define AT91C_PC21_D21      ((unsigned int) AT91C_PIO_PC21) /*  Data Bus[21] */
#define AT91C_PC21_EF100    ((unsigned int) AT91C_PIO_PC21) /*  Ethernet MAC Force 100 Mbits/sec */
#define AT91C_PIO_PC22       ((unsigned int) 1 << 22) /* Pin Controlled by PC22 */
#define AT91C_PC22_D22      ((unsigned int) AT91C_PIO_PC22) /*  Data Bus[22] */
#define AT91C_PC22_TCLK5    ((unsigned int) AT91C_PIO_PC22) /*  Timer Counter 5 external clock input */
#define AT91C_PIO_PC23       ((unsigned int) 1 << 23) /* Pin Controlled by PC23 */
#define AT91C_PC23_D23      ((unsigned int) AT91C_PIO_PC23) /*  Data Bus[23] */
#define AT91C_PIO_PC24       ((unsigned int) 1 << 24) /* Pin Controlled by PC24 */
#define AT91C_PC24_D24      ((unsigned int) AT91C_PIO_PC24) /*  Data Bus[24] */
#define AT91C_PIO_PC25       ((unsigned int) 1 << 25) /* Pin Controlled by PC25 */
#define AT91C_PC25_D25      ((unsigned int) AT91C_PIO_PC25) /*  Data Bus[25] */
#define AT91C_PIO_PC26       ((unsigned int) 1 << 26) /* Pin Controlled by PC26 */
#define AT91C_PC26_D26      ((unsigned int) AT91C_PIO_PC26) /*  Data Bus[26] */
#define AT91C_PIO_PC27       ((unsigned int) 1 << 27) /* Pin Controlled by PC27 */
#define AT91C_PC27_D27      ((unsigned int) AT91C_PIO_PC27) /*  Data Bus[27] */
#define AT91C_PIO_PC28       ((unsigned int) 1 << 28) /* Pin Controlled by PC28 */
#define AT91C_PC28_D28      ((unsigned int) AT91C_PIO_PC28) /*  Data Bus[28] */
#define AT91C_PIO_PC29       ((unsigned int) 1 << 29) /* Pin Controlled by PC29 */
#define AT91C_PC29_D29      ((unsigned int) AT91C_PIO_PC29) /*  Data Bus[29] */
#define AT91C_PIO_PC3        ((unsigned int) 1 <<  3) /* Pin Controlled by PC3 */
#define AT91C_PC3_AD3      ((unsigned int) AT91C_PIO_PC3) /*  ADC Analog Input 3 */
#define AT91C_PC3_SPI1_NPCS3 ((unsigned int) AT91C_PIO_PC3) /*  SPI 1 Peripheral Chip Select 3 */
#define AT91C_PIO_PC30       ((unsigned int) 1 << 30) /* Pin Controlled by PC30 */
#define AT91C_PC30_D30      ((unsigned int) AT91C_PIO_PC30) /*  Data Bus[30] */
#define AT91C_PIO_PC31       ((unsigned int) 1 << 31) /* Pin Controlled by PC31 */
#define AT91C_PC31_D31      ((unsigned int) AT91C_PIO_PC31) /*  Data Bus[31] */
#define AT91C_PIO_PC4        ((unsigned int) 1 <<  4) /* Pin Controlled by PC4 */
#define AT91C_PC4_A23      ((unsigned int) AT91C_PIO_PC4) /*  Address Bus[23] */
#define AT91C_PC4_SPI1_NPCS2 ((unsigned int) AT91C_PIO_PC4) /*  SPI 1 Peripheral Chip Select 2 */
#define AT91C_PIO_PC5        ((unsigned int) 1 <<  5) /* Pin Controlled by PC5 */
#define AT91C_PC5_A24      ((unsigned int) AT91C_PIO_PC5) /*  Address Bus[24] */
#define AT91C_PC5_SPI1_NPCS1 ((unsigned int) AT91C_PIO_PC5) /*  SPI 1 Peripheral Chip Select 1 */
#define AT91C_PIO_PC6        ((unsigned int) 1 <<  6) /* Pin Controlled by PC6 */
#define AT91C_PC6_TIOB2    ((unsigned int) AT91C_PIO_PC6) /*  Timer Counter 2 Multipurpose Timer I/O Pin B */
#define AT91C_PC6_CFCE1    ((unsigned int) AT91C_PIO_PC6) /*  Compact Flash Enable 1 */
#define AT91C_PIO_PC7        ((unsigned int) 1 <<  7) /* Pin Controlled by PC7 */
#define AT91C_PC7_TIOB1    ((unsigned int) AT91C_PIO_PC7) /*  Timer Counter 1 Multipurpose Timer I/O Pin B */
#define AT91C_PC7_CFCE2    ((unsigned int) AT91C_PIO_PC7) /*  Compact Flash Enable 2 */
#define AT91C_PIO_PC8        ((unsigned int) 1 <<  8) /* Pin Controlled by PC8 */
#define AT91C_PC8_NCS4_CFCS0 ((unsigned int) AT91C_PIO_PC8) /*  Chip Select Line 4 */
#define AT91C_PC8_RTS3     ((unsigned int) AT91C_PIO_PC8) /*  USART 3 Ready To Send */
#define AT91C_PIO_PC9        ((unsigned int) 1 <<  9) /* Pin Controlled by PC9 */
#define AT91C_PC9_NCS5_CFCS1 ((unsigned int) AT91C_PIO_PC9) /*  Chip Select Line 5 */
#define AT91C_PC9_TIOB0    ((unsigned int) AT91C_PIO_PC9) /*  Timer Counter 0 Multipurpose Timer I/O Pin B */

#endif
