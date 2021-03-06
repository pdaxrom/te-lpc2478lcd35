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

#ifndef AT91SAM9260_AT91_TIMER_H
#define AT91SAM9260_AT91_TIMER_H


/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Periodic Interval Timer Controller Interface */
/* ***************************************************************************** */
typedef struct _AT91S_PITC {
	AT91_REG	 PITC_PIMR; 	/* Period Interval Mode Register */
	AT91_REG	 PITC_PISR; 	/* Period Interval Status Register */
	AT91_REG	 PITC_PIVR; 	/* Period Interval Value Register */
	AT91_REG	 PITC_PIIR; 	/* Period Interval Image Register */
} AT91S_PITC, *AT91PS_PITC;

/* -------- PITC_PIMR : (PITC Offset: 0x0) Periodic Interval Mode Register --------  */
#define AT91C_PITC_PIV        ((unsigned int) 0xFFFFF <<  0) /* (PITC) Periodic Interval Value */
#define AT91C_PITC_PITEN      ((unsigned int) 0x1 << 24) /* (PITC) Periodic Interval Timer Enabled */
#define AT91C_PITC_PITIEN     ((unsigned int) 0x1 << 25) /* (PITC) Periodic Interval Timer Interrupt Enable */
/* -------- PITC_PISR : (PITC Offset: 0x4) Periodic Interval Status Register --------  */
#define AT91C_PITC_PITS       ((unsigned int) 0x1 <<  0) /* (PITC) Periodic Interval Timer Status */
/* -------- PITC_PIVR : (PITC Offset: 0x8) Periodic Interval Value Register --------  */
#define AT91C_PITC_CPIV       ((unsigned int) 0xFFFFF <<  0) /* (PITC) Current Periodic Interval Value */
#define AT91C_PITC_PICNT      ((unsigned int) 0xFFF << 20) /* (PITC) Periodic Interval Counter */
/* -------- PITC_PIIR : (PITC Offset: 0xc) Periodic Interval Image Register --------  */

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Watchdog Timer Controller Interface */
/* ***************************************************************************** */
typedef struct _AT91S_WDTC {
	AT91_REG	 WDTC_WDCR; 	/* Watchdog Control Register */
	AT91_REG	 WDTC_WDMR; 	/* Watchdog Mode Register */
	AT91_REG	 WDTC_WDSR; 	/* Watchdog Status Register */
} AT91S_WDTC, *AT91PS_WDTC;

/* -------- WDTC_WDCR : (WDTC Offset: 0x0) Periodic Interval Image Register --------  */
#define AT91C_WDTC_WDRSTT     ((unsigned int) 0x1 <<  0) /* (WDTC) Watchdog Restart */
#define AT91C_WDTC_KEY        ((unsigned int) 0xFF << 24) /* (WDTC) Watchdog KEY Password */
/* -------- WDTC_WDMR : (WDTC Offset: 0x4) Watchdog Mode Register --------  */
#define AT91C_WDTC_WDV        ((unsigned int) 0xFFF <<  0) /* (WDTC) Watchdog Timer Restart */
#define AT91C_WDTC_WDFIEN     ((unsigned int) 0x1 << 12) /* (WDTC) Watchdog Fault Interrupt Enable */
#define AT91C_WDTC_WDRSTEN    ((unsigned int) 0x1 << 13) /* (WDTC) Watchdog Reset Enable */
#define AT91C_WDTC_WDRPROC    ((unsigned int) 0x1 << 14) /* (WDTC) Watchdog Timer Restart */
#define AT91C_WDTC_WDDIS      ((unsigned int) 0x1 << 15) /* (WDTC) Watchdog Disable */
#define AT91C_WDTC_WDD        ((unsigned int) 0xFFF << 16) /* (WDTC) Watchdog Delta Value */
#define AT91C_WDTC_WDDBGHLT   ((unsigned int) 0x1 << 28) /* (WDTC) Watchdog Debug Halt */
#define AT91C_WDTC_WDIDLEHLT  ((unsigned int) 0x1 << 29) /* (WDTC) Watchdog Idle Halt */
/* -------- WDTC_WDSR : (WDTC Offset: 0x8) Watchdog Status Register --------  */
#define AT91C_WDTC_WDUNF      ((unsigned int) 0x1 <<  0) /* (WDTC) Watchdog Underflow */
#define AT91C_WDTC_WDERR      ((unsigned int) 0x1 <<  1) /* (WDTC) Watchdog Error */

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Timer Counter Channel Interface */
/* ***************************************************************************** */
typedef struct _AT91S_TC {
	AT91_REG	 TC_CCR; 	/* Channel Control Register */
	AT91_REG	 TC_CMR; 	/* Channel Mode Register (Capture Mode / Waveform Mode) */
	AT91_REG	 Reserved0[2]; 	/*  */
	AT91_REG	 TC_CV; 	/* Counter Value */
	AT91_REG	 TC_RA; 	/* Register A */
	AT91_REG	 TC_RB; 	/* Register B */
	AT91_REG	 TC_RC; 	/* Register C */
	AT91_REG	 TC_SR; 	/* Status Register */
	AT91_REG	 TC_IER; 	/* Interrupt Enable Register */
	AT91_REG	 TC_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 TC_IMR; 	/* Interrupt Mask Register */
} AT91S_TC, *AT91PS_TC;

/* -------- TC_CCR : (TC Offset: 0x0) TC Channel Control Register --------  */
#define AT91C_TC_CLKEN        ((unsigned int) 0x1 <<  0) /* (TC) Counter Clock Enable Command */
#define AT91C_TC_CLKDIS       ((unsigned int) 0x1 <<  1) /* (TC) Counter Clock Disable Command */
#define AT91C_TC_SWTRG        ((unsigned int) 0x1 <<  2) /* (TC) Software Trigger Command */
/* -------- TC_CMR : (TC Offset: 0x4) TC Channel Mode Register: Capture Mode / Waveform Mode --------  */
#define AT91C_TC_CLKS         ((unsigned int) 0x7 <<  0) /* (TC) Clock Selection */
#define 	AT91C_TC_CLKS_TIMER_DIV1_CLOCK     ((unsigned int) 0x0) /* (TC) Clock selected: TIMER_DIV1_CLOCK */
#define 	AT91C_TC_CLKS_TIMER_DIV2_CLOCK     ((unsigned int) 0x1) /* (TC) Clock selected: TIMER_DIV2_CLOCK */
#define 	AT91C_TC_CLKS_TIMER_DIV3_CLOCK     ((unsigned int) 0x2) /* (TC) Clock selected: TIMER_DIV3_CLOCK */
#define 	AT91C_TC_CLKS_TIMER_DIV4_CLOCK     ((unsigned int) 0x3) /* (TC) Clock selected: TIMER_DIV4_CLOCK */
#define 	AT91C_TC_CLKS_TIMER_DIV5_CLOCK     ((unsigned int) 0x4) /* (TC) Clock selected: TIMER_DIV5_CLOCK */
#define 	AT91C_TC_CLKS_XC0                  ((unsigned int) 0x5) /* (TC) Clock selected: XC0 */
#define 	AT91C_TC_CLKS_XC1                  ((unsigned int) 0x6) /* (TC) Clock selected: XC1 */
#define 	AT91C_TC_CLKS_XC2                  ((unsigned int) 0x7) /* (TC) Clock selected: XC2 */
#define AT91C_TC_CLKI         ((unsigned int) 0x1 <<  3) /* (TC) Clock Invert */
#define AT91C_TC_BURST        ((unsigned int) 0x3 <<  4) /* (TC) Burst Signal Selection */
#define 	AT91C_TC_BURST_NONE                 ((unsigned int) 0x0 <<  4) /* (TC) The clock is not gated by an external signal */
#define 	AT91C_TC_BURST_XC0                  ((unsigned int) 0x1 <<  4) /* (TC) XC0 is ANDed with the selected clock */
#define 	AT91C_TC_BURST_XC1                  ((unsigned int) 0x2 <<  4) /* (TC) XC1 is ANDed with the selected clock */
#define 	AT91C_TC_BURST_XC2                  ((unsigned int) 0x3 <<  4) /* (TC) XC2 is ANDed with the selected clock */
#define AT91C_TC_CPCSTOP      ((unsigned int) 0x1 <<  6) /* (TC) Counter Clock Stopped with RC Compare */
#define AT91C_TC_LDBSTOP      ((unsigned int) 0x1 <<  6) /* (TC) Counter Clock Stopped with RB Loading */
#define AT91C_TC_LDBDIS       ((unsigned int) 0x1 <<  7) /* (TC) Counter Clock Disabled with RB Loading */
#define AT91C_TC_CPCDIS       ((unsigned int) 0x1 <<  7) /* (TC) Counter Clock Disable with RC Compare */
#define AT91C_TC_ETRGEDG      ((unsigned int) 0x3 <<  8) /* (TC) External Trigger Edge Selection */
#define 	AT91C_TC_ETRGEDG_NONE                 ((unsigned int) 0x0 <<  8) /* (TC) Edge: None */
#define 	AT91C_TC_ETRGEDG_RISING               ((unsigned int) 0x1 <<  8) /* (TC) Edge: rising edge */
#define 	AT91C_TC_ETRGEDG_FALLING              ((unsigned int) 0x2 <<  8) /* (TC) Edge: falling edge */
#define 	AT91C_TC_ETRGEDG_BOTH                 ((unsigned int) 0x3 <<  8) /* (TC) Edge: each edge */
#define AT91C_TC_EEVTEDG      ((unsigned int) 0x3 <<  8) /* (TC) External Event Edge Selection */
#define 	AT91C_TC_EEVTEDG_NONE                 ((unsigned int) 0x0 <<  8) /* (TC) Edge: None */
#define 	AT91C_TC_EEVTEDG_RISING               ((unsigned int) 0x1 <<  8) /* (TC) Edge: rising edge */
#define 	AT91C_TC_EEVTEDG_FALLING              ((unsigned int) 0x2 <<  8) /* (TC) Edge: falling edge */
#define 	AT91C_TC_EEVTEDG_BOTH                 ((unsigned int) 0x3 <<  8) /* (TC) Edge: each edge */
#define AT91C_TC_ABETRG       ((unsigned int) 0x1 << 10) /* (TC) TIOA or TIOB External Trigger Selection */
#define AT91C_TC_EEVT         ((unsigned int) 0x3 << 10) /* (TC) External Event  Selection */
#define 	AT91C_TC_EEVT_TIOB                 ((unsigned int) 0x0 << 10) /* (TC) Signal selected as external event: TIOB TIOB direction: input */
#define 	AT91C_TC_EEVT_XC0                  ((unsigned int) 0x1 << 10) /* (TC) Signal selected as external event: XC0 TIOB direction: output */
#define 	AT91C_TC_EEVT_XC1                  ((unsigned int) 0x2 << 10) /* (TC) Signal selected as external event: XC1 TIOB direction: output */
#define 	AT91C_TC_EEVT_XC2                  ((unsigned int) 0x3 << 10) /* (TC) Signal selected as external event: XC2 TIOB direction: output */
#define AT91C_TC_ENETRG       ((unsigned int) 0x1 << 12) /* (TC) External Event Trigger enable */
#define AT91C_TC_WAVESEL      ((unsigned int) 0x3 << 13) /* (TC) Waveform  Selection */
#define 	AT91C_TC_WAVESEL_UP                   ((unsigned int) 0x0 << 13) /* (TC) UP mode without atomatic trigger on RC Compare */
#define 	AT91C_TC_WAVESEL_UPDOWN               ((unsigned int) 0x1 << 13) /* (TC) UPDOWN mode without automatic trigger on RC Compare */
#define 	AT91C_TC_WAVESEL_UP_AUTO              ((unsigned int) 0x2 << 13) /* (TC) UP mode with automatic trigger on RC Compare */
#define 	AT91C_TC_WAVESEL_UPDOWN_AUTO          ((unsigned int) 0x3 << 13) /* (TC) UPDOWN mode with automatic trigger on RC Compare */
#define AT91C_TC_CPCTRG       ((unsigned int) 0x1 << 14) /* (TC) RC Compare Trigger Enable */
#define AT91C_TC_WAVE         ((unsigned int) 0x1 << 15) /* (TC)  */
#define AT91C_TC_LDRA         ((unsigned int) 0x3 << 16) /* (TC) RA Loading Selection */
#define 	AT91C_TC_LDRA_NONE                 ((unsigned int) 0x0 << 16) /* (TC) Edge: None */
#define 	AT91C_TC_LDRA_RISING               ((unsigned int) 0x1 << 16) /* (TC) Edge: rising edge of TIOA */
#define 	AT91C_TC_LDRA_FALLING              ((unsigned int) 0x2 << 16) /* (TC) Edge: falling edge of TIOA */
#define 	AT91C_TC_LDRA_BOTH                 ((unsigned int) 0x3 << 16) /* (TC) Edge: each edge of TIOA */
#define AT91C_TC_ACPA         ((unsigned int) 0x3 << 16) /* (TC) RA Compare Effect on TIOA */
#define 	AT91C_TC_ACPA_NONE                 ((unsigned int) 0x0 << 16) /* (TC) Effect: none */
#define 	AT91C_TC_ACPA_SET                  ((unsigned int) 0x1 << 16) /* (TC) Effect: set */
#define 	AT91C_TC_ACPA_CLEAR                ((unsigned int) 0x2 << 16) /* (TC) Effect: clear */
#define 	AT91C_TC_ACPA_TOGGLE               ((unsigned int) 0x3 << 16) /* (TC) Effect: toggle */
#define AT91C_TC_LDRB         ((unsigned int) 0x3 << 18) /* (TC) RB Loading Selection */
#define 	AT91C_TC_LDRB_NONE                 ((unsigned int) 0x0 << 18) /* (TC) Edge: None */
#define 	AT91C_TC_LDRB_RISING               ((unsigned int) 0x1 << 18) /* (TC) Edge: rising edge of TIOA */
#define 	AT91C_TC_LDRB_FALLING              ((unsigned int) 0x2 << 18) /* (TC) Edge: falling edge of TIOA */
#define 	AT91C_TC_LDRB_BOTH                 ((unsigned int) 0x3 << 18) /* (TC) Edge: each edge of TIOA */
#define AT91C_TC_ACPC         ((unsigned int) 0x3 << 18) /* (TC) RC Compare Effect on TIOA */
#define 	AT91C_TC_ACPC_NONE                 ((unsigned int) 0x0 << 18) /* (TC) Effect: none */
#define 	AT91C_TC_ACPC_SET                  ((unsigned int) 0x1 << 18) /* (TC) Effect: set */
#define 	AT91C_TC_ACPC_CLEAR                ((unsigned int) 0x2 << 18) /* (TC) Effect: clear */
#define 	AT91C_TC_ACPC_TOGGLE               ((unsigned int) 0x3 << 18) /* (TC) Effect: toggle */
#define AT91C_TC_AEEVT        ((unsigned int) 0x3 << 20) /* (TC) External Event Effect on TIOA */
#define 	AT91C_TC_AEEVT_NONE                 ((unsigned int) 0x0 << 20) /* (TC) Effect: none */
#define 	AT91C_TC_AEEVT_SET                  ((unsigned int) 0x1 << 20) /* (TC) Effect: set */
#define 	AT91C_TC_AEEVT_CLEAR                ((unsigned int) 0x2 << 20) /* (TC) Effect: clear */
#define 	AT91C_TC_AEEVT_TOGGLE               ((unsigned int) 0x3 << 20) /* (TC) Effect: toggle */
#define AT91C_TC_ASWTRG       ((unsigned int) 0x3 << 22) /* (TC) Software Trigger Effect on TIOA */
#define 	AT91C_TC_ASWTRG_NONE                 ((unsigned int) 0x0 << 22) /* (TC) Effect: none */
#define 	AT91C_TC_ASWTRG_SET                  ((unsigned int) 0x1 << 22) /* (TC) Effect: set */
#define 	AT91C_TC_ASWTRG_CLEAR                ((unsigned int) 0x2 << 22) /* (TC) Effect: clear */
#define 	AT91C_TC_ASWTRG_TOGGLE               ((unsigned int) 0x3 << 22) /* (TC) Effect: toggle */
#define AT91C_TC_BCPB         ((unsigned int) 0x3 << 24) /* (TC) RB Compare Effect on TIOB */
#define 	AT91C_TC_BCPB_NONE                 ((unsigned int) 0x0 << 24) /* (TC) Effect: none */
#define 	AT91C_TC_BCPB_SET                  ((unsigned int) 0x1 << 24) /* (TC) Effect: set */
#define 	AT91C_TC_BCPB_CLEAR                ((unsigned int) 0x2 << 24) /* (TC) Effect: clear */
#define 	AT91C_TC_BCPB_TOGGLE               ((unsigned int) 0x3 << 24) /* (TC) Effect: toggle */
#define AT91C_TC_BCPC         ((unsigned int) 0x3 << 26) /* (TC) RC Compare Effect on TIOB */
#define 	AT91C_TC_BCPC_NONE                 ((unsigned int) 0x0 << 26) /* (TC) Effect: none */
#define 	AT91C_TC_BCPC_SET                  ((unsigned int) 0x1 << 26) /* (TC) Effect: set */
#define 	AT91C_TC_BCPC_CLEAR                ((unsigned int) 0x2 << 26) /* (TC) Effect: clear */
#define 	AT91C_TC_BCPC_TOGGLE               ((unsigned int) 0x3 << 26) /* (TC) Effect: toggle */
#define AT91C_TC_BEEVT        ((unsigned int) 0x3 << 28) /* (TC) External Event Effect on TIOB */
#define 	AT91C_TC_BEEVT_NONE                 ((unsigned int) 0x0 << 28) /* (TC) Effect: none */
#define 	AT91C_TC_BEEVT_SET                  ((unsigned int) 0x1 << 28) /* (TC) Effect: set */
#define 	AT91C_TC_BEEVT_CLEAR                ((unsigned int) 0x2 << 28) /* (TC) Effect: clear */
#define 	AT91C_TC_BEEVT_TOGGLE               ((unsigned int) 0x3 << 28) /* (TC) Effect: toggle */
#define AT91C_TC_BSWTRG       ((unsigned int) 0x3 << 30) /* (TC) Software Trigger Effect on TIOB */
#define 	AT91C_TC_BSWTRG_NONE                 ((unsigned int) 0x0 << 30) /* (TC) Effect: none */
#define 	AT91C_TC_BSWTRG_SET                  ((unsigned int) 0x1 << 30) /* (TC) Effect: set */
#define 	AT91C_TC_BSWTRG_CLEAR                ((unsigned int) 0x2 << 30) /* (TC) Effect: clear */
#define 	AT91C_TC_BSWTRG_TOGGLE               ((unsigned int) 0x3 << 30) /* (TC) Effect: toggle */
/* -------- TC_SR : (TC Offset: 0x20) TC Channel Status Register --------  */
#define AT91C_TC_COVFS        ((unsigned int) 0x1 <<  0) /* (TC) Counter Overflow */
#define AT91C_TC_LOVRS        ((unsigned int) 0x1 <<  1) /* (TC) Load Overrun */
#define AT91C_TC_CPAS         ((unsigned int) 0x1 <<  2) /* (TC) RA Compare */
#define AT91C_TC_CPBS         ((unsigned int) 0x1 <<  3) /* (TC) RB Compare */
#define AT91C_TC_CPCS         ((unsigned int) 0x1 <<  4) /* (TC) RC Compare */
#define AT91C_TC_LDRAS        ((unsigned int) 0x1 <<  5) /* (TC) RA Loading */
#define AT91C_TC_LDRBS        ((unsigned int) 0x1 <<  6) /* (TC) RB Loading */
#define AT91C_TC_ETRGS        ((unsigned int) 0x1 <<  7) /* (TC) External Trigger */
#define AT91C_TC_CLKSTA       ((unsigned int) 0x1 << 16) /* (TC) Clock Enabling */
#define AT91C_TC_MTIOA        ((unsigned int) 0x1 << 17) /* (TC) TIOA Mirror */
#define AT91C_TC_MTIOB        ((unsigned int) 0x1 << 18) /* (TC) TIOA Mirror */
/* -------- TC_IER : (TC Offset: 0x24) TC Channel Interrupt Enable Register --------  */
/* -------- TC_IDR : (TC Offset: 0x28) TC Channel Interrupt Disable Register --------  */
/* -------- TC_IMR : (TC Offset: 0x2c) TC Channel Interrupt Mask Register --------  */

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Timer Counter Interface */
/* ***************************************************************************** */
typedef struct _AT91S_TCB {
	AT91S_TC	 TCB_TC0; 	/* TC Channel 0 */
	AT91_REG	 Reserved0[4]; 	/*  */
	AT91S_TC	 TCB_TC1; 	/* TC Channel 1 */
	AT91_REG	 Reserved1[4]; 	/*  */
	AT91S_TC	 TCB_TC2; 	/* TC Channel 2 */
	AT91_REG	 Reserved2[4]; 	/*  */
	AT91_REG	 TCB_BCR; 	/* TC Block Control Register */
	AT91_REG	 TCB_BMR; 	/* TC Block Mode Register */
} AT91S_TCB, *AT91PS_TCB;

/* -------- TCB_BCR : (TCB Offset: 0xc0) TC Block Control Register --------  */
#define AT91C_TCB_SYNC        ((unsigned int) 0x1 <<  0) /* (TCB) Synchro Command */
/* -------- TCB_BMR : (TCB Offset: 0xc4) TC Block Mode Register --------  */
#define AT91C_TCB_TC0XC0S     ((unsigned int) 0x3 <<  0) /* (TCB) External Clock Signal 0 Selection */
#define 	AT91C_TCB_TC0XC0S_TCLK0                ((unsigned int) 0x0) /* (TCB) TCLK0 connected to XC0 */
#define 	AT91C_TCB_TC0XC0S_NONE                 ((unsigned int) 0x1) /* (TCB) None signal connected to XC0 */
#define 	AT91C_TCB_TC0XC0S_TIOA1                ((unsigned int) 0x2) /* (TCB) TIOA1 connected to XC0 */
#define 	AT91C_TCB_TC0XC0S_TIOA2                ((unsigned int) 0x3) /* (TCB) TIOA2 connected to XC0 */
#define AT91C_TCB_TC1XC1S     ((unsigned int) 0x3 <<  2) /* (TCB) External Clock Signal 1 Selection */
#define 	AT91C_TCB_TC1XC1S_TCLK1                ((unsigned int) 0x0 <<  2) /* (TCB) TCLK1 connected to XC1 */
#define 	AT91C_TCB_TC1XC1S_NONE                 ((unsigned int) 0x1 <<  2) /* (TCB) None signal connected to XC1 */
#define 	AT91C_TCB_TC1XC1S_TIOA0                ((unsigned int) 0x2 <<  2) /* (TCB) TIOA0 connected to XC1 */
#define 	AT91C_TCB_TC1XC1S_TIOA2                ((unsigned int) 0x3 <<  2) /* (TCB) TIOA2 connected to XC1 */
#define AT91C_TCB_TC2XC2S     ((unsigned int) 0x3 <<  4) /* (TCB) External Clock Signal 2 Selection */
#define 	AT91C_TCB_TC2XC2S_TCLK2                ((unsigned int) 0x0 <<  4) /* (TCB) TCLK2 connected to XC2 */
#define 	AT91C_TCB_TC2XC2S_NONE                 ((unsigned int) 0x1 <<  4) /* (TCB) None signal connected to XC2 */
#define 	AT91C_TCB_TC2XC2S_TIOA0                ((unsigned int) 0x2 <<  4) /* (TCB) TIOA0 connected to XC2 */
#define 	AT91C_TCB_TC2XC2S_TIOA1                ((unsigned int) 0x3 <<  4) /* (TCB) TIOA2 connected to XC2 */

/* ========== Register definition for PITC peripheral ==========  */
#define AT91C_PITC_PIIR ((AT91_REG *) 	0xFFFFFD3C) /* (PITC) Period Interval Image Register */
#define AT91C_PITC_PISR ((AT91_REG *) 	0xFFFFFD34) /* (PITC) Period Interval Status Register */
#define AT91C_PITC_PIVR ((AT91_REG *) 	0xFFFFFD38) /* (PITC) Period Interval Value Register */
#define AT91C_PITC_PIMR ((AT91_REG *) 	0xFFFFFD30) /* (PITC) Period Interval Mode Register */
/* ========== Register definition for WDTC peripheral ==========  */
#define AT91C_WDTC_WDMR ((AT91_REG *) 	0xFFFFFD44) /* (WDTC) Watchdog Mode Register */
#define AT91C_WDTC_WDSR ((AT91_REG *) 	0xFFFFFD48) /* (WDTC) Watchdog Status Register */
#define AT91C_WDTC_WDCR ((AT91_REG *) 	0xFFFFFD40) /* (WDTC) Watchdog Control Register */
/* ========== Register definition for TC0 peripheral ==========  */
#define AT91C_TC0_IMR   ((AT91_REG *) 	0xFFFA002C) /* (TC0) Interrupt Mask Register */
#define AT91C_TC0_IER   ((AT91_REG *) 	0xFFFA0024) /* (TC0) Interrupt Enable Register */
#define AT91C_TC0_RC    ((AT91_REG *) 	0xFFFA001C) /* (TC0) Register C */
#define AT91C_TC0_RA    ((AT91_REG *) 	0xFFFA0014) /* (TC0) Register A */
#define AT91C_TC0_CMR   ((AT91_REG *) 	0xFFFA0004) /* (TC0) Channel Mode Register (Capture Mode / Waveform Mode) */
#define AT91C_TC0_IDR   ((AT91_REG *) 	0xFFFA0028) /* (TC0) Interrupt Disable Register */
#define AT91C_TC0_SR    ((AT91_REG *) 	0xFFFA0020) /* (TC0) Status Register */
#define AT91C_TC0_RB    ((AT91_REG *) 	0xFFFA0018) /* (TC0) Register B */
#define AT91C_TC0_CV    ((AT91_REG *) 	0xFFFA0010) /* (TC0) Counter Value */
#define AT91C_TC0_CCR   ((AT91_REG *) 	0xFFFA0000) /* (TC0) Channel Control Register */
/* ========== Register definition for TC1 peripheral ==========  */
#define AT91C_TC1_IMR   ((AT91_REG *) 	0xFFFA006C) /* (TC1) Interrupt Mask Register */
#define AT91C_TC1_IER   ((AT91_REG *) 	0xFFFA0064) /* (TC1) Interrupt Enable Register */
#define AT91C_TC1_RC    ((AT91_REG *) 	0xFFFA005C) /* (TC1) Register C */
#define AT91C_TC1_RA    ((AT91_REG *) 	0xFFFA0054) /* (TC1) Register A */
#define AT91C_TC1_CMR   ((AT91_REG *) 	0xFFFA0044) /* (TC1) Channel Mode Register (Capture Mode / Waveform Mode) */
#define AT91C_TC1_IDR   ((AT91_REG *) 	0xFFFA0068) /* (TC1) Interrupt Disable Register */
#define AT91C_TC1_SR    ((AT91_REG *) 	0xFFFA0060) /* (TC1) Status Register */
#define AT91C_TC1_RB    ((AT91_REG *) 	0xFFFA0058) /* (TC1) Register B */
#define AT91C_TC1_CV    ((AT91_REG *) 	0xFFFA0050) /* (TC1) Counter Value */
#define AT91C_TC1_CCR   ((AT91_REG *) 	0xFFFA0040) /* (TC1) Channel Control Register */
/* ========== Register definition for TC2 peripheral ==========  */
#define AT91C_TC2_IMR   ((AT91_REG *) 	0xFFFA00AC) /* (TC2) Interrupt Mask Register */
#define AT91C_TC2_IER   ((AT91_REG *) 	0xFFFA00A4) /* (TC2) Interrupt Enable Register */
#define AT91C_TC2_RC    ((AT91_REG *) 	0xFFFA009C) /* (TC2) Register C */
#define AT91C_TC2_RA    ((AT91_REG *) 	0xFFFA0094) /* (TC2) Register A */
#define AT91C_TC2_CMR   ((AT91_REG *) 	0xFFFA0084) /* (TC2) Channel Mode Register (Capture Mode / Waveform Mode) */
#define AT91C_TC2_IDR   ((AT91_REG *) 	0xFFFA00A8) /* (TC2) Interrupt Disable Register */
#define AT91C_TC2_SR    ((AT91_REG *) 	0xFFFA00A0) /* (TC2) Status Register */
#define AT91C_TC2_RB    ((AT91_REG *) 	0xFFFA0098) /* (TC2) Register B */
#define AT91C_TC2_CV    ((AT91_REG *) 	0xFFFA0090) /* (TC2) Counter Value */
#define AT91C_TC2_CCR   ((AT91_REG *) 	0xFFFA0080) /* (TC2) Channel Control Register */
/* ========== Register definition for TC3 peripheral ==========  */
#define AT91C_TC3_IMR   ((AT91_REG *) 	0xFFFDC02C) /* (TC3) Interrupt Mask Register */
#define AT91C_TC3_IER   ((AT91_REG *) 	0xFFFDC024) /* (TC3) Interrupt Enable Register */
#define AT91C_TC3_RC    ((AT91_REG *) 	0xFFFDC01C) /* (TC3) Register C */
#define AT91C_TC3_RA    ((AT91_REG *) 	0xFFFDC014) /* (TC3) Register A */
#define AT91C_TC3_CMR   ((AT91_REG *) 	0xFFFDC004) /* (TC3) Channel Mode Register (Capture Mode / Waveform Mode) */
#define AT91C_TC3_IDR   ((AT91_REG *) 	0xFFFDC028) /* (TC3) Interrupt Disable Register */
#define AT91C_TC3_SR    ((AT91_REG *) 	0xFFFDC020) /* (TC3) Status Register */
#define AT91C_TC3_RB    ((AT91_REG *) 	0xFFFDC018) /* (TC3) Register B */
#define AT91C_TC3_CV    ((AT91_REG *) 	0xFFFDC010) /* (TC3) Counter Value */
#define AT91C_TC3_CCR   ((AT91_REG *) 	0xFFFDC000) /* (TC3) Channel Control Register */
/* ========== Register definition for TC4 peripheral ==========  */
#define AT91C_TC4_IMR   ((AT91_REG *) 	0xFFFDC06C) /* (TC4) Interrupt Mask Register */
#define AT91C_TC4_IER   ((AT91_REG *) 	0xFFFDC064) /* (TC4) Interrupt Enable Register */
#define AT91C_TC4_RC    ((AT91_REG *) 	0xFFFDC05C) /* (TC4) Register C */
#define AT91C_TC4_RA    ((AT91_REG *) 	0xFFFDC054) /* (TC4) Register A */
#define AT91C_TC4_CMR   ((AT91_REG *) 	0xFFFDC044) /* (TC4) Channel Mode Register (Capture Mode / Waveform Mode) */
#define AT91C_TC4_IDR   ((AT91_REG *) 	0xFFFDC068) /* (TC4) Interrupt Disable Register */
#define AT91C_TC4_SR    ((AT91_REG *) 	0xFFFDC060) /* (TC4) Status Register */
#define AT91C_TC4_RB    ((AT91_REG *) 	0xFFFDC058) /* (TC4) Register B */
#define AT91C_TC4_CV    ((AT91_REG *) 	0xFFFDC050) /* (TC4) Counter Value */
#define AT91C_TC4_CCR   ((AT91_REG *) 	0xFFFDC040) /* (TC4) Channel Control Register */
/* ========== Register definition for TC5 peripheral ==========  */
#define AT91C_TC5_IDR   ((AT91_REG *) 	0xFFFDC0A8) /* (TC5) Interrupt Disable Register */
#define AT91C_TC5_CMR   ((AT91_REG *) 	0xFFFDC084) /* (TC5) Channel Mode Register (Capture Mode / Waveform Mode) */
#define AT91C_TC5_RB    ((AT91_REG *) 	0xFFFDC098) /* (TC5) Register B */
#define AT91C_TC5_CV    ((AT91_REG *) 	0xFFFDC090) /* (TC5) Counter Value */
#define AT91C_TC5_CCR   ((AT91_REG *) 	0xFFFDC080) /* (TC5) Channel Control Register */
#define AT91C_TC5_SR    ((AT91_REG *) 	0xFFFDC0A0) /* (TC5) Status Register */
#define AT91C_TC5_RA    ((AT91_REG *) 	0xFFFDC094) /* (TC5) Register A */
#define AT91C_TC5_RC    ((AT91_REG *) 	0xFFFDC09C) /* (TC5) Register C */
#define AT91C_TC5_IMR   ((AT91_REG *) 	0xFFFDC0AC) /* (TC5) Interrupt Mask Register */
#define AT91C_TC5_IER   ((AT91_REG *) 	0xFFFDC0A4) /* (TC5) Interrupt Enable Register */
/* ========== Register definition for TCB0 peripheral ==========  */
#define AT91C_TCB0_BMR  ((AT91_REG *) 	0xFFFA00C4) /* (TCB0) TC Block Mode Register */
#define AT91C_TCB0_BCR  ((AT91_REG *) 	0xFFFA00C0) /* (TCB0) TC Block Control Register */
/* ========== Register definition for TCB1 peripheral ==========  */
#define AT91C_TCB1_BCR  ((AT91_REG *) 	0xFFFDC0C0) /* (TCB1) TC Block Control Register */
#define AT91C_TCB1_BMR  ((AT91_REG *) 	0xFFFDC0C4) /* (TCB1) TC Block Mode Register */

#endif
