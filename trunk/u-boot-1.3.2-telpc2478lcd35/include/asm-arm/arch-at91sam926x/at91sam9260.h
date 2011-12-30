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

#ifndef AT91SAM9260_H
#define AT91SAM9260_H

typedef volatile unsigned int AT91_REG;/* Hardware register definition */

#include <asm/arch/at91sam9260/at91_ahb_matrix.h>
#include <asm/arch/at91sam9260/at91_aic.h>
#include <asm/arch/at91sam9260/at91_dbgu.h>
#include <asm/arch/at91sam9260/at91_ecc.h>
#include <asm/arch/at91sam9260/at91_macb.h>
#include <asm/arch/at91sam9260/at91_pdc.h>
#include <asm/arch/at91sam9260/at91_pio.h>
#include <asm/arch/at91sam9260/at91_sdramc.h>
#include <asm/arch/at91sam9260/at91_smc.h>
#include <asm/arch/at91sam9260/at91_pio.h>
#include <asm/arch/at91sam9260/at91_spi.h>
#include <asm/arch/at91sam9260/at91_sys.h>
#include <asm/arch/at91sam9260/at91_sysman.h>
#include <asm/arch/at91sam9260/at91_timer.h>

#include <asm/arch/at91sam9260/at91_udp.h>
#include <asm/arch/at91sam9260/at91_uhp.h>
#include <asm/arch/at91sam9260/at91_usart.h>

#include <asm/arch/at91sam9260/at91_pid.h>
#include <asm/arch/at91sam9260/at91_baseadr.h>
#include <asm/arch/at91sam9260/at91_memory_map.h>

#endif
