/*
 * (C) Copyright 2006
 * M Amine SAYA ATMEL Rousset, France.
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

#ifndef AT91SAM9260_AT91_SYSMAN_H
#define AT91SAM9260_AT91_SYSMAN_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Chip Configuration Registers */
/* ***************************************************************************** */
typedef struct _AT91S_CCFG {
	AT91_REG	 Reserved0[3]; 	/*  */
	AT91_REG	 CCFG_EBICSA; 	/*  EBI Chip Select Assignement Register */
	AT91_REG	 Reserved1[55]; 	/*  */
	AT91_REG	 CCFG_MATRIXVERSION; 	/*  Version Register */
} AT91S_CCFG, *AT91PS_CCFG;

/* -------- CCFG_EBICSA : (CCFG Offset: 0xc) EBI Chip Select Assignement Register --------  */
#define AT91C_EBI_CS1A        ((unsigned int) 0x1 <<  1) /* (CCFG) Chip Select 1 Assignment */
#define 	AT91C_EBI_CS1A_SMC                  ((unsigned int) 0x0 <<  1) /* (CCFG) Chip Select 1 is assigned to the Static Memory Controller. */
#define 	AT91C_EBI_CS1A_SDRAMC               ((unsigned int) 0x1 <<  1) /* (CCFG) Chip Select 1 is assigned to the SDRAM Controller. */
#define AT91C_EBI_CS3A        ((unsigned int) 0x1 <<  3) /* (CCFG) Chip Select 3 Assignment */
#define 	AT91C_EBI_CS3A_SMC                  ((unsigned int) 0x0 <<  3) /* (CCFG) Chip Select 3 is only assigned to the Static Memory Controller and NCS3 behaves as defined by the SMC. */
#define 	AT91C_EBI_CS3A_SM                   ((unsigned int) 0x1 <<  3) /* (CCFG) Chip Select 3 is assigned to the Static Memory Controller and the SmartMedia Logic is activated. */
#define AT91C_EBI_CS4A        ((unsigned int) 0x1 <<  4) /* (CCFG) Chip Select 4 Assignment */
#define 	AT91C_EBI_CS4A_SMC                  ((unsigned int) 0x0 <<  4) /* (CCFG) Chip Select 4 is only assigned to the Static Memory Controller and NCS4 behaves as defined by the SMC. */
#define 	AT91C_EBI_CS4A_CF                   ((unsigned int) 0x1 <<  4) /* (CCFG) Chip Select 4 is assigned to the Static Memory Controller and the CompactFlash Logic (first slot) is activated. */
#define AT91C_EBI_CS5A        ((unsigned int) 0x1 <<  5) /* (CCFG) Chip Select 5 Assignment */
#define 	AT91C_EBI_CS5A_SMC                  ((unsigned int) 0x0 <<  5) /* (CCFG) Chip Select 5 is only assigned to the Static Memory Controller and NCS5 behaves as defined by the SMC */
#define 	AT91C_EBI_CS5A_CF                   ((unsigned int) 0x1 <<  5) /* (CCFG) Chip Select 5 is assigned to the Static Memory Controller and the CompactFlash Logic (second slot) is activated. */
#define AT91C_EBI_DBPUC       ((unsigned int) 0x1 <<  8) /* (CCFG) Data Bus Pull-up Configuration */


/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Clock Generator Controler */
/* ***************************************************************************** */
typedef struct _AT91S_CKGR {
	AT91_REG	 CKGR_MOR; 	/* Main Oscillator Register */
	AT91_REG	 CKGR_MCFR; 	/* Main Clock  Frequency Register */
	AT91_REG	 CKGR_PLLAR; 	/* PLL A Register */
	AT91_REG	 CKGR_PLLBR; 	/* PLL B Register */
} AT91S_CKGR, *AT91PS_CKGR;

/* -------- CKGR_MOR : (CKGR Offset: 0x0) Main Oscillator Register --------  */
#define AT91C_CKGR_MOSCEN     ((unsigned int) 0x1 <<  0) /* (CKGR) Main Oscillator Enable */
#define AT91C_CKGR_OSCBYPASS  ((unsigned int) 0x1 <<  1) /* (CKGR) Main Oscillator Bypass */
#define AT91C_CKGR_OSCOUNT    ((unsigned int) 0xFF <<  8) /* (CKGR) Main Oscillator Start-up Time */
/* -------- CKGR_MCFR : (CKGR Offset: 0x4) Main Clock Frequency Register --------  */
#define AT91C_CKGR_MAINF      ((unsigned int) 0xFFFF <<  0) /* (CKGR) Main Clock Frequency */
#define AT91C_CKGR_MAINRDY    ((unsigned int) 0x1 << 16) /* (CKGR) Main Clock Ready */
/* -------- CKGR_PLLAR : (CKGR Offset: 0x8) PLL A Register --------  */
#define AT91C_CKGR_DIVA       ((unsigned int) 0xFF <<  0) /* (CKGR) Divider A Selected */
#define 	AT91C_CKGR_DIVA_0                    ((unsigned int) 0x0) /* (CKGR) Divider A output is 0 */
#define 	AT91C_CKGR_DIVA_BYPASS               ((unsigned int) 0x1) /* (CKGR) Divider A is bypassed */
#define AT91C_CKGR_PLLACOUNT  ((unsigned int) 0x3F <<  8) /* (CKGR) PLL A Counter */
#define AT91C_CKGR_OUTA       ((unsigned int) 0x3 << 14) /* (CKGR) PLL A Output Frequency Range */
#define 	AT91C_CKGR_OUTA_0                    ((unsigned int) 0x0 << 14) /* (CKGR) Please refer to the PLLA datasheet */
#define 	AT91C_CKGR_OUTA_1                    ((unsigned int) 0x1 << 14) /* (CKGR) Please refer to the PLLA datasheet */
#define 	AT91C_CKGR_OUTA_2                    ((unsigned int) 0x2 << 14) /* (CKGR) Please refer to the PLLA datasheet */
#define 	AT91C_CKGR_OUTA_3                    ((unsigned int) 0x3 << 14) /* (CKGR) Please refer to the PLLA datasheet */
#define AT91C_CKGR_MULA       ((unsigned int) 0x7FF << 16) /* (CKGR) PLL A Multiplier */
#define AT91C_CKGR_SRCA       ((unsigned int) 0x1 << 29) /* (CKGR)  */
/* -------- CKGR_PLLBR : (CKGR Offset: 0xc) PLL B Register --------  */
#define AT91C_CKGR_DIVB       ((unsigned int) 0xFF <<  0) /* (CKGR) Divider B Selected */
#define 	AT91C_CKGR_DIVB_0                    ((unsigned int) 0x0) /* (CKGR) Divider B output is 0 */
#define 	AT91C_CKGR_DIVB_BYPASS               ((unsigned int) 0x1) /* (CKGR) Divider B is bypassed */
#define AT91C_CKGR_PLLBCOUNT  ((unsigned int) 0x3F <<  8) /* (CKGR) PLL B Counter */
#define AT91C_CKGR_OUTB       ((unsigned int) 0x3 << 14) /* (CKGR) PLL B Output Frequency Range */
#define 	AT91C_CKGR_OUTB_0                    ((unsigned int) 0x0 << 14) /* (CKGR) Please refer to the PLLB datasheet */
#define 	AT91C_CKGR_OUTB_1                    ((unsigned int) 0x1 << 14) /* (CKGR) Please refer to the PLLB datasheet */
#define 	AT91C_CKGR_OUTB_2                    ((unsigned int) 0x2 << 14) /* (CKGR) Please refer to the PLLB datasheet */
#define 	AT91C_CKGR_OUTB_3                    ((unsigned int) 0x3 << 14) /* (CKGR) Please refer to the PLLB datasheet */
#define AT91C_CKGR_MULB       ((unsigned int) 0x7FF << 16) /* (CKGR) PLL B Multiplier */
#define AT91C_CKGR_USBDIV     ((unsigned int) 0x3 << 28) /* (CKGR) Divider for USB Clocks */
#define 	AT91C_CKGR_USBDIV_0                    ((unsigned int) 0x0 << 28) /* (CKGR) Divider output is PLL clock output */
#define 	AT91C_CKGR_USBDIV_1                    ((unsigned int) 0x1 << 28) /* (CKGR) Divider output is PLL clock output divided by 2 */
#define 	AT91C_CKGR_USBDIV_2                    ((unsigned int) 0x2 << 28) /* (CKGR) Divider output is PLL clock output divided by 4 */

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Power Management Controler */
/* ***************************************************************************** */
typedef struct _AT91S_PMC {
	AT91_REG	 PMC_SCER; 	/* System Clock Enable Register */
	AT91_REG	 PMC_SCDR; 	/* System Clock Disable Register */
	AT91_REG	 PMC_SCSR; 	/* System Clock Status Register */
	AT91_REG	 Reserved0[1]; 	/*  */
	AT91_REG	 PMC_PCER; 	/* Peripheral Clock Enable Register */
	AT91_REG	 PMC_PCDR; 	/* Peripheral Clock Disable Register */
	AT91_REG	 PMC_PCSR; 	/* Peripheral Clock Status Register */
	AT91_REG	 Reserved1[1]; 	/*  */
	AT91_REG	 PMC_MOR; 	/* Main Oscillator Register */
	AT91_REG	 PMC_MCFR; 	/* Main Clock  Frequency Register */
	AT91_REG	 PMC_PLLAR; 	/* PLL A Register */
	AT91_REG	 PMC_PLLBR; 	/* PLL B Register */
	AT91_REG	 PMC_MCKR; 	/* Master Clock Register */
	AT91_REG	 Reserved2[3]; 	/*  */
	AT91_REG	 PMC_PCKR[8]; 	/* Programmable Clock Register */
	AT91_REG	 PMC_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PMC_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PMC_SR; 	/* Status Register */
	AT91_REG	 PMC_IMR; 	/* Interrupt Mask Register */
} AT91S_PMC, *AT91PS_PMC;

/* -------- PMC_SCER : (PMC Offset: 0x0) System Clock Enable Register --------  */
#define AT91C_PMC_PCK         ((unsigned int) 0x1 <<  0) /* (PMC) Processor Clock */
#define AT91C_PMC_UHP         ((unsigned int) 0x1 <<  6) /* (PMC) USB Host Port Clock */
#define AT91C_PMC_UDP         ((unsigned int) 0x1 <<  7) /* (PMC) USB Device Port Clock */
#define AT91C_PMC_PCK0        ((unsigned int) 0x1 <<  8) /* (PMC) Programmable Clock Output */
#define AT91C_PMC_PCK1        ((unsigned int) 0x1 <<  9) /* (PMC) Programmable Clock Output */
#define AT91C_PMC_HCK0        ((unsigned int) 0x1 << 16) /* (PMC) AHB UHP Clock Output */
#define AT91C_PMC_HCK1        ((unsigned int) 0x1 << 17) /* (PMC) AHB LCDC Clock Output */
/* -------- PMC_SCDR : (PMC Offset: 0x4) System Clock Disable Register --------  */
/* -------- PMC_SCSR : (PMC Offset: 0x8) System Clock Status Register --------  */
/* -------- CKGR_MOR : (PMC Offset: 0x20) Main Oscillator Register --------  */
/* -------- CKGR_MCFR : (PMC Offset: 0x24) Main Clock Frequency Register --------  */
/* -------- CKGR_PLLAR : (PMC Offset: 0x28) PLL A Register --------  */
/* -------- CKGR_PLLBR : (PMC Offset: 0x2c) PLL B Register --------  */
/* -------- PMC_MCKR : (PMC Offset: 0x30) Master Clock Register --------  */
#define AT91C_PMC_CSS         ((unsigned int) 0x3 <<  0) /* (PMC) Programmable Clock Selection */
#define 	AT91C_PMC_CSS_SLOW_CLK             ((unsigned int) 0x0) /* (PMC) Slow Clock is selected */
#define 	AT91C_PMC_CSS_MAIN_CLK             ((unsigned int) 0x1) /* (PMC) Main Clock is selected */
#define 	AT91C_PMC_CSS_PLLA_CLK             ((unsigned int) 0x2) /* (PMC) Clock from PLL A is selected */
#define 	AT91C_PMC_CSS_PLLB_CLK             ((unsigned int) 0x3) /* (PMC) Clock from PLL B is selected */
#define AT91C_PMC_PRES        ((unsigned int) 0x7 <<  2) /* (PMC) Programmable Clock Prescaler */
#define 	AT91C_PMC_PRES_CLK                  ((unsigned int) 0x0 <<  2) /* (PMC) Selected clock */
#define 	AT91C_PMC_PRES_CLK_2                ((unsigned int) 0x1 <<  2) /* (PMC) Selected clock divided by 2 */
#define 	AT91C_PMC_PRES_CLK_4                ((unsigned int) 0x2 <<  2) /* (PMC) Selected clock divided by 4 */
#define 	AT91C_PMC_PRES_CLK_8                ((unsigned int) 0x3 <<  2) /* (PMC) Selected clock divided by 8 */
#define 	AT91C_PMC_PRES_CLK_16               ((unsigned int) 0x4 <<  2) /* (PMC) Selected clock divided by 16 */
#define 	AT91C_PMC_PRES_CLK_32               ((unsigned int) 0x5 <<  2) /* (PMC) Selected clock divided by 32 */
#define 	AT91C_PMC_PRES_CLK_64               ((unsigned int) 0x6 <<  2) /* (PMC) Selected clock divided by 64 */
#define AT91C_PMC_MDIV        ((unsigned int) 0x3 <<  8) /* (PMC) Master Clock Division */
#define 	AT91C_PMC_MDIV_1                    ((unsigned int) 0x0 <<  8) /* (PMC) The master clock and the processor clock are the same */
#define 	AT91C_PMC_MDIV_2                    ((unsigned int) 0x1 <<  8) /* (PMC) The processor clock is twice as fast as the master clock */
#define 	AT91C_PMC_MDIV_3                    ((unsigned int) 0x2 <<  8) /* (PMC) The processor clock is four times faster than the master clock */
/* -------- PMC_PCKR : (PMC Offset: 0x40) Programmable Clock Register --------  */
/* -------- PMC_IER : (PMC Offset: 0x60) PMC Interrupt Enable Register --------  */
#define AT91C_PMC_MOSCS       ((unsigned int) 0x1 <<  0) /* (PMC) MOSC Status/Enable/Disable/Mask */
#define AT91C_PMC_LOCKA       ((unsigned int) 0x1 <<  1) /* (PMC) PLL A Status/Enable/Disable/Mask */
#define AT91C_PMC_LOCKB       ((unsigned int) 0x1 <<  2) /* (PMC) PLL B Status/Enable/Disable/Mask */
#define AT91C_PMC_MCKRDY      ((unsigned int) 0x1 <<  3) /* (PMC) Master Clock Status/Enable/Disable/Mask */
#define AT91C_PMC_PCK0RDY     ((unsigned int) 0x1 <<  8) /* (PMC) PCK0_RDY Status/Enable/Disable/Mask */
#define AT91C_PMC_PCK1RDY     ((unsigned int) 0x1 <<  9) /* (PMC) PCK1_RDY Status/Enable/Disable/Mask */
/* -------- PMC_IDR : (PMC Offset: 0x64) PMC Interrupt Disable Register --------  */
/* -------- PMC_SR : (PMC Offset: 0x68) PMC Status Register --------  */
#define AT91C_PMC_OSCSEL      ((unsigned int) 0x1 <<  7) /* (PMC) 32kHz Oscillator selection status */
/* -------- PMC_IMR : (PMC Offset: 0x6c) PMC Interrupt Mask Register --------  */

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Reset Controller Interface */
/* ***************************************************************************** */
typedef struct _AT91S_RSTC {
	AT91_REG	 RSTC_RCR; 	/* Reset Control Register */
	AT91_REG	 RSTC_RSR; 	/* Reset Status Register */
	AT91_REG	 RSTC_RMR; 	/* Reset Mode Register */
} AT91S_RSTC, *AT91PS_RSTC;

/* -------- RSTC_RCR : (RSTC Offset: 0x0) Reset Control Register --------  */
#define AT91C_RSTC_PROCRST    ((unsigned int) 0x1 <<  0) /* (RSTC) Processor Reset */
#define AT91C_RSTC_ICERST     ((unsigned int) 0x1 <<  1) /* (RSTC) ICE Interface Reset */
#define AT91C_RSTC_PERRST     ((unsigned int) 0x1 <<  2) /* (RSTC) Peripheral Reset */
#define AT91C_RSTC_EXTRST     ((unsigned int) 0x1 <<  3) /* (RSTC) External Reset */
#define AT91C_RSTC_KEY        ((unsigned int) 0xFF << 24) /* (RSTC) Password */
/* -------- RSTC_RSR : (RSTC Offset: 0x4) Reset Status Register --------  */
#define AT91C_RSTC_URSTS      ((unsigned int) 0x1 <<  0) /* (RSTC) User Reset Status */
#define AT91C_RSTC_RSTTYP     ((unsigned int) 0x7 <<  8) /* (RSTC) Reset Type */
#define 	AT91C_RSTC_RSTTYP_GENERAL              ((unsigned int) 0x0 <<  8) /* (RSTC) General reset. Both VDDCORE and VDDBU rising. */
#define 	AT91C_RSTC_RSTTYP_WAKEUP               ((unsigned int) 0x1 <<  8) /* (RSTC) WakeUp Reset. VDDCORE rising. */
#define 	AT91C_RSTC_RSTTYP_WATCHDOG             ((unsigned int) 0x2 <<  8) /* (RSTC) Watchdog Reset. Watchdog overflow occured. */
#define 	AT91C_RSTC_RSTTYP_SOFTWARE             ((unsigned int) 0x3 <<  8) /* (RSTC) Software Reset. Processor reset required by the software. */
#define 	AT91C_RSTC_RSTTYP_USER                 ((unsigned int) 0x4 <<  8) /* (RSTC) User Reset. NRST pin detected low. */
#define AT91C_RSTC_NRSTL      ((unsigned int) 0x1 << 16) /* (RSTC) NRST pin level */
#define AT91C_RSTC_SRCMP      ((unsigned int) 0x1 << 17) /* (RSTC) Software Reset Command in Progress. */
/* -------- RSTC_RMR : (RSTC Offset: 0x8) Reset Mode Register --------  */
#define AT91C_RSTC_URSTEN     ((unsigned int) 0x1 <<  0) /* (RSTC) User Reset Enable */
#define AT91C_RSTC_URSTIEN    ((unsigned int) 0x1 <<  4) /* (RSTC) User Reset Interrupt Enable */
#define AT91C_RSTC_ERSTL      ((unsigned int) 0xF <<  8) /* (RSTC) User Reset Enable */

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Shut Down Controller Interface */
/* ***************************************************************************** */
typedef struct _AT91S_SHDWC {
	AT91_REG	 SHDWC_SHCR; 	/* Shut Down Control Register */
	AT91_REG	 SHDWC_SHMR; 	/* Shut Down Mode Register */
	AT91_REG	 SHDWC_SHSR; 	/* Shut Down Status Register */
} AT91S_SHDWC, *AT91PS_SHDWC;

/* -------- SHDWC_SHCR : (SHDWC Offset: 0x0) Shut Down Control Register --------  */
#define AT91C_SHDWC_SHDW      ((unsigned int) 0x1 <<  0) /* (SHDWC) Processor Reset */
#define AT91C_SHDWC_KEY       ((unsigned int) 0xFF << 24) /* (SHDWC) Shut down KEY Password */
/* -------- SHDWC_SHMR : (SHDWC Offset: 0x4) Shut Down Mode Register --------  */
#define AT91C_SHDWC_WKMODE0   ((unsigned int) 0x3 <<  0) /* (SHDWC) Wake Up 0 Mode Selection */
#define 	AT91C_SHDWC_WKMODE0_NONE                 ((unsigned int) 0x0) /* (SHDWC) None. No detection is performed on the wake up input. */
#define 	AT91C_SHDWC_WKMODE0_HIGH                 ((unsigned int) 0x1) /* (SHDWC) High Level. */
#define 	AT91C_SHDWC_WKMODE0_LOW                  ((unsigned int) 0x2) /* (SHDWC) Low Level. */
#define 	AT91C_SHDWC_WKMODE0_ANYLEVEL             ((unsigned int) 0x3) /* (SHDWC) Any level change. */
#define AT91C_SHDWC_CPTWK0    ((unsigned int) 0xF <<  4) /* (SHDWC) Counter On Wake Up 0 */
#define AT91C_SHDWC_WKMODE1   ((unsigned int) 0x3 <<  8) /* (SHDWC) Wake Up 1 Mode Selection */
#define 	AT91C_SHDWC_WKMODE1_NONE                 ((unsigned int) 0x0 <<  8) /* (SHDWC) None. No detection is performed on the wake up input. */
#define 	AT91C_SHDWC_WKMODE1_HIGH                 ((unsigned int) 0x1 <<  8) /* (SHDWC) High Level. */
#define 	AT91C_SHDWC_WKMODE1_LOW                  ((unsigned int) 0x2 <<  8) /* (SHDWC) Low Level. */
#define 	AT91C_SHDWC_WKMODE1_ANYLEVEL             ((unsigned int) 0x3 <<  8) /* (SHDWC) Any level change. */
#define AT91C_SHDWC_CPTWK1    ((unsigned int) 0xF << 12) /* (SHDWC) Counter On Wake Up 1 */
#define AT91C_SHDWC_RTTWKEN   ((unsigned int) 0x1 << 16) /* (SHDWC) Real Time Timer Wake Up Enable */
#define AT91C_SHDWC_RTCWKEN   ((unsigned int) 0x1 << 17) /* (SHDWC) Real Time Clock Wake Up Enable */
/* -------- SHDWC_SHSR : (SHDWC Offset: 0x8) Shut Down Status Register --------  */
#define AT91C_SHDWC_WAKEUP0   ((unsigned int) 0x1 <<  0) /* (SHDWC) Wake Up 0 Status */
#define AT91C_SHDWC_WAKEUP1   ((unsigned int) 0x1 <<  1) /* (SHDWC) Wake Up 1 Status */
#define AT91C_SHDWC_FWKUP     ((unsigned int) 0x1 <<  2) /* (SHDWC) Force Wake Up Status */
#define AT91C_SHDWC_RTTWK     ((unsigned int) 0x1 << 16) /* (SHDWC) Real Time Timer wake Up */
#define AT91C_SHDWC_RTCWK     ((unsigned int) 0x1 << 17) /* (SHDWC) Real Time Clock wake Up */

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Real Time Timer Controller Interface */
/* ***************************************************************************** */
typedef struct _AT91S_RTTC {
	AT91_REG	 RTTC_RTMR; 	/* Real-time Mode Register */
	AT91_REG	 RTTC_RTAR; 	/* Real-time Alarm Register */
	AT91_REG	 RTTC_RTVR; 	/* Real-time Value Register */
	AT91_REG	 RTTC_RTSR; 	/* Real-time Status Register */
} AT91S_RTTC, *AT91PS_RTTC;

/* -------- RTTC_RTMR : (RTTC Offset: 0x0) Real-time Mode Register --------  */
#define AT91C_RTTC_RTPRES     ((unsigned int) 0xFFFF <<  0) /* (RTTC) Real-time Timer Prescaler Value */
#define AT91C_RTTC_ALMIEN     ((unsigned int) 0x1 << 16) /* (RTTC) Alarm Interrupt Enable */
#define AT91C_RTTC_RTTINCIEN  ((unsigned int) 0x1 << 17) /* (RTTC) Real Time Timer Increment Interrupt Enable */
#define AT91C_RTTC_RTTRST     ((unsigned int) 0x1 << 18) /* (RTTC) Real Time Timer Restart */
/* -------- RTTC_RTAR : (RTTC Offset: 0x4) Real-time Alarm Register --------  */
#define AT91C_RTTC_ALMV       ((unsigned int) 0x0 <<  0) /* (RTTC) Alarm Value */
/* -------- RTTC_RTVR : (RTTC Offset: 0x8) Current Real-time Value Register --------  */
#define AT91C_RTTC_CRTV       ((unsigned int) 0x0 <<  0) /* (RTTC) Current Real-time Value */
/* -------- RTTC_RTSR : (RTTC Offset: 0xc) Real-time Status Register --------  */
#define AT91C_RTTC_ALMS       ((unsigned int) 0x1 <<  0) /* (RTTC) Real-time Alarm Status */
#define AT91C_RTTC_RTTINC     ((unsigned int) 0x1 <<  1) /* (RTTC) Real-time Timer Increment */


/* ========== Register definition for CCFG peripheral ==========  */
#define AT91C_CCFG_MATRIXVERSION ((AT91_REG *) 	0xFFFFEFFC) /* (CCFG)  Version Register */
#define AT91C_CCFG_EBICSA ((AT91_REG *) 	0xFFFFEF1C) /* (CCFG)  EBI Chip Select Assignement Register */
/* ========== Register definition for CKGR peripheral ==========  */
#define AT91C_CKGR_PLLBR ((AT91_REG *) 	0xFFFFFC2C) /* (CKGR) PLL B Register */
#define AT91C_CKGR_MCFR ((AT91_REG *) 	0xFFFFFC24) /* (CKGR) Main Clock  Frequency Register */
#define AT91C_CKGR_PLLAR ((AT91_REG *) 	0xFFFFFC28) /* (CKGR) PLL A Register */
#define AT91C_CKGR_MOR  ((AT91_REG *) 	0xFFFFFC20) /* (CKGR) Main Oscillator Register */
/* ========== Register definition for PMC peripheral ==========  */
#define AT91C_PMC_SCSR  ((AT91_REG *) 	0xFFFFFC08) /* (PMC) System Clock Status Register */
#define AT91C_PMC_SCER  ((AT91_REG *) 	0xFFFFFC00) /* (PMC) System Clock Enable Register */
#define AT91C_PMC_IMR   ((AT91_REG *) 	0xFFFFFC6C) /* (PMC) Interrupt Mask Register */
#define AT91C_PMC_IDR   ((AT91_REG *) 	0xFFFFFC64) /* (PMC) Interrupt Disable Register */
#define AT91C_PMC_PCDR  ((AT91_REG *) 	0xFFFFFC14) /* (PMC) Peripheral Clock Disable Register */
#define AT91C_PMC_SCDR  ((AT91_REG *) 	0xFFFFFC04) /* (PMC) System Clock Disable Register */
#define AT91C_PMC_SR    ((AT91_REG *) 	0xFFFFFC68) /* (PMC) Status Register */
#define AT91C_PMC_IER   ((AT91_REG *) 	0xFFFFFC60) /* (PMC) Interrupt Enable Register */
#define AT91C_PMC_MCKR  ((AT91_REG *) 	0xFFFFFC30) /* (PMC) Master Clock Register */
#define AT91C_PMC_PLLAR ((AT91_REG *) 	0xFFFFFC28) /* (PMC) PLL A Register */
#define AT91C_PMC_MOR   ((AT91_REG *) 	0xFFFFFC20) /* (PMC) Main Oscillator Register */
#define AT91C_PMC_PCER  ((AT91_REG *) 	0xFFFFFC10) /* (PMC) Peripheral Clock Enable Register */
#define AT91C_PMC_PCSR  ((AT91_REG *) 	0xFFFFFC18) /* (PMC) Peripheral Clock Status Register */
#define AT91C_PMC_PLLBR ((AT91_REG *) 	0xFFFFFC2C) /* (PMC) PLL B Register */
#define AT91C_PMC_MCFR  ((AT91_REG *) 	0xFFFFFC24) /* (PMC) Main Clock  Frequency Register */
#define AT91C_PMC_PCKR  ((AT91_REG *) 	0xFFFFFC40) /* (PMC) Programmable Clock Register */
/* ========== Register definition for RSTC peripheral ==========  */
#define AT91C_RSTC_RSR  ((AT91_REG *) 	0xFFFFFD04) /* (RSTC) Reset Status Register */
#define AT91C_RSTC_RMR  ((AT91_REG *) 	0xFFFFFD08) /* (RSTC) Reset Mode Register */
#define AT91C_RSTC_RCR  ((AT91_REG *) 	0xFFFFFD00) /* (RSTC) Reset Control Register */
/* ========== Register definition for SHDWC peripheral ==========  */
#define AT91C_SHDWC_SHMR ((AT91_REG *) 	0xFFFFFD14) /* (SHDWC) Shut Down Mode Register */
#define AT91C_SHDWC_SHSR ((AT91_REG *) 	0xFFFFFD18) /* (SHDWC) Shut Down Status Register */
#define AT91C_SHDWC_SHCR ((AT91_REG *) 	0xFFFFFD10) /* (SHDWC) Shut Down Control Register */
/* ========== Register definition for RTTC peripheral ==========  */
#define AT91C_RTTC_RTSR ((AT91_REG *) 	0xFFFFFD2C) /* (RTTC) Real-time Status Register */
#define AT91C_RTTC_RTAR ((AT91_REG *) 	0xFFFFFD24) /* (RTTC) Real-time Alarm Register */
#define AT91C_RTTC_RTVR ((AT91_REG *) 	0xFFFFFD28) /* (RTTC) Real-time Value Register */
#define AT91C_RTTC_RTMR ((AT91_REG *) 	0xFFFFFD20) /* (RTTC) Real-time Mode Register */
#endif
