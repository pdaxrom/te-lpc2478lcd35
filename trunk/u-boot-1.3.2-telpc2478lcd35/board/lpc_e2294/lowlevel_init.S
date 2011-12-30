/*
 * (C) Copyright 2006 Embedded Artists AB <www.embeddedartists.com>
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

#include <config.h>
#include <version.h>
#include <asm/arch/hardware.h>

/* some parameters for the board */
/* setting up the memory */
#define 	SRAM_START 	0x40000000
#define 	SRAM_SIZE	0x00004000
/*#define   BCFG0_VALUE 0x1000ffef
#define   BCFG1_VALUE 0x10001C61*/

#define	IDCY_1							0x0
#define	IDCY_2							0x1
#define	IDCY_3							0x2
#define	IDCY_4							0x3
#define	IDCY_5							0x4
#define	IDCY_6							0x5
#define	IDCY_7							0x6
#define	IDCY_8							0x7
#define	IDCY_9							0x8
#define	IDCY_10							0x9
#define	IDCY_11							0xa
#define	IDCY_12							0xb
#define	IDCY_13							0xc
#define	IDCY_14							0xd
#define	IDCY_15							0xe
#define	IDCY_16							0xf

#define	WST1_OFFSET					5
#define	WST1_3							(0x0	<<	(WST1_OFFSET))
#define	WST1_4							(0x1	<<	(WST1_OFFSET))
#define	WST1_5							(0x2	<<	(WST1_OFFSET))
#define	WST1_6							(0x3	<<	(WST1_OFFSET))
#define	WST1_7							(0x4	<<	(WST1_OFFSET))
#define	WST1_8							(0x5	<<	(WST1_OFFSET))
#define	WST1_9							(0x6	<<	(WST1_OFFSET))
#define	WST1_10							(0x7	<<	(WST1_OFFSET))
#define	WST1_11							(0x8	<<	(WST1_OFFSET))
#define	WST1_12							(0x9	<<	(WST1_OFFSET))
#define	WST1_13							(0xa	<<	(WST1_OFFSET))
#define	WST1_14							(0xb	<<	(WST1_OFFSET))
#define	WST1_15							(0xc	<<	(WST1_OFFSET))
#define	WST1_16							(0xd	<<	(WST1_OFFSET))
#define	WST1_17							(0xe	<<	(WST1_OFFSET))
#define	WST1_18							(0xf	<<	(WST1_OFFSET))
#define	WST1_19							(0x10	<<	(WST1_OFFSET))
#define	WST1_20							(0x11	<<	(WST1_OFFSET))
#define	WST1_21							(0x12	<<	(WST1_OFFSET))
#define	WST1_22							(0x13	<<	(WST1_OFFSET))
#define	WST1_23							(0x14	<<	(WST1_OFFSET))
#define	WST1_24							(0x15	<<	(WST1_OFFSET))
#define	WST1_25							(0x16	<<	(WST1_OFFSET))
#define	WST1_26							(0x17	<<	(WST1_OFFSET))
#define	WST1_27							(0x18	<<	(WST1_OFFSET))
#define	WST1_28							(0x19	<<	(WST1_OFFSET))
#define	WST1_29							(0x1a	<<	(WST1_OFFSET))
#define	WST1_30							(0x1b	<<	(WST1_OFFSET))
#define	WST1_31							(0x1c	<<	(WST1_OFFSET))
#define	WST1_32							(0x1d	<<	(WST1_OFFSET))
#define	WST1_33							(0x1e	<<	(WST1_OFFSET))
#define	WST1_34							(0x1f	<<	(WST1_OFFSET))
	
#define	RBLE								1<<10
	
#define	WST2_OFFSET					11
#define	WST2_3							(0x0	<<	(WST2_OFFSET))
#define	WST2_4							(0x1	<<	(WST2_OFFSET))
#define	WST2_5							(0x2	<<	(WST2_OFFSET))
#define	WST2_6							(0x3	<<	(WST2_OFFSET))
#define	WST2_7							(0x4	<<	(WST2_OFFSET))
#define	WST2_8							(0x5	<<	(WST2_OFFSET))
#define	WST2_9							(0x6	<<	(WST2_OFFSET))
#define	WST2_10							(0x7	<<	(WST2_OFFSET))
#define	WST2_11							(0x8	<<	(WST2_OFFSET))
#define	WST2_12							(0x9	<<	(WST2_OFFSET))
#define	WST2_13							(0xa	<<	(WST2_OFFSET))
#define	WST2_14							(0xb	<<	(WST2_OFFSET))
#define	WST2_15							(0xc	<<	(WST2_OFFSET))
#define	WST2_16							(0xd	<<	(WST2_OFFSET))
#define	WST2_17							(0xe	<<	(WST2_OFFSET))
#define	WST2_18							(0xf	<<	(WST2_OFFSET))
#define	WST2_19							(0x10	<<	(WST2_OFFSET))
#define	WST2_20							(0x11	<<	(WST2_OFFSET))
#define	WST2_21							(0x12	<<	(WST2_OFFSET))
#define	WST2_22							(0x13	<<	(WST2_OFFSET))
#define	WST2_23							(0x14	<<	(WST2_OFFSET))
#define	WST2_24							(0x15	<<	(WST2_OFFSET))
#define	WST2_25							(0x16	<<	(WST2_OFFSET))
#define	WST2_26							(0x17	<<	(WST2_OFFSET))
#define	WST2_27							(0x18	<<	(WST2_OFFSET))
#define	WST2_28							(0x19	<<	(WST2_OFFSET))
#define	WST2_29							(0x1a	<<	(WST2_OFFSET))
#define	WST2_30							(0x1b	<<	(WST2_OFFSET))
#define	WST2_31							(0x1c	<<	(WST2_OFFSET))
#define	WST2_32							(0x1d	<<	(WST2_OFFSET))
#define	WST2_33							(0x1e	<<	(WST2_OFFSET))
#define	WST2_34							(0x1f	<<	(WST2_OFFSET))

#define	BUSERR							1<<24
#define	WPERR								1<<25
#define WP									1<<26
#define	BM									1<<27

#define	MW_8BIT							0<<28
#define	MW_16BIT						1<<28
#define	MW_32BIT						2<<28


#define	BCFG0_VALUE			(MW_16BIT | WST2_9 | RBLE | WST1_11 | IDCY_16)	// Flash
#define	BCFG1_VALUE			(MW_32BIT | WST2_10 | RBLE | WST1_10 | IDCY_16)	// Ram 
#define	BCFG2_VALUE			(MW_32BIT | WST2_16 | RBLE | WST1_16 | IDCY_16) // Lan

_TEXT_BASE:
	.word	TEXT_BASE
MEMMAP_ADR:
	.word	MEMMAP
BCFG0_ADR:
  .word BCFG0
_BCFG0_VALUE:
  .word BCFG0_VALUE
BCFG1_ADR:
	.word	BCFG1
_BCFG1_VALUE:
	.word	BCFG1_VALUE
BCFG2_ADR:
	.word	BCFG2
_BCFG2_VALUE:
	.word	BCFG2_VALUE
PINSEL2_ADR:
	.word	PINSEL2
PINSEL2_MASK:
	.word	0x00000000
/*PINSEL2_VALUE:
	.word	0x0F800924*/
PINSEL2_VALUE:
	.word	0x0F004924

.extern _start

.globl lowlevel_init
lowlevel_init:
	/* set up memory control register for bank 0 */
	ldr r0, _BCFG0_VALUE
	ldr r1, BCFG0_ADR
	str r0, [r1]

	/* set up memory control register for bank 1 */
	ldr	r0, _BCFG1_VALUE
	ldr	r1, BCFG1_ADR
	str	r0, [r1]
	
	/* set up memory control register for bank 2 */
	ldr	r0, _BCFG2_VALUE
	ldr	r1, BCFG2_ADR
	str	r0, [r1]

	/* set up PINSEL2 for bus-pins */
	ldr	r0, PINSEL2_ADR
	ldr	r1, [r0]
	ldr	r2, PINSEL2_MASK
	ldr	r3, PINSEL2_VALUE
	and	r1, r1, r2
	orr	r1, r1, r3
	str	r1, [r0]

	/* move vectors to beginning of SRAM */
	mov	r2, #SRAM_START
	mov	r0, #0 /*_start*/
	ldmneia r0!, {r3-r10}
	stmneia r2!, {r3-r10}
	ldmneia r0, {r3-r9}
	stmneia r2, {r3-r9}

	/* Set-up MEMMAP register, so vectors are taken from SRAM */
	ldr	r0, MEMMAP_ADR
	mov	r1, #0x02	/* vectors re-mapped to static RAM */
	str	r1, [r0]

	/* everything is fine now */
	mov	pc, lr
