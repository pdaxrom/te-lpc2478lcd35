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

#ifndef AT91SAM9260_AT91_MEMORY_MAP_H
#define AT91SAM9260_AT91_MEMORY_MAP_H

/* ***************************************************************************** */
/*               MEMORY MAPPING DEFINITIONS FOR AT91SAM9260 */
/* ***************************************************************************** */
/* IROM */
#define AT91C_IROM 	 ((char *) 	0x00100000) /* Internal ROM base address */
#define AT91C_IROM_SIZE	 ((unsigned int) 0x00008000) /* Internal ROM size in byte (32 Kbytes) */
/* IRAM_1 */
#define AT91C_IRAM_1	 ((char *) 	0x00200000) /* Maximum IRAM_1 Area : 4Kbyte base address */
#define AT91C_IRAM_1_SIZE	 ((unsigned int) 0x00001000) /* Maximum IRAM_1 Area : 4Kbyte size in byte (4 Kbytes) */
/* IRAM_2 */
#define AT91C_IRAM_2	 ((char *) 	0x00300000) /* Maximum IRAM_2 AREA : 4 Kbyte base address */
#define AT91C_IRAM_2_SIZE	 ((unsigned int) 0x00001000) /* Maximum IRAM_2 AREA : 4 Kbyte size in byte (4 Kbytes) */
/* EBI_CS0 */
#define AT91C_EBI_CS0	 ((char *) 	0x10000000) /* EBI Chip Select 0 base address */
#define AT91C_EBI_CS0_SIZE	 ((unsigned int) 0x10000000) /* EBI Chip Select 0 size in byte (262144 Kbytes) */
/* EBI_CS1 */
#define AT91C_EBI_CS1	 ((char *) 	0x20000000) /* EBI Chip Select 1 base address */
#define AT91C_EBI_CS1_SIZE	 ((unsigned int) 0x10000000) /* EBI Chip Select 1 size in byte (262144 Kbytes) */
/* EBI_SDRAM */
#define AT91C_EBI_SDRAM	 ((char *) 	0x20000000) /* SDRAM on EBI Chip Select 1 base address */
#define AT91C_EBI_SDRAM_SIZE	 ((unsigned int) 0x10000000) /* SDRAM on EBI Chip Select 1 size in byte (262144 Kbytes) */
/* EBI_SDRAM_16BIT */
#define AT91C_EBI_SDRAM_16BIT	 ((char *) 	0x20000000) /* SDRAM on EBI Chip Select 1 base address */
#define AT91C_EBI_SDRAM_16BIT_SIZE	 ((unsigned int) 0x02000000) /* SDRAM on EBI Chip Select 1 size in byte (32768 Kbytes) */
/* EBI_SDRAM_32BIT */
#define AT91C_EBI_SDRAM_32BIT	 ((char *) 	0x20000000) /* SDRAM on EBI Chip Select 1 base address */
#define AT91C_EBI_SDRAM_32BIT_SIZE	 ((unsigned int) 0x04000000) /* SDRAM on EBI Chip Select 1 size in byte (65536 Kbytes) */
/* EBI_CS2 */
#define AT91C_EBI_CS2	 ((char *) 	0x30000000) /* EBI Chip Select 2 base address */
#define AT91C_EBI_CS2_SIZE	 ((unsigned int) 0x10000000) /* EBI Chip Select 2 size in byte (262144 Kbytes) */
/* EBI_CS3 */
#define AT91C_EBI_CS3	 ((char *) 	0x40000000) /* EBI Chip Select 3 base address */
#define AT91C_EBI_CS3_SIZE	 ((unsigned int) 0x10000000) /* EBI Chip Select 3 size in byte (262144 Kbytes) */
/* EBI_SM */
#define AT91C_EBI_SM	 ((char *) 	0x40000000) /* SmartMedia on Chip Select 3 base address */
#define AT91C_EBI_SM_SIZE	 ((unsigned int) 0x10000000) /* SmartMedia on Chip Select 3 size in byte (262144 Kbytes) */
/* EBI_CS4 */
#define AT91C_EBI_CS4	 ((char *) 	0x50000000) /* EBI Chip Select 4 base address */
#define AT91C_EBI_CS4_SIZE	 ((unsigned int) 0x10000000) /* EBI Chip Select 4 size in byte (262144 Kbytes) */
/* EBI_CF0 */
#define AT91C_EBI_CF0	 ((char *) 	0x50000000) /* CompactFlash 0 on Chip Select 4 base address */
#define AT91C_EBI_CF0_SIZE	 ((unsigned int) 0x10000000) /* CompactFlash 0 on Chip Select 4 size in byte (262144 Kbytes) */
/* EBI_CS5 */
#define AT91C_EBI_CS5	 ((char *) 	0x60000000) /* EBI Chip Select 5 base address */
#define AT91C_EBI_CS5_SIZE	 ((unsigned int) 0x10000000) /* EBI Chip Select 5 size in byte (262144 Kbytes) */
/* EBI_CF1 */
#define AT91C_EBI_CF1	 ((char *) 	0x60000000) /* CompactFlash 1 on Chip Select 5 base address */
#define AT91C_EBI_CF1_SIZE	 ((unsigned int) 0x10000000) /* CompactFlash 1 on Chip Select 5 size in byte (262144 Kbytes) */
/* EBI_CS6 */
#define AT91C_EBI_CS6	 ((char *) 	0x70000000) /* EBI Chip Select 6 base address */
#define AT91C_EBI_CS6_SIZE	 ((unsigned int) 0x10000000) /* EBI Chip Select 6 size in byte (262144 Kbytes) */
/* EBI_CS7 */
#define AT91C_EBI_CS7	 ((char *) 	0x80000000) /* EBI Chip Select 7 base address */
#define AT91C_EBI_CS7_SIZE	 ((unsigned int) 0x10000000) /* EBI Chip Select 7 size in byte (262144 Kbytes) */

#endif
