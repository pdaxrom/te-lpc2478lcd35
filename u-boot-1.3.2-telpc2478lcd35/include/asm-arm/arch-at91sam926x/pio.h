/*
 * (C) Copyright 2005
 * M Amine SAYA ATEML Rousset, France.
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


#ifndef __ASM_ARCH_PIO_H
#define __ASM_ARCH_PIO_H
void AT91F_PIO_CfgPeriph(
	AT91PS_PIO pPio,             
	unsigned int periphAEnable,  
	unsigned int periphBEnable);
void AT91F_PIO_CfgOutput(
	AT91PS_PIO pPio,
	unsigned int pioEnable);
void AT91F_PIO_CfgInput(
	AT91PS_PIO pPio,             
	unsigned int inputEnable);
unsigned int AT91F_PIO_GetInput(AT91PS_PIO pPio);
void AT91F_PIO_SetOutput(
	AT91PS_PIO pPio,
	unsigned int flag);
void AT91F_PIO_ClearOutput(
	AT91PS_PIO pPio,   
	unsigned int flag);
void AT91F_PIO_ForceOutput(
	AT91PS_PIO pPio,   
	unsigned int flag);
void AT91F_PIO_Enable(
        AT91PS_PIO pPio,
        unsigned int flag);
void AT91F_PIO_Disable(
        AT91PS_PIO pPio,
        unsigned int flag);
unsigned int AT91F_PIO_GetStatus(AT91PS_PIO pPio);
void AT91F_PIO_OutputEnable(
        AT91PS_PIO pPio,
        unsigned int flag);
void AT91F_PIO_OutputDisable(
        AT91PS_PIO pPio,
        unsigned int flag);
unsigned int AT91F_PIO_GetOutputStatus(AT91PS_PIO pPio);
void AT91F_PIO_CfgPullup(
	AT91PS_PIO pPio,
	unsigned int pullupEnable);
#ifdef CONFIG_AT91SAM9261EK
void AT91F_LCDC_TFT_CfgPIO (void);
#endif

#ifdef CONFIG_AT91SAM9263EK
void AT91F_PIOC_CfgPMC(void);
void AT91F_EMAC_CfgPIO(void);
void AT91F_LCDC_TFT_CfgPIO (void);
#endif
#endif
