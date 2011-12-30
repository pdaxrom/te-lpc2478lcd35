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

#ifndef AT91SAM9260_AT91_SYS_H
#define AT91SAM9260_AT91_SYS_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR System Peripherals */
/* ***************************************************************************** */
typedef struct _AT91S_SYS {
	AT91_REG	 SDRAMC_MR; 	/* SDRAM Controller Mode Register */
	AT91_REG	 SDRAMC_TR; 	/* SDRAM Controller Refresh Timer Register */
	AT91_REG	 SDRAMC_CR; 	/* SDRAM Controller Configuration Register */
	AT91_REG	 SDRAMC_HSR; 	/* SDRAM Controller High Speed Register */
	AT91_REG	 SDRAMC_LPR; 	/* SDRAM Controller Low Power Register */
	AT91_REG	 SDRAMC_IER; 	/* SDRAM Controller Interrupt Enable Register */
	AT91_REG	 SDRAMC_IDR; 	/* SDRAM Controller Interrupt Disable Register */
	AT91_REG	 SDRAMC_IMR; 	/* SDRAM Controller Interrupt Mask Register */
	AT91_REG	 SDRAMC_ISR; 	/* SDRAM Controller Interrupt Mask Register */
	AT91_REG	 SDRAMC_MDR; 	/* SDRAM Memory Device Register */
	AT91_REG	 Reserved0[118]; 	/*  */
	AT91_REG	 SMC_SETUP0; 	/*  Setup Register for CS 0 */
	AT91_REG	 SMC_PULSE0; 	/*  Pulse Register for CS 0 */
	AT91_REG	 SMC_CYCLE0; 	/*  Cycle Register for CS 0 */
	AT91_REG	 SMC_CTRL0; 	/*  Control Register for CS 0 */
	AT91_REG	 SMC_SETUP1; 	/*  Setup Register for CS 1 */
	AT91_REG	 SMC_PULSE1; 	/*  Pulse Register for CS 1 */
	AT91_REG	 SMC_CYCLE1; 	/*  Cycle Register for CS 1 */
	AT91_REG	 SMC_CTRL1; 	/*  Control Register for CS 1 */
	AT91_REG	 SMC_SETUP2; 	/*  Setup Register for CS 2 */
	AT91_REG	 SMC_PULSE2; 	/*  Pulse Register for CS 2 */
	AT91_REG	 SMC_CYCLE2; 	/*  Cycle Register for CS 2 */
	AT91_REG	 SMC_CTRL2; 	/*  Control Register for CS 2 */
	AT91_REG	 SMC_SETUP3; 	/*  Setup Register for CS 3 */
	AT91_REG	 SMC_PULSE3; 	/*  Pulse Register for CS 3 */
	AT91_REG	 SMC_CYCLE3; 	/*  Cycle Register for CS 3 */
	AT91_REG	 SMC_CTRL3; 	/*  Control Register for CS 3 */
	AT91_REG	 SMC_SETUP4; 	/*  Setup Register for CS 4 */
	AT91_REG	 SMC_PULSE4; 	/*  Pulse Register for CS 4 */
	AT91_REG	 SMC_CYCLE4; 	/*  Cycle Register for CS 4 */
	AT91_REG	 SMC_CTRL4; 	/*  Control Register for CS 4 */
	AT91_REG	 SMC_SETUP5; 	/*  Setup Register for CS 5 */
	AT91_REG	 SMC_PULSE5; 	/*  Pulse Register for CS 5 */
	AT91_REG	 SMC_CYCLE5; 	/*  Cycle Register for CS 5 */
	AT91_REG	 SMC_CTRL5; 	/*  Control Register for CS 5 */
	AT91_REG	 SMC_SETUP6; 	/*  Setup Register for CS 6 */
	AT91_REG	 SMC_PULSE6; 	/*  Pulse Register for CS 6 */
	AT91_REG	 SMC_CYCLE6; 	/*  Cycle Register for CS 6 */
	AT91_REG	 SMC_CTRL6; 	/*  Control Register for CS 6 */
	AT91_REG	 SMC_SETUP7; 	/*  Setup Register for CS 7 */
	AT91_REG	 SMC_PULSE7; 	/*  Pulse Register for CS 7 */
	AT91_REG	 SMC_CYCLE7; 	/*  Cycle Register for CS 7 */
	AT91_REG	 SMC_CTRL7; 	/*  Control Register for CS 7 */
	AT91_REG	 Reserved1[96]; 	/*  */
	AT91_REG	 MATRIX_MCFG0; 	/*  Master Configuration Register 0 (ram96k)      */
	AT91_REG	 MATRIX_MCFG1; 	/*  Master Configuration Register 1 (rom)     */
	AT91_REG	 MATRIX_MCFG2; 	/*  Master Configuration Register 2 (hperiphs)  */
	AT91_REG	 MATRIX_MCFG3; 	/*  Master Configuration Register 3 (ebi) */
	AT91_REG	 MATRIX_MCFG4; 	/*  Master Configuration Register 4 (bridge)     */
	AT91_REG	 MATRIX_MCFG5; 	/*  Master Configuration Register 5 (mailbox)     */
	AT91_REG	 MATRIX_MCFG6; 	/*  Master Configuration Register 6 (ram16k)   */
	AT91_REG	 MATRIX_MCFG7; 	/*  Master Configuration Register 7 (teak_prog)      */
	AT91_REG	 Reserved2[8]; 	/*  */
	AT91_REG	 MATRIX_SCFG0; 	/*  Slave Configuration Register 0 (ram96k)      */
	AT91_REG	 MATRIX_SCFG1; 	/*  Slave Configuration Register 1 (rom)     */
	AT91_REG	 MATRIX_SCFG2; 	/*  Slave Configuration Register 2 (hperiphs)  */
	AT91_REG	 MATRIX_SCFG3; 	/*  Slave Configuration Register 3 (ebi) */
	AT91_REG	 MATRIX_SCFG4; 	/*  Slave Configuration Register 4 (bridge)     */
	AT91_REG	 Reserved3[11]; 	/*  */
	AT91_REG	 MATRIX_PRAS0; 	/*  PRAS0 (ram0)  */
	AT91_REG	 MATRIX_PRBS0; 	/*  PRBS0 (ram0)  */
	AT91_REG	 MATRIX_PRAS1; 	/*  PRAS1 (ram1)  */
	AT91_REG	 MATRIX_PRBS1; 	/*  PRBS1 (ram1)  */
	AT91_REG	 MATRIX_PRAS2; 	/*  PRAS2 (ram2)  */
	AT91_REG	 MATRIX_PRBS2; 	/*  PRBS2 (ram2)  */
	AT91_REG	 Reserved4[26]; 	/*  */
	AT91_REG	 MATRIX_MRCR; 	/*  Master Remp Control Register  */
	AT91_REG	 Reserved5[6]; 	/*  */
	AT91_REG	 CCFG_EBICSA; 	/*  EBI Chip Select Assignement Register */
	AT91_REG	 Reserved6[3]; 	/*  */
	AT91_REG	 MATRIX_TEAKCFG; 	/*  Slave 7 (teak_prog) Special Function Register */
	AT91_REG	 Reserved7[51]; 	/*  */
	AT91_REG	 CCFG_MATRIXVERSION; 	/*  Version Register */
	AT91_REG	 AIC_SMR[32]; 	/* Source Mode Register */
	AT91_REG	 AIC_SVR[32]; 	/* Source Vector Register */
	AT91_REG	 AIC_IVR; 	/* IRQ Vector Register */
	AT91_REG	 AIC_FVR; 	/* FIQ Vector Register */
	AT91_REG	 AIC_ISR; 	/* Interrupt Status Register */
	AT91_REG	 AIC_IPR; 	/* Interrupt Pending Register */
	AT91_REG	 AIC_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 AIC_CISR; 	/* Core Interrupt Status Register */
	AT91_REG	 Reserved8[2]; 	/*  */
	AT91_REG	 AIC_IECR; 	/* Interrupt Enable Command Register */
	AT91_REG	 AIC_IDCR; 	/* Interrupt Disable Command Register */
	AT91_REG	 AIC_ICCR; 	/* Interrupt Clear Command Register */
	AT91_REG	 AIC_ISCR; 	/* Interrupt Set Command Register */
	AT91_REG	 AIC_EOICR; 	/* End of Interrupt Command Register */
	AT91_REG	 AIC_SPU; 	/* Spurious Vector Register */
	AT91_REG	 AIC_DCR; 	/* Debug Control Register (Protect) */
	AT91_REG	 Reserved9[1]; 	/*  */
	AT91_REG	 AIC_FFER; 	/* Fast Forcing Enable Register */
	AT91_REG	 AIC_FFDR; 	/* Fast Forcing Disable Register */
	AT91_REG	 AIC_FFSR; 	/* Fast Forcing Status Register */
	AT91_REG	 Reserved10[45]; 	/*  */
	AT91_REG	 DBGU_CR; 	/* Control Register */
	AT91_REG	 DBGU_MR; 	/* Mode Register */
	AT91_REG	 DBGU_IER; 	/* Interrupt Enable Register */
	AT91_REG	 DBGU_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 DBGU_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 DBGU_CSR; 	/* Channel Status Register */
	AT91_REG	 DBGU_RHR; 	/* Receiver Holding Register */
	AT91_REG	 DBGU_THR; 	/* Transmitter Holding Register */
	AT91_REG	 DBGU_BRGR; 	/* Baud Rate Generator Register */
	AT91_REG	 Reserved11[7]; 	/*  */
	AT91_REG	 DBGU_CIDR; 	/* Chip ID Register */
	AT91_REG	 DBGU_EXID; 	/* Chip ID Extension Register */
	AT91_REG	 DBGU_FNTR; 	/* Force NTRST Register */
	AT91_REG	 Reserved12[45]; 	/*  */
	AT91_REG	 DBGU_RPR; 	/* Receive Pointer Register */
	AT91_REG	 DBGU_RCR; 	/* Receive Counter Register */
	AT91_REG	 DBGU_TPR; 	/* Transmit Pointer Register */
	AT91_REG	 DBGU_TCR; 	/* Transmit Counter Register */
	AT91_REG	 DBGU_RNPR; 	/* Receive Next Pointer Register */
	AT91_REG	 DBGU_RNCR; 	/* Receive Next Counter Register */
	AT91_REG	 DBGU_TNPR; 	/* Transmit Next Pointer Register */
	AT91_REG	 DBGU_TNCR; 	/* Transmit Next Counter Register */
	AT91_REG	 DBGU_PTCR; 	/* PDC Transfer Control Register */
	AT91_REG	 DBGU_PTSR; 	/* PDC Transfer Status Register */
	AT91_REG	 Reserved13[54]; 	/*  */
	AT91_REG	 PIOA_PER; 	/* PIO Enable Register */
	AT91_REG	 PIOA_PDR; 	/* PIO Disable Register */
	AT91_REG	 PIOA_PSR; 	/* PIO Status Register */
	AT91_REG	 Reserved14[1]; 	/*  */
	AT91_REG	 PIOA_OER; 	/* Output Enable Register */
	AT91_REG	 PIOA_ODR; 	/* Output Disable Registerr */
	AT91_REG	 PIOA_OSR; 	/* Output Status Register */
	AT91_REG	 Reserved15[1]; 	/*  */
	AT91_REG	 PIOA_IFER; 	/* Input Filter Enable Register */
	AT91_REG	 PIOA_IFDR; 	/* Input Filter Disable Register */
	AT91_REG	 PIOA_IFSR; 	/* Input Filter Status Register */
	AT91_REG	 Reserved16[1]; 	/*  */
	AT91_REG	 PIOA_SODR; 	/* Set Output Data Register */
	AT91_REG	 PIOA_CODR; 	/* Clear Output Data Register */
	AT91_REG	 PIOA_ODSR; 	/* Output Data Status Register */
	AT91_REG	 PIOA_PDSR; 	/* Pin Data Status Register */
	AT91_REG	 PIOA_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PIOA_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PIOA_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 PIOA_ISR; 	/* Interrupt Status Register */
	AT91_REG	 PIOA_MDER; 	/* Multi-driver Enable Register */
	AT91_REG	 PIOA_MDDR; 	/* Multi-driver Disable Register */
	AT91_REG	 PIOA_MDSR; 	/* Multi-driver Status Register */
	AT91_REG	 Reserved17[1]; 	/*  */
	AT91_REG	 PIOA_PPUDR; 	/* Pull-up Disable Register */
	AT91_REG	 PIOA_PPUER; 	/* Pull-up Enable Register */
	AT91_REG	 PIOA_PPUSR; 	/* Pull-up Status Register */
	AT91_REG	 Reserved18[1]; 	/*  */
	AT91_REG	 PIOA_ASR; 	/* Select A Register */
	AT91_REG	 PIOA_BSR; 	/* Select B Register */
	AT91_REG	 PIOA_ABSR; 	/* AB Select Status Register */
	AT91_REG	 Reserved19[9]; 	/*  */
	AT91_REG	 PIOA_OWER; 	/* Output Write Enable Register */
	AT91_REG	 PIOA_OWDR; 	/* Output Write Disable Register */
	AT91_REG	 PIOA_OWSR; 	/* Output Write Status Register */
	AT91_REG	 Reserved20[85]; 	/*  */
	AT91_REG	 PIOB_PER; 	/* PIO Enable Register */
	AT91_REG	 PIOB_PDR; 	/* PIO Disable Register */
	AT91_REG	 PIOB_PSR; 	/* PIO Status Register */
	AT91_REG	 Reserved21[1]; 	/*  */
	AT91_REG	 PIOB_OER; 	/* Output Enable Register */
	AT91_REG	 PIOB_ODR; 	/* Output Disable Registerr */
	AT91_REG	 PIOB_OSR; 	/* Output Status Register */
	AT91_REG	 Reserved22[1]; 	/*  */
	AT91_REG	 PIOB_IFER; 	/* Input Filter Enable Register */
	AT91_REG	 PIOB_IFDR; 	/* Input Filter Disable Register */
	AT91_REG	 PIOB_IFSR; 	/* Input Filter Status Register */
	AT91_REG	 Reserved23[1]; 	/*  */
	AT91_REG	 PIOB_SODR; 	/* Set Output Data Register */
	AT91_REG	 PIOB_CODR; 	/* Clear Output Data Register */
	AT91_REG	 PIOB_ODSR; 	/* Output Data Status Register */
	AT91_REG	 PIOB_PDSR; 	/* Pin Data Status Register */
	AT91_REG	 PIOB_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PIOB_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PIOB_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 PIOB_ISR; 	/* Interrupt Status Register */
	AT91_REG	 PIOB_MDER; 	/* Multi-driver Enable Register */
	AT91_REG	 PIOB_MDDR; 	/* Multi-driver Disable Register */
	AT91_REG	 PIOB_MDSR; 	/* Multi-driver Status Register */
	AT91_REG	 Reserved24[1]; 	/*  */
	AT91_REG	 PIOB_PPUDR; 	/* Pull-up Disable Register */
	AT91_REG	 PIOB_PPUER; 	/* Pull-up Enable Register */
	AT91_REG	 PIOB_PPUSR; 	/* Pull-up Status Register */
	AT91_REG	 Reserved25[1]; 	/*  */
	AT91_REG	 PIOB_ASR; 	/* Select A Register */
	AT91_REG	 PIOB_BSR; 	/* Select B Register */
	AT91_REG	 PIOB_ABSR; 	/* AB Select Status Register */
	AT91_REG	 Reserved26[9]; 	/*  */
	AT91_REG	 PIOB_OWER; 	/* Output Write Enable Register */
	AT91_REG	 PIOB_OWDR; 	/* Output Write Disable Register */
	AT91_REG	 PIOB_OWSR; 	/* Output Write Status Register */
	AT91_REG	 Reserved27[85]; 	/*  */
	AT91_REG	 PIOC_PER; 	/* PIO Enable Register */
	AT91_REG	 PIOC_PDR; 	/* PIO Disable Register */
	AT91_REG	 PIOC_PSR; 	/* PIO Status Register */
	AT91_REG	 Reserved28[1]; 	/*  */
	AT91_REG	 PIOC_OER; 	/* Output Enable Register */
	AT91_REG	 PIOC_ODR; 	/* Output Disable Registerr */
	AT91_REG	 PIOC_OSR; 	/* Output Status Register */
	AT91_REG	 Reserved29[1]; 	/*  */
	AT91_REG	 PIOC_IFER; 	/* Input Filter Enable Register */
	AT91_REG	 PIOC_IFDR; 	/* Input Filter Disable Register */
	AT91_REG	 PIOC_IFSR; 	/* Input Filter Status Register */
	AT91_REG	 Reserved30[1]; 	/*  */
	AT91_REG	 PIOC_SODR; 	/* Set Output Data Register */
	AT91_REG	 PIOC_CODR; 	/* Clear Output Data Register */
	AT91_REG	 PIOC_ODSR; 	/* Output Data Status Register */
	AT91_REG	 PIOC_PDSR; 	/* Pin Data Status Register */
	AT91_REG	 PIOC_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PIOC_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PIOC_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 PIOC_ISR; 	/* Interrupt Status Register */
	AT91_REG	 PIOC_MDER; 	/* Multi-driver Enable Register */
	AT91_REG	 PIOC_MDDR; 	/* Multi-driver Disable Register */
	AT91_REG	 PIOC_MDSR; 	/* Multi-driver Status Register */
	AT91_REG	 Reserved31[1]; 	/*  */
	AT91_REG	 PIOC_PPUDR; 	/* Pull-up Disable Register */
	AT91_REG	 PIOC_PPUER; 	/* Pull-up Enable Register */
	AT91_REG	 PIOC_PPUSR; 	/* Pull-up Status Register */
	AT91_REG	 Reserved32[1]; 	/*  */
	AT91_REG	 PIOC_ASR; 	/* Select A Register */
	AT91_REG	 PIOC_BSR; 	/* Select B Register */
	AT91_REG	 PIOC_ABSR; 	/* AB Select Status Register */
	AT91_REG	 Reserved33[9]; 	/*  */
	AT91_REG	 PIOC_OWER; 	/* Output Write Enable Register */
	AT91_REG	 PIOC_OWDR; 	/* Output Write Disable Register */
	AT91_REG	 PIOC_OWSR; 	/* Output Write Status Register */
	AT91_REG	 Reserved34[213]; 	/*  */
	AT91_REG	 PMC_SCER; 	/* System Clock Enable Register */
	AT91_REG	 PMC_SCDR; 	/* System Clock Disable Register */
	AT91_REG	 PMC_SCSR; 	/* System Clock Status Register */
	AT91_REG	 Reserved35[1]; 	/*  */
	AT91_REG	 PMC_PCER; 	/* Peripheral Clock Enable Register */
	AT91_REG	 PMC_PCDR; 	/* Peripheral Clock Disable Register */
	AT91_REG	 PMC_PCSR; 	/* Peripheral Clock Status Register */
	AT91_REG	 Reserved36[1]; 	/*  */
	AT91_REG	 PMC_MOR; 	/* Main Oscillator Register */
	AT91_REG	 PMC_MCFR; 	/* Main Clock  Frequency Register */
	AT91_REG	 PMC_PLLAR; 	/* PLL A Register */
	AT91_REG	 PMC_PLLBR; 	/* PLL B Register */
	AT91_REG	 PMC_MCKR; 	/* Master Clock Register */
	AT91_REG	 Reserved37[3]; 	/*  */
	AT91_REG	 PMC_PCKR[8]; 	/* Programmable Clock Register */
	AT91_REG	 PMC_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PMC_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PMC_SR; 	/* Status Register */
	AT91_REG	 PMC_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 Reserved38[36]; 	/*  */
	AT91_REG	 RSTC_RCR; 	/* Reset Control Register */
	AT91_REG	 RSTC_RSR; 	/* Reset Status Register */
	AT91_REG	 RSTC_RMR; 	/* Reset Mode Register */
	AT91_REG	 Reserved39[1]; 	/*  */
	AT91_REG	 SHDWC_SHCR; 	/* Shut Down Control Register */
	AT91_REG	 SHDWC_SHMR; 	/* Shut Down Mode Register */
	AT91_REG	 SHDWC_SHSR; 	/* Shut Down Status Register */
	AT91_REG	 Reserved40[1]; 	/*  */
	AT91_REG	 RTTC_RTMR; 	/* Real-time Mode Register */
	AT91_REG	 RTTC_RTAR; 	/* Real-time Alarm Register */
	AT91_REG	 RTTC_RTVR; 	/* Real-time Value Register */
	AT91_REG	 RTTC_RTSR; 	/* Real-time Status Register */
	AT91_REG	 PITC_PIMR; 	/* Period Interval Mode Register */
	AT91_REG	 PITC_PISR; 	/* Period Interval Status Register */
	AT91_REG	 PITC_PIVR; 	/* Period Interval Value Register */
	AT91_REG	 PITC_PIIR; 	/* Period Interval Image Register */
	AT91_REG	 WDTC_WDCR; 	/* Watchdog Control Register */
	AT91_REG	 WDTC_WDMR; 	/* Watchdog Mode Register */
	AT91_REG	 WDTC_WDSR; 	/* Watchdog Status Register */
	AT91_REG	 Reserved41[1]; 	/*  */
	AT91_REG	 SYS_GPBR0; 	/* General Purpose Register 0 */
	AT91_REG	 SYS_GPBR1; 	/* General Purpose Register 1 */
	AT91_REG	 SYS_GPBR2; 	/* General Purpose Register 2 */
	AT91_REG	 SYS_GPBR3; 	/* General Purpose Register 3 */
} AT91S_SYS, *AT91PS_SYS;


/* ========== Register definition for SYS peripheral ==========  */
#define AT91C_SYS_GPBR3 ((AT91_REG *) 	0xFFFFFFFF) /* (SYS) General Purpose Register 3 */
#define AT91C_SYS_GPBR1 ((AT91_REG *) 	0xFFFFFFFF) /* (SYS) General Purpose Register 1 */
#define AT91C_SYS_GPBR2 ((AT91_REG *) 	0xFFFFFFFF) /* (SYS) General Purpose Register 2 */
#define AT91C_SYS_GPBR0 ((AT91_REG *) 	0xFFFFFFFF) /* (SYS) General Purpose Register 0 */

#endif
