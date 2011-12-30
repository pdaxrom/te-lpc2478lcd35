/*
 * Copyright (C) 2005-2006 Atmel Corporation
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
#ifndef __ASM_ARCH_AT91RM9200_PART_MEMORY_MAP_H__
#define __ASM_ARCH_AT91RM9200_PART_MEMORY_MAP_H__

#define	AIC_BASE				0xFFFFF000
#define	DBGU_BASE				0xFFFFF200
#define PIOA_BASE				0xFFFFF400
#define PIOB_BASE				0xFFFFF600
#define PIOC_BASE				0xFFFFF800
#define PIOD_BASE				0xFFFFFA00
#define	PMC_BASE				0xFFFFFC00
#define	ST_BASE					0xFFFFFD00
#define	RTC_BASE				0xFFFFFE00
#define	MC_BASE					0xFFFFFF00
#define EBI_BASE				0xFFFFFF60
#define	SMC_BASE				0xFFFFFF70
#define	SDRAMC_BASE				0xFFFFFF90
#define BFC_BASE				0xFFFFFFC0
#define TIMER0_BASE				0xFFFA0000
#define TIMER1_BASE				0xFFFA4000
#define UDP_BASE				0xFFFB0000
#define MMCI_BASE				0xFFFB4000
#define TWI_BASE				0xFFFB8000
#define EMAC_BASE				0xFFFBC000
#define USART0_BASE                             0xFFFC0C00
#define USART1_BASE                             0xFFFC4000
#define USART2_BASE                             0xFFFC8000
#define USART3_BASE                             0xFFFCC000
#define SSC0_BASE                               0xFFFD0000
#define SSC1_BASE                               0xFFFD4000
#define SSC2_BASE                               0xFFFD8000
#define SPI0_BASE                               0xFFFE0000
#define MAPPED_SRAM_BASE			0x00000000
#define	ROM_BASE				0x00100000
#define	SRAM_BASE				0x00200000
#define	UHP_BASE				0x00300000

#endif /* __ASM_ARCH_AT91RM9200_PART_MEMORY_MAP_H__ */
