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

#ifndef AT91SAM9260_AT91_SDRAMC_H
#define AT91SAM9260_AT91_SDRAMC_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR SDRAM Controller Interface */
/* ***************************************************************************** */
typedef struct _AT91S_SDRAMC {
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
} AT91S_SDRAMC, *AT91PS_SDRAMC;

/* -------- SDRAMC_MR : (SDRAMC Offset: 0x0) SDRAM Controller Mode Register --------  */
#define AT91C_SDRAMC_MODE     ((unsigned int) 0xF <<  0) /* (SDRAMC) Mode */
#define 	AT91C_SDRAMC_MODE_NORMAL_CMD           ((unsigned int) 0x0) /* (SDRAMC) Normal Mode */
#define 	AT91C_SDRAMC_MODE_NOP_CMD              ((unsigned int) 0x1) /* (SDRAMC) Issue a NOP Command at every access */
#define 	AT91C_SDRAMC_MODE_PRCGALL_CMD          ((unsigned int) 0x2) /* (SDRAMC) Issue a All Banks Precharge Command at every access */
#define 	AT91C_SDRAMC_MODE_LMR_CMD              ((unsigned int) 0x3) /* (SDRAMC) Issue a Load Mode Register at every access */
#define 	AT91C_SDRAMC_MODE_RFSH_CMD             ((unsigned int) 0x4) /* (SDRAMC) Issue a Refresh */
#define 	AT91C_SDRAMC_MODE_EXT_LMR_CMD          ((unsigned int) 0x5) /* (SDRAMC) Issue an Extended Load Mode Register */
#define 	AT91C_SDRAMC_MODE_DEEP_CMD             ((unsigned int) 0x6) /* (SDRAMC) Enter Deep Power Mode */
/* -------- SDRAMC_TR : (SDRAMC Offset: 0x4) SDRAMC Refresh Timer Register --------  */
#define AT91C_SDRAMC_COUNT    ((unsigned int) 0xFFF <<  0) /* (SDRAMC) Refresh Counter */
/* -------- SDRAMC_CR : (SDRAMC Offset: 0x8) SDRAM Configuration Register --------  */
#define AT91C_SDRAMC_NC       ((unsigned int) 0x3 <<  0) /* (SDRAMC) Number of Column Bits */
#define 	AT91C_SDRAMC_NC_8                    ((unsigned int) 0x0) /* (SDRAMC) 8 Bits */
#define 	AT91C_SDRAMC_NC_9                    ((unsigned int) 0x1) /* (SDRAMC) 9 Bits */
#define 	AT91C_SDRAMC_NC_10                   ((unsigned int) 0x2) /* (SDRAMC) 10 Bits */
#define 	AT91C_SDRAMC_NC_11                   ((unsigned int) 0x3) /* (SDRAMC) 11 Bits */
#define AT91C_SDRAMC_NR       ((unsigned int) 0x3 <<  2) /* (SDRAMC) Number of Row Bits */
#define 	AT91C_SDRAMC_NR_11                   ((unsigned int) 0x0 <<  2) /* (SDRAMC) 11 Bits */
#define 	AT91C_SDRAMC_NR_12                   ((unsigned int) 0x1 <<  2) /* (SDRAMC) 12 Bits */
#define 	AT91C_SDRAMC_NR_13                   ((unsigned int) 0x2 <<  2) /* (SDRAMC) 13 Bits */
#define AT91C_SDRAMC_NB       ((unsigned int) 0x1 <<  4) /* (SDRAMC) Number of Banks */
#define 	AT91C_SDRAMC_NB_2_BANKS              ((unsigned int) 0x0 <<  4) /* (SDRAMC) 2 banks */
#define 	AT91C_SDRAMC_NB_4_BANKS              ((unsigned int) 0x1 <<  4) /* (SDRAMC) 4 banks */
#define AT91C_SDRAMC_CAS      ((unsigned int) 0x3 <<  5) /* (SDRAMC) CAS Latency */
#define 	AT91C_SDRAMC_CAS_2                    ((unsigned int) 0x2 <<  5) /* (SDRAMC) 2 cycles */
#define 	AT91C_SDRAMC_CAS_3                    ((unsigned int) 0x3 <<  5) /* (SDRAMC) 3 cycles */
#define AT91C_SDRAMC_DBW      ((unsigned int) 0x1 <<  7) /* (SDRAMC) Data Bus Width */
#define 	AT91C_SDRAMC_DBW_32_BITS              ((unsigned int) 0x0 <<  7) /* (SDRAMC) 32 Bits datas bus */
#define 	AT91C_SDRAMC_DBW_16_BITS              ((unsigned int) 0x1 <<  7) /* (SDRAMC) 16 Bits datas bus */
#define AT91C_SDRAMC_TWR      ((unsigned int) 0xF <<  8) /* (SDRAMC) Number of Write Recovery Time Cycles */
#define 	AT91C_SDRAMC_TWR_0                    ((unsigned int) 0x0 <<  8) /* (SDRAMC) Value :  0 */
#define 	AT91C_SDRAMC_TWR_1                    ((unsigned int) 0x1 <<  8) /* (SDRAMC) Value :  1 */
#define 	AT91C_SDRAMC_TWR_2                    ((unsigned int) 0x2 <<  8) /* (SDRAMC) Value :  2 */
#define 	AT91C_SDRAMC_TWR_3                    ((unsigned int) 0x3 <<  8) /* (SDRAMC) Value :  3 */
#define 	AT91C_SDRAMC_TWR_4                    ((unsigned int) 0x4 <<  8) /* (SDRAMC) Value :  4 */
#define 	AT91C_SDRAMC_TWR_5                    ((unsigned int) 0x5 <<  8) /* (SDRAMC) Value :  5 */
#define 	AT91C_SDRAMC_TWR_6                    ((unsigned int) 0x6 <<  8) /* (SDRAMC) Value :  6 */
#define 	AT91C_SDRAMC_TWR_7                    ((unsigned int) 0x7 <<  8) /* (SDRAMC) Value :  7 */
#define 	AT91C_SDRAMC_TWR_8                    ((unsigned int) 0x8 <<  8) /* (SDRAMC) Value :  8 */
#define 	AT91C_SDRAMC_TWR_9                    ((unsigned int) 0x9 <<  8) /* (SDRAMC) Value :  9 */
#define 	AT91C_SDRAMC_TWR_10                   ((unsigned int) 0xA <<  8) /* (SDRAMC) Value : 10 */
#define 	AT91C_SDRAMC_TWR_11                   ((unsigned int) 0xB <<  8) /* (SDRAMC) Value : 11 */
#define 	AT91C_SDRAMC_TWR_12                   ((unsigned int) 0xC <<  8) /* (SDRAMC) Value : 12 */
#define 	AT91C_SDRAMC_TWR_13                   ((unsigned int) 0xD <<  8) /* (SDRAMC) Value : 13 */
#define 	AT91C_SDRAMC_TWR_14                   ((unsigned int) 0xE <<  8) /* (SDRAMC) Value : 14 */
#define 	AT91C_SDRAMC_TWR_15                   ((unsigned int) 0xF <<  8) /* (SDRAMC) Value : 15 */
#define AT91C_SDRAMC_TRC      ((unsigned int) 0xF << 12) /* (SDRAMC) Number of RAS Cycle Time Cycles */
#define 	AT91C_SDRAMC_TRC_0                    ((unsigned int) 0x0 << 12) /* (SDRAMC) Value :  0 */
#define 	AT91C_SDRAMC_TRC_1                    ((unsigned int) 0x1 << 12) /* (SDRAMC) Value :  1 */
#define 	AT91C_SDRAMC_TRC_2                    ((unsigned int) 0x2 << 12) /* (SDRAMC) Value :  2 */
#define 	AT91C_SDRAMC_TRC_3                    ((unsigned int) 0x3 << 12) /* (SDRAMC) Value :  3 */
#define 	AT91C_SDRAMC_TRC_4                    ((unsigned int) 0x4 << 12) /* (SDRAMC) Value :  4 */
#define 	AT91C_SDRAMC_TRC_5                    ((unsigned int) 0x5 << 12) /* (SDRAMC) Value :  5 */
#define 	AT91C_SDRAMC_TRC_6                    ((unsigned int) 0x6 << 12) /* (SDRAMC) Value :  6 */
#define 	AT91C_SDRAMC_TRC_7                    ((unsigned int) 0x7 << 12) /* (SDRAMC) Value :  7 */
#define 	AT91C_SDRAMC_TRC_8                    ((unsigned int) 0x8 << 12) /* (SDRAMC) Value :  8 */
#define 	AT91C_SDRAMC_TRC_9                    ((unsigned int) 0x9 << 12) /* (SDRAMC) Value :  9 */
#define 	AT91C_SDRAMC_TRC_10                   ((unsigned int) 0xA << 12) /* (SDRAMC) Value : 10 */
#define 	AT91C_SDRAMC_TRC_11                   ((unsigned int) 0xB << 12) /* (SDRAMC) Value : 11 */
#define 	AT91C_SDRAMC_TRC_12                   ((unsigned int) 0xC << 12) /* (SDRAMC) Value : 12 */
#define 	AT91C_SDRAMC_TRC_13                   ((unsigned int) 0xD << 12) /* (SDRAMC) Value : 13 */
#define 	AT91C_SDRAMC_TRC_14                   ((unsigned int) 0xE << 12) /* (SDRAMC) Value : 14 */
#define 	AT91C_SDRAMC_TRC_15                   ((unsigned int) 0xF << 12) /* (SDRAMC) Value : 15 */
#define AT91C_SDRAMC_TRP      ((unsigned int) 0xF << 16) /* (SDRAMC) Number of RAS Precharge Time Cycles */
#define 	AT91C_SDRAMC_TRP_0                    ((unsigned int) 0x0 << 16) /* (SDRAMC) Value :  0 */
#define 	AT91C_SDRAMC_TRP_1                    ((unsigned int) 0x1 << 16) /* (SDRAMC) Value :  1 */
#define 	AT91C_SDRAMC_TRP_2                    ((unsigned int) 0x2 << 16) /* (SDRAMC) Value :  2 */
#define 	AT91C_SDRAMC_TRP_3                    ((unsigned int) 0x3 << 16) /* (SDRAMC) Value :  3 */
#define 	AT91C_SDRAMC_TRP_4                    ((unsigned int) 0x4 << 16) /* (SDRAMC) Value :  4 */
#define 	AT91C_SDRAMC_TRP_5                    ((unsigned int) 0x5 << 16) /* (SDRAMC) Value :  5 */
#define 	AT91C_SDRAMC_TRP_6                    ((unsigned int) 0x6 << 16) /* (SDRAMC) Value :  6 */
#define 	AT91C_SDRAMC_TRP_7                    ((unsigned int) 0x7 << 16) /* (SDRAMC) Value :  7 */
#define 	AT91C_SDRAMC_TRP_8                    ((unsigned int) 0x8 << 16) /* (SDRAMC) Value :  8 */
#define 	AT91C_SDRAMC_TRP_9                    ((unsigned int) 0x9 << 16) /* (SDRAMC) Value :  9 */
#define 	AT91C_SDRAMC_TRP_10                   ((unsigned int) 0xA << 16) /* (SDRAMC) Value : 10 */
#define 	AT91C_SDRAMC_TRP_11                   ((unsigned int) 0xB << 16) /* (SDRAMC) Value : 11 */
#define 	AT91C_SDRAMC_TRP_12                   ((unsigned int) 0xC << 16) /* (SDRAMC) Value : 12 */
#define 	AT91C_SDRAMC_TRP_13                   ((unsigned int) 0xD << 16) /* (SDRAMC) Value : 13 */
#define 	AT91C_SDRAMC_TRP_14                   ((unsigned int) 0xE << 16) /* (SDRAMC) Value : 14 */
#define 	AT91C_SDRAMC_TRP_15                   ((unsigned int) 0xF << 16) /* (SDRAMC) Value : 15 */
#define AT91C_SDRAMC_TRCD     ((unsigned int) 0xF << 20) /* (SDRAMC) Number of RAS to CAS Delay Cycles */
#define 	AT91C_SDRAMC_TRCD_0                    ((unsigned int) 0x0 << 20) /* (SDRAMC) Value :  0 */
#define 	AT91C_SDRAMC_TRCD_1                    ((unsigned int) 0x1 << 20) /* (SDRAMC) Value :  1 */
#define 	AT91C_SDRAMC_TRCD_2                    ((unsigned int) 0x2 << 20) /* (SDRAMC) Value :  2 */
#define 	AT91C_SDRAMC_TRCD_3                    ((unsigned int) 0x3 << 20) /* (SDRAMC) Value :  3 */
#define 	AT91C_SDRAMC_TRCD_4                    ((unsigned int) 0x4 << 20) /* (SDRAMC) Value :  4 */
#define 	AT91C_SDRAMC_TRCD_5                    ((unsigned int) 0x5 << 20) /* (SDRAMC) Value :  5 */
#define 	AT91C_SDRAMC_TRCD_6                    ((unsigned int) 0x6 << 20) /* (SDRAMC) Value :  6 */
#define 	AT91C_SDRAMC_TRCD_7                    ((unsigned int) 0x7 << 20) /* (SDRAMC) Value :  7 */
#define 	AT91C_SDRAMC_TRCD_8                    ((unsigned int) 0x8 << 20) /* (SDRAMC) Value :  8 */
#define 	AT91C_SDRAMC_TRCD_9                    ((unsigned int) 0x9 << 20) /* (SDRAMC) Value :  9 */
#define 	AT91C_SDRAMC_TRCD_10                   ((unsigned int) 0xA << 20) /* (SDRAMC) Value : 10 */
#define 	AT91C_SDRAMC_TRCD_11                   ((unsigned int) 0xB << 20) /* (SDRAMC) Value : 11 */
#define 	AT91C_SDRAMC_TRCD_12                   ((unsigned int) 0xC << 20) /* (SDRAMC) Value : 12 */
#define 	AT91C_SDRAMC_TRCD_13                   ((unsigned int) 0xD << 20) /* (SDRAMC) Value : 13 */
#define 	AT91C_SDRAMC_TRCD_14                   ((unsigned int) 0xE << 20) /* (SDRAMC) Value : 14 */
#define 	AT91C_SDRAMC_TRCD_15                   ((unsigned int) 0xF << 20) /* (SDRAMC) Value : 15 */
#define AT91C_SDRAMC_TRAS     ((unsigned int) 0xF << 24) /* (SDRAMC) Number of RAS Active Time Cycles */
#define 	AT91C_SDRAMC_TRAS_0                    ((unsigned int) 0x0 << 24) /* (SDRAMC) Value :  0 */
#define 	AT91C_SDRAMC_TRAS_1                    ((unsigned int) 0x1 << 24) /* (SDRAMC) Value :  1 */
#define 	AT91C_SDRAMC_TRAS_2                    ((unsigned int) 0x2 << 24) /* (SDRAMC) Value :  2 */
#define 	AT91C_SDRAMC_TRAS_3                    ((unsigned int) 0x3 << 24) /* (SDRAMC) Value :  3 */
#define 	AT91C_SDRAMC_TRAS_4                    ((unsigned int) 0x4 << 24) /* (SDRAMC) Value :  4 */
#define 	AT91C_SDRAMC_TRAS_5                    ((unsigned int) 0x5 << 24) /* (SDRAMC) Value :  5 */
#define 	AT91C_SDRAMC_TRAS_6                    ((unsigned int) 0x6 << 24) /* (SDRAMC) Value :  6 */
#define 	AT91C_SDRAMC_TRAS_7                    ((unsigned int) 0x7 << 24) /* (SDRAMC) Value :  7 */
#define 	AT91C_SDRAMC_TRAS_8                    ((unsigned int) 0x8 << 24) /* (SDRAMC) Value :  8 */
#define 	AT91C_SDRAMC_TRAS_9                    ((unsigned int) 0x9 << 24) /* (SDRAMC) Value :  9 */
#define 	AT91C_SDRAMC_TRAS_10                   ((unsigned int) 0xA << 24) /* (SDRAMC) Value : 10 */
#define 	AT91C_SDRAMC_TRAS_11                   ((unsigned int) 0xB << 24) /* (SDRAMC) Value : 11 */
#define 	AT91C_SDRAMC_TRAS_12                   ((unsigned int) 0xC << 24) /* (SDRAMC) Value : 12 */
#define 	AT91C_SDRAMC_TRAS_13                   ((unsigned int) 0xD << 24) /* (SDRAMC) Value : 13 */
#define 	AT91C_SDRAMC_TRAS_14                   ((unsigned int) 0xE << 24) /* (SDRAMC) Value : 14 */
#define 	AT91C_SDRAMC_TRAS_15                   ((unsigned int) 0xF << 24) /* (SDRAMC) Value : 15 */
#define AT91C_SDRAMC_TXSR     ((unsigned int) 0xF << 28) /* (SDRAMC) Number of Command Recovery Time Cycles */
#define 	AT91C_SDRAMC_TXSR_0                    ((unsigned int) 0x0 << 28) /* (SDRAMC) Value :  0 */
#define 	AT91C_SDRAMC_TXSR_1                    ((unsigned int) 0x1 << 28) /* (SDRAMC) Value :  1 */
#define 	AT91C_SDRAMC_TXSR_2                    ((unsigned int) 0x2 << 28) /* (SDRAMC) Value :  2 */
#define 	AT91C_SDRAMC_TXSR_3                    ((unsigned int) 0x3 << 28) /* (SDRAMC) Value :  3 */
#define 	AT91C_SDRAMC_TXSR_4                    ((unsigned int) 0x4 << 28) /* (SDRAMC) Value :  4 */
#define 	AT91C_SDRAMC_TXSR_5                    ((unsigned int) 0x5 << 28) /* (SDRAMC) Value :  5 */
#define 	AT91C_SDRAMC_TXSR_6                    ((unsigned int) 0x6 << 28) /* (SDRAMC) Value :  6 */
#define 	AT91C_SDRAMC_TXSR_7                    ((unsigned int) 0x7 << 28) /* (SDRAMC) Value :  7 */
#define 	AT91C_SDRAMC_TXSR_8                    ((unsigned int) 0x8 << 28) /* (SDRAMC) Value :  8 */
#define 	AT91C_SDRAMC_TXSR_9                    ((unsigned int) 0x9 << 28) /* (SDRAMC) Value :  9 */
#define 	AT91C_SDRAMC_TXSR_10                   ((unsigned int) 0xA << 28) /* (SDRAMC) Value : 10 */
#define 	AT91C_SDRAMC_TXSR_11                   ((unsigned int) 0xB << 28) /* (SDRAMC) Value : 11 */
#define 	AT91C_SDRAMC_TXSR_12                   ((unsigned int) 0xC << 28) /* (SDRAMC) Value : 12 */
#define 	AT91C_SDRAMC_TXSR_13                   ((unsigned int) 0xD << 28) /* (SDRAMC) Value : 13 */
#define 	AT91C_SDRAMC_TXSR_14                   ((unsigned int) 0xE << 28) /* (SDRAMC) Value : 14 */
#define 	AT91C_SDRAMC_TXSR_15                   ((unsigned int) 0xF << 28) /* (SDRAMC) Value : 15 */
/* -------- SDRAMC_HSR : (SDRAMC Offset: 0xc) SDRAM Controller High Speed Register --------  */
#define AT91C_SDRAMC_DA       ((unsigned int) 0x1 <<  0) /* (SDRAMC) Decode Cycle Enable Bit */
#define 	AT91C_SDRAMC_DA_DISABLE              ((unsigned int) 0x0) /* (SDRAMC) Disable Decode Cycle */
#define 	AT91C_SDRAMC_DA_ENABLE               ((unsigned int) 0x1) /* (SDRAMC) Enable Decode Cycle */
/* -------- SDRAMC_LPR : (SDRAMC Offset: 0x10) SDRAM Controller Low-power Register --------  */
#define AT91C_SDRAMC_LPCB     ((unsigned int) 0x3 <<  0) /* (SDRAMC) Low-power Configurations */
#define 	AT91C_SDRAMC_LPCB_DISABLE              ((unsigned int) 0x0) /* (SDRAMC) Disable Low Power Features */
#define 	AT91C_SDRAMC_LPCB_SELF_REFRESH         ((unsigned int) 0x1) /* (SDRAMC) Enable SELF_REFRESH */
#define 	AT91C_SDRAMC_LPCB_POWER_DOWN           ((unsigned int) 0x2) /* (SDRAMC) Enable POWER_DOWN */
#define 	AT91C_SDRAMC_LPCB_DEEP_POWER_DOWN      ((unsigned int) 0x3) /* (SDRAMC) Enable DEEP_POWER_DOWN */
#define AT91C_SDRAMC_PASR     ((unsigned int) 0x7 <<  4) /* (SDRAMC) Partial Array Self Refresh (only for Low Power SDRAM) */
#define AT91C_SDRAMC_TCSR     ((unsigned int) 0x3 <<  8) /* (SDRAMC) Temperature Compensated Self Refresh (only for Low Power SDRAM) */
#define AT91C_SDRAMC_DS       ((unsigned int) 0x3 << 10) /* (SDRAMC) Drive Strenght (only for Low Power SDRAM) */
#define AT91C_SDRAMC_TIMEOUT  ((unsigned int) 0x3 << 12) /* (SDRAMC) Time to define when Low Power Mode is enabled */
#define 	AT91C_SDRAMC_TIMEOUT_0_CLK_CYCLES         ((unsigned int) 0x0 << 12) /* (SDRAMC) Activate SDRAM Low Power Mode Immediately */
#define 	AT91C_SDRAMC_TIMEOUT_64_CLK_CYCLES        ((unsigned int) 0x1 << 12) /* (SDRAMC) Activate SDRAM Low Power Mode after 64 clock cycles after the end of the last transfer */
#define 	AT91C_SDRAMC_TIMEOUT_128_CLK_CYCLES       ((unsigned int) 0x2 << 12) /* (SDRAMC) Activate SDRAM Low Power Mode after 64 clock cycles after the end of the last transfer */
/* -------- SDRAMC_IER : (SDRAMC Offset: 0x14) SDRAM Controller Interrupt Enable Register --------  */
#define AT91C_SDRAMC_RES      ((unsigned int) 0x1 <<  0) /* (SDRAMC) Refresh Error Status */
/* -------- SDRAMC_IDR : (SDRAMC Offset: 0x18) SDRAM Controller Interrupt Disable Register --------  */
/* -------- SDRAMC_IMR : (SDRAMC Offset: 0x1c) SDRAM Controller Interrupt Mask Register --------  */
/* -------- SDRAMC_ISR : (SDRAMC Offset: 0x20) SDRAM Controller Interrupt Status Register --------  */
/* -------- SDRAMC_MDR : (SDRAMC Offset: 0x24) SDRAM Controller Memory Device Register --------  */
#define AT91C_SDRAMC_MD       ((unsigned int) 0x3 <<  0) /* (SDRAMC) Memory Device Type */
#define 	AT91C_SDRAMC_MD_SDRAM                ((unsigned int) 0x0) /* (SDRAMC) SDRAM Mode */
#define 	AT91C_SDRAMC_MD_LOW_POWER_SDRAM      ((unsigned int) 0x1) /* (SDRAMC) SDRAM Low Power Mode */



/* ========== Register definition for SDRAMC peripheral ==========  */
#define AT91C_SDRAMC_ISR ((AT91_REG *) 	0xFFFFEA20) /* (SDRAMC) SDRAM Controller Interrupt Mask Register */
#define AT91C_SDRAMC_IDR ((AT91_REG *) 	0xFFFFEA18) /* (SDRAMC) SDRAM Controller Interrupt Disable Register */
#define AT91C_SDRAMC_MR ((AT91_REG *) 	0xFFFFEA00) /* (SDRAMC) SDRAM Controller Mode Register */
#define AT91C_SDRAMC_CR ((AT91_REG *) 	0xFFFFEA08) /* (SDRAMC) SDRAM Controller Configuration Register */
#define AT91C_SDRAMC_LPR ((AT91_REG *) 	0xFFFFEA10) /* (SDRAMC) SDRAM Controller Low Power Register */
#define AT91C_SDRAMC_MDR ((AT91_REG *) 	0xFFFFEA24) /* (SDRAMC) SDRAM Memory Device Register */
#define AT91C_SDRAMC_TR ((AT91_REG *) 	0xFFFFEA04) /* (SDRAMC) SDRAM Controller Refresh Timer Register */
#define AT91C_SDRAMC_HSR ((AT91_REG *) 	0xFFFFEA0C) /* (SDRAMC) SDRAM Controller High Speed Register */
#define AT91C_SDRAMC_IER ((AT91_REG *) 	0xFFFFEA14) /* (SDRAMC) SDRAM Controller Interrupt Enable Register */
#define AT91C_SDRAMC_IMR ((AT91_REG *) 	0xFFFFEA1C) /* (SDRAMC) SDRAM Controller Interrupt Mask Register */
#endif
