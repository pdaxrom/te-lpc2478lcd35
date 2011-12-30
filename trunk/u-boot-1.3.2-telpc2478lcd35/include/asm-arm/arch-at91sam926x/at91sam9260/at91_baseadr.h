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

#ifndef AT91SAM9260_AT91_BASEADR_H
#define AT91SAM9260_AT91_BASEADR_H

/* ***************************************************************************** */
/*               BASE ADDRESS DEFINITIONS FOR AT91SAM9260 */
/* ***************************************************************************** */
#define AT91C_BASE_SYS       ((AT91PS_SYS) 	0xFFFFFD00) /* (SYS) Base Address */
#define AT91C_BASE_EBI       ((AT91PS_EBI) 	0xFFFFEA00) /* (EBI) Base Address */
#define AT91C_BASE_HECC      ((AT91PS_ECC) 	0xFFFFE800) /* (HECC) Base Address */
#define AT91C_BASE_SDRAMC    ((AT91PS_SDRAMC) 	0xFFFFEA00) /* (SDRAMC) Base Address */
#define AT91C_BASE_SMC       ((AT91PS_SMC) 	0xFFFFEC00) /* (SMC) Base Address */
#define AT91C_BASE_MATRIX    ((AT91PS_MATRIX) 	0xFFFFEE00) /* (MATRIX) Base Address */
#define AT91C_BASE_CCFG      ((AT91PS_CCFG) 	0xFFFFEF10) /* (CCFG) Base Address */
#define AT91C_BASE_PDC_DBGU  ((AT91PS_PDC) 	0xFFFFF300) /* (PDC_DBGU) Base Address */
#define AT91C_BASE_DBGU      ((AT91PS_DBGU) 	0xFFFFF200) /* (DBGU) Base Address */
#define AT91C_BASE_AIC       ((AT91PS_AIC) 	0xFFFFF000) /* (AIC) Base Address */
#define AT91C_BASE_PIOA      ((AT91PS_PIO) 	0xFFFFF400) /* (PIOA) Base Address */
#define AT91C_BASE_PIOB      ((AT91PS_PIO) 	0xFFFFF600) /* (PIOB) Base Address */
#define AT91C_BASE_PIOC      ((AT91PS_PIO) 	0xFFFFF800) /* (PIOC) Base Address */
#define AT91C_BASE_CKGR      ((AT91PS_CKGR) 	0xFFFFFC20) /* (CKGR) Base Address */
#define AT91C_BASE_PMC       ((AT91PS_PMC) 	0xFFFFFC00) /* (PMC) Base Address */
#define AT91C_BASE_RSTC      ((AT91PS_RSTC) 	0xFFFFFD00) /* (RSTC) Base Address */
#define AT91C_BASE_SHDWC     ((AT91PS_SHDWC) 	0xFFFFFD10) /* (SHDWC) Base Address */
#define AT91C_BASE_RTTC      ((AT91PS_RTTC) 	0xFFFFFD20) /* (RTTC) Base Address */
#define AT91C_BASE_PITC      ((AT91PS_PITC) 	0xFFFFFD30) /* (PITC) Base Address */
#define AT91C_BASE_WDTC      ((AT91PS_WDTC) 	0xFFFFFD40) /* (WDTC) Base Address */
#define AT91C_BASE_TC0       ((AT91PS_TC) 	0xFFFA0000) /* (TC0) Base Address */
#define AT91C_BASE_TC1       ((AT91PS_TC) 	0xFFFA0040) /* (TC1) Base Address */
#define AT91C_BASE_TC2       ((AT91PS_TC) 	0xFFFA0080) /* (TC2) Base Address */
#define AT91C_BASE_TC3       ((AT91PS_TC) 	0xFFFDC000) /* (TC3) Base Address */
#define AT91C_BASE_TC4       ((AT91PS_TC) 	0xFFFDC040) /* (TC4) Base Address */
#define AT91C_BASE_TC5       ((AT91PS_TC) 	0xFFFDC080) /* (TC5) Base Address */
#define AT91C_BASE_TCB0      ((AT91PS_TCB) 	0xFFFA0000) /* (TCB0) Base Address */
#define AT91C_BASE_TCB1      ((AT91PS_TCB) 	0xFFFDC000) /* (TCB1) Base Address */
#define AT91C_BASE_PDC_MCI   ((AT91PS_PDC) 	0xFFFA8100) /* (PDC_MCI) Base Address */
#define AT91C_BASE_MCI       ((AT91PS_MCI) 	0xFFFA8000) /* (MCI) Base Address */
#define AT91C_BASE_PDC_TWI   ((AT91PS_PDC) 	0xFFFAC100) /* (PDC_TWI) Base Address */
#define AT91C_BASE_TWI       ((AT91PS_TWI) 	0xFFFAC000) /* (TWI) Base Address */
#define AT91C_BASE_PDC_US0   ((AT91PS_PDC) 	0xFFFB0100) /* (PDC_US0) Base Address */
#define AT91C_BASE_US0       ((AT91PS_USART) 	0xFFFB0000) /* (US0) Base Address */
#define AT91C_BASE_PDC_US1   ((AT91PS_PDC) 	0xFFFB4100) /* (PDC_US1) Base Address */
#define AT91C_BASE_US1       ((AT91PS_USART) 	0xFFFB4000) /* (US1) Base Address */
#define AT91C_BASE_PDC_US2   ((AT91PS_PDC) 	0xFFFB8100) /* (PDC_US2) Base Address */
#define AT91C_BASE_US2       ((AT91PS_USART) 	0xFFFB8000) /* (US2) Base Address */
#define AT91C_BASE_PDC_US3   ((AT91PS_PDC) 	0xFFFD0100) /* (PDC_US3) Base Address */
#define AT91C_BASE_US3       ((AT91PS_USART) 	0xFFFD0000) /* (US3) Base Address */
#define AT91C_BASE_PDC_US4   ((AT91PS_PDC) 	0xFFFD4100) /* (PDC_US4) Base Address */
#define AT91C_BASE_US4       ((AT91PS_USART) 	0xFFFD4000) /* (US4) Base Address */
#define AT91C_BASE_PDC_US5   ((AT91PS_PDC) 	0xFFFD8100) /* (PDC_US5) Base Address */
#define AT91C_BASE_US5       ((AT91PS_USART) 	0xFFFD8000) /* (US5) Base Address */
#define AT91C_BASE_PDC_SSC0  ((AT91PS_PDC) 	0xFFFBC100) /* (PDC_SSC0) Base Address */
#define AT91C_BASE_SSC0      ((AT91PS_SSC) 	0xFFFBC000) /* (SSC0) Base Address */
#define AT91C_BASE_PDC_SPI0  ((AT91PS_PDC) 	0xFFFC8100) /* (PDC_SPI0) Base Address */
#define AT91C_BASE_SPI0      ((AT91PS_SPI) 	0xFFFC8000) /* (SPI0) Base Address */
#define AT91C_BASE_PDC_SPI1  ((AT91PS_PDC) 	0xFFFCC100) /* (PDC_SPI1) Base Address */
#define AT91C_BASE_SPI1      ((AT91PS_SPI) 	0xFFFCC000) /* (SPI1) Base Address */
#define AT91C_BASE_PDC_ADC   ((AT91PS_PDC) 	0xFFFE0100) /* (PDC_ADC) Base Address */
#define AT91C_BASE_ADC       ((AT91PS_ADC) 	0xFFFE0000) /* (ADC) Base Address */
#define AT91C_BASE_EMACB     ((AT91PS_EMAC) 	0xFFFC4000) /* (EMACB) Base Address */
#define AT91C_BASE_UDP       ((AT91PS_UDP) 	0xFFFA4000) /* (UDP) Base Address */
#define AT91C_BASE_UHP       ((AT91PS_UHP) 	0x00500000) /* (UHP) Base Address */
#define AT91C_BASE_HISI      ((AT91PS_ISI) 	0xFFFC0000) /* (HISI) Base Address */


#endif
