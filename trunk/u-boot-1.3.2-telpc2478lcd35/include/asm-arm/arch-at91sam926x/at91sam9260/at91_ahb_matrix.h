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

#ifndef AT91SAM9260_AT91_AHB_MATRIX_H
#define AT91SAM9260_AT91_AHB_MATRIX_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR AHB Matrix Interface */
/* ***************************************************************************** */
typedef struct _AT91S_MATRIX {
	AT91_REG	 MATRIX_MCFG0; 	/*  Master Configuration Register 0 (ram96k)      */
	AT91_REG	 MATRIX_MCFG1; 	/*  Master Configuration Register 1 (rom)     */
	AT91_REG	 MATRIX_MCFG2; 	/*  Master Configuration Register 2 (hperiphs)  */
	AT91_REG	 MATRIX_MCFG3; 	/*  Master Configuration Register 3 (ebi) */
	AT91_REG	 MATRIX_MCFG4; 	/*  Master Configuration Register 4 (bridge)     */
	AT91_REG	 MATRIX_MCFG5; 	/*  Master Configuration Register 5 (mailbox)     */
	AT91_REG	 MATRIX_MCFG6; 	/*  Master Configuration Register 6 (ram16k)   */
	AT91_REG	 MATRIX_MCFG7; 	/*  Master Configuration Register 7 (teak_prog)      */
	AT91_REG	 Reserved0[8]; 	/*  */
	AT91_REG	 MATRIX_SCFG0; 	/*  Slave Configuration Register 0 (ram96k)      */
	AT91_REG	 MATRIX_SCFG1; 	/*  Slave Configuration Register 1 (rom)     */
	AT91_REG	 MATRIX_SCFG2; 	/*  Slave Configuration Register 2 (hperiphs)  */
	AT91_REG	 MATRIX_SCFG3; 	/*  Slave Configuration Register 3 (ebi) */
	AT91_REG	 MATRIX_SCFG4; 	/*  Slave Configuration Register 4 (bridge)     */
	AT91_REG	 Reserved1[11]; 	/*  */
	AT91_REG	 MATRIX_PRAS0; 	/*  PRAS0 (ram0)  */
	AT91_REG	 MATRIX_PRBS0; 	/*  PRBS0 (ram0)  */
	AT91_REG	 MATRIX_PRAS1; 	/*  PRAS1 (ram1)  */
	AT91_REG	 MATRIX_PRBS1; 	/*  PRBS1 (ram1)  */
	AT91_REG	 MATRIX_PRAS2; 	/*  PRAS2 (ram2)  */
	AT91_REG	 MATRIX_PRBS2; 	/*  PRBS2 (ram2)  */
	AT91_REG	 Reserved2[26]; 	/*  */
	AT91_REG	 MATRIX_MRCR; 	/*  Master Remp Control Register  */
	AT91_REG	 Reserved3[6]; 	/*  */
	AT91_REG	 MATRIX_EBI; 	/*  Slave 3 (ebi) Special Function Register */
	AT91_REG	 Reserved4[3]; 	/*  */
	AT91_REG	 MATRIX_TEAKCFG; 	/*  Slave 7 (teak_prog) Special Function Register */
	AT91_REG	 Reserved5[51]; 	/*  */
	AT91_REG	 MATRIX_VERSION; 	/*  Version Register */
} AT91S_MATRIX, *AT91PS_MATRIX;

/* -------- MATRIX_SCFG0 : (MATRIX Offset: 0x40) Slave Configuration Register 0 --------  */
#define AT91C_MATRIX_SLOT_CYCLE ((unsigned int) 0xFF <<  0) /* (MATRIX) Maximum Number of Allowed Cycles for a Burst */
#define AT91C_MATRIX_DEFMSTR_TYPE ((unsigned int) 0x3 << 16) /* (MATRIX) Default Master Type */
#define 	AT91C_MATRIX_DEFMSTR_TYPE_NO_DEFMSTR           ((unsigned int) 0x0 << 16) /* (MATRIX) No Default Master. At the end of current slave access, if no other master request is pending, the slave is deconnected from all masters. This results in having a one cycle latency for the first transfer of a burst. */
#define 	AT91C_MATRIX_DEFMSTR_TYPE_LAST_DEFMSTR         ((unsigned int) 0x1 << 16) /* (MATRIX) Last Default Master. At the end of current slave access, if no other master request is pending, the slave stay connected with the last master having accessed it. This results in not having the one cycle latency when the last master re-trying access on the slave. */
#define 	AT91C_MATRIX_DEFMSTR_TYPE_FIXED_DEFMSTR        ((unsigned int) 0x2 << 16) /* (MATRIX) Fixed Default Master. At the end of current slave access, if no other master request is pending, the slave connects with fixed which number is in FIXED_DEFMSTR field. This results in not having the one cycle latency when the fixed master re-trying access on the slave. */
#define AT91C_MATRIX_FIXED_DEFMSTR0 ((unsigned int) 0x7 << 18) /* (MATRIX) Fixed Index of Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR0_ARM926I              ((unsigned int) 0x0 << 18) /* (MATRIX) ARM926EJ-S Instruction Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR0_ARM926D              ((unsigned int) 0x1 << 18) /* (MATRIX) ARM926EJ-S Data Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR0_HPDC3                ((unsigned int) 0x2 << 18) /* (MATRIX) HPDC3 Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR0_LCDC                 ((unsigned int) 0x3 << 18) /* (MATRIX) LCDC Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR0_DMA                  ((unsigned int) 0x4 << 18) /* (MATRIX) DMA Master is Default Master */
/* -------- MATRIX_SCFG1 : (MATRIX Offset: 0x44) Slave Configuration Register 1 --------  */
#define AT91C_MATRIX_FIXED_DEFMSTR1 ((unsigned int) 0x7 << 18) /* (MATRIX) Fixed Index of Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR1_ARM926I              ((unsigned int) 0x0 << 18) /* (MATRIX) ARM926EJ-S Instruction Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR1_ARM926D              ((unsigned int) 0x1 << 18) /* (MATRIX) ARM926EJ-S Data Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR1_HPDC3                ((unsigned int) 0x2 << 18) /* (MATRIX) HPDC3 Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR1_LCDC                 ((unsigned int) 0x3 << 18) /* (MATRIX) LCDC Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR1_DMA                  ((unsigned int) 0x4 << 18) /* (MATRIX) DMA Master is Default Master */
/* -------- MATRIX_SCFG2 : (MATRIX Offset: 0x48) Slave Configuration Register 2 --------  */
#define AT91C_MATRIX_FIXED_DEFMSTR2 ((unsigned int) 0x1 << 18) /* (MATRIX) Fixed Index of Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR2_ARM926I              ((unsigned int) 0x0 << 18) /* (MATRIX) ARM926EJ-S Instruction Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR2_ARM926D              ((unsigned int) 0x1 << 18) /* (MATRIX) ARM926EJ-S Data Master is Default Master */
/* -------- MATRIX_SCFG3 : (MATRIX Offset: 0x4c) Slave Configuration Register 3 --------  */
#define AT91C_MATRIX_FIXED_DEFMSTR3 ((unsigned int) 0x7 << 18) /* (MATRIX) Fixed Index of Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR3_ARM926I              ((unsigned int) 0x0 << 18) /* (MATRIX) ARM926EJ-S Instruction Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR3_ARM926D              ((unsigned int) 0x1 << 18) /* (MATRIX) ARM926EJ-S Data Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR3_HPDC3                ((unsigned int) 0x2 << 18) /* (MATRIX) HPDC3 Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR3_LCDC                 ((unsigned int) 0x3 << 18) /* (MATRIX) LCDC Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR3_DMA                  ((unsigned int) 0x4 << 18) /* (MATRIX) DMA Master is Default Master */
/* -------- MATRIX_SCFG4 : (MATRIX Offset: 0x50) Slave Configuration Register 4 --------  */
#define AT91C_MATRIX_FIXED_DEFMSTR4 ((unsigned int) 0x3 << 18) /* (MATRIX) Fixed Index of Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR4_ARM926I              ((unsigned int) 0x0 << 18) /* (MATRIX) ARM926EJ-S Instruction Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR4_ARM926D              ((unsigned int) 0x1 << 18) /* (MATRIX) ARM926EJ-S Data Master is Default Master */
#define 	AT91C_MATRIX_FIXED_DEFMSTR4_HPDC3                ((unsigned int) 0x2 << 18) /* (MATRIX) HPDC3 Master is Default Master */
/* -------- MATRIX_MRCR : (MATRIX Offset: 0x100) MRCR Register --------  */
#define AT91C_MATRIX_RCA926I  ((unsigned int) 0x1 <<  0) /* (MATRIX) Remap Command for ARM926EJ-S Instruction Master */
#define AT91C_MATRIX_RCA926D  ((unsigned int) 0x1 <<  1) /* (MATRIX) Remap Command for ARM926EJ-S Data Master */
/* -------- MATRIX_EBI : (MATRIX Offset: 0x11c) EBI (Slave 3) Special Function Register --------  */
#define AT91C_MATRIX_CS1A     ((unsigned int) 0x1 <<  1) /* (MATRIX) Chip Select 1 Assignment */
#define 	AT91C_MATRIX_CS1A_SMC                  ((unsigned int) 0x0 <<  1) /* (MATRIX) Chip Select 1 is assigned to the Static Memory Controller. */
#define 	AT91C_MATRIX_CS1A_SDRAMC               ((unsigned int) 0x1 <<  1) /* (MATRIX) Chip Select 1 is assigned to the SDRAM Controller. */
#define AT91C_MATRIX_CS3A     ((unsigned int) 0x1 <<  3) /* (MATRIX) Chip Select 3 Assignment */
#define 	AT91C_MATRIX_CS3A_SMC                  ((unsigned int) 0x0 <<  3) /* (MATRIX) Chip Select 3 is only assigned to the Static Memory Controller and NCS3 behaves as defined by the SMC. */
#define 	AT91C_MATRIX_CS3A_SM                   ((unsigned int) 0x1 <<  3) /* (MATRIX) Chip Select 3 is assigned to the Static Memory Controller and the SmartMedia Logic is activated. */
#define AT91C_MATRIX_CS4A     ((unsigned int) 0x1 <<  4) /* (MATRIX) Chip Select 4 Assignment */
#define 	AT91C_MATRIX_CS4A_SMC                  ((unsigned int) 0x0 <<  4) /* (MATRIX) Chip Select 4 is only assigned to the Static Memory Controller and NCS4 behaves as defined by the SMC. */
#define 	AT91C_MATRIX_CS4A_CF                   ((unsigned int) 0x1 <<  4) /* (MATRIX) Chip Select 4 is assigned to the Static Memory Controller and the CompactFlash Logic (first slot) is activated. */
#define AT91C_MATRIX_CS5A     ((unsigned int) 0x1 <<  5) /* (MATRIX) Chip Select 5 Assignment */
#define 	AT91C_MATRIX_CS5A_SMC                  ((unsigned int) 0x0 <<  5) /* (MATRIX) Chip Select 5 is only assigned to the Static Memory Controller and NCS5 behaves as defined by the SMC */
#define 	AT91C_MATRIX_CS5A_CF                   ((unsigned int) 0x1 <<  5) /* (MATRIX) Chip Select 5 is assigned to the Static Memory Controller and the CompactFlash Logic (second slot) is activated. */
#define AT91C_MATRIX_DBPUC    ((unsigned int) 0x1 <<  8) /* (MATRIX) Data Bus Pull-up Configuration */
/* -------- MATRIX_TEAKCFG : (MATRIX Offset: 0x12c) Slave 7 Special Function Register --------  */
#define AT91C_TEAK_PROGRAM_ACCESS ((unsigned int) 0x1 <<  0) /* (MATRIX) TEAK program memory access from AHB */
#define 	AT91C_TEAK_PROGRAM_ACCESS_DISABLED             ((unsigned int) 0x0) /* (MATRIX) TEAK program access disabled */
#define 	AT91C_TEAK_PROGRAM_ACCESS_ENABLED              ((unsigned int) 0x1) /* (MATRIX) TEAK program access enabled */
#define AT91C_TEAK_BOOT       ((unsigned int) 0x1 <<  1) /* (MATRIX) TEAK program start from boot routine */
#define 	AT91C_TEAK_BOOT_DISABLED             ((unsigned int) 0x0 <<  1) /* (MATRIX) TEAK program starts from boot routine disabled */
#define 	AT91C_TEAK_BOOT_ENABLED              ((unsigned int) 0x1 <<  1) /* (MATRIX) TEAK program starts from boot routine enabled */
#define AT91C_TEAK_NRESET     ((unsigned int) 0x1 <<  2) /* (MATRIX) active low TEAK reset */
#define 	AT91C_TEAK_NRESET_ENABLED              ((unsigned int) 0x0 <<  2) /* (MATRIX) active low TEAK reset enabled */
#define 	AT91C_TEAK_NRESET_DISABLED             ((unsigned int) 0x1 <<  2) /* (MATRIX) active low TEAK reset disabled */
#define AT91C_TEAK_LVECTORP   ((unsigned int) 0x3FFFF << 14) /* (MATRIX) boot routine start address */


/* ========== Register definition for MATRIX peripheral ==========  */
#define AT91C_MATRIX_MCFG1 ((AT91_REG *) 	0xFFFFEE04) /* (MATRIX)  Master Configuration Register 1 (rom)     */
#define AT91C_MATRIX_MRCR ((AT91_REG *) 	0xFFFFEF00) /* (MATRIX)  Master Remp Control Register  */
#define AT91C_MATRIX_SCFG4 ((AT91_REG *) 	0xFFFFEE50) /* (MATRIX)  Slave Configuration Register 4 (bridge)     */
#define AT91C_MATRIX_MCFG2 ((AT91_REG *) 	0xFFFFEE08) /* (MATRIX)  Master Configuration Register 2 (hperiphs)  */
#define AT91C_MATRIX_MCFG0 ((AT91_REG *) 	0xFFFFEE00) /* (MATRIX)  Master Configuration Register 0 (ram96k)      */
#define AT91C_MATRIX_EBI ((AT91_REG *) 	0xFFFFEF1C) /* (MATRIX)  Slave 3 (ebi) Special Function Register */
#define AT91C_MATRIX_TEAKCFG ((AT91_REG *) 	0xFFFFEF2C) /* (MATRIX)  Slave 7 (teak_prog) Special Function Register */
#define AT91C_MATRIX_MCFG3 ((AT91_REG *) 	0xFFFFEE0C) /* (MATRIX)  Master Configuration Register 3 (ebi) */
#define AT91C_MATRIX_MCFG4 ((AT91_REG *) 	0xFFFFEE10) /* (MATRIX)  Master Configuration Register 4 (bridge)     */
#define AT91C_MATRIX_MCFG6 ((AT91_REG *) 	0xFFFFEE18) /* (MATRIX)  Master Configuration Register 6 (ram16k)   */
#define AT91C_MATRIX_PRBS0 ((AT91_REG *) 	0xFFFFEE84) /* (MATRIX)  PRBS0 (ram0)  */
#define AT91C_MATRIX_MCFG5 ((AT91_REG *) 	0xFFFFEE14) /* (MATRIX)  Master Configuration Register 5 (mailbox)     */
#define AT91C_MATRIX_MCFG7 ((AT91_REG *) 	0xFFFFEE1C) /* (MATRIX)  Master Configuration Register 7 (teak_prog)      */
#define AT91C_MATRIX_VERSION ((AT91_REG *) 	0xFFFFEFFC) /* (MATRIX)  Version Register */
#define AT91C_MATRIX_PRAS2 ((AT91_REG *) 	0xFFFFEE90) /* (MATRIX)  PRAS2 (ram2)  */
#define AT91C_MATRIX_PRAS0 ((AT91_REG *) 	0xFFFFEE80) /* (MATRIX)  PRAS0 (ram0)  */
#define AT91C_MATRIX_PRAS1 ((AT91_REG *) 	0xFFFFEE88) /* (MATRIX)  PRAS1 (ram1)  */
#define AT91C_MATRIX_SCFG2 ((AT91_REG *) 	0xFFFFEE48) /* (MATRIX)  Slave Configuration Register 2 (hperiphs)  */
#define AT91C_MATRIX_SCFG0 ((AT91_REG *) 	0xFFFFEE40) /* (MATRIX)  Slave Configuration Register 0 (ram96k)      */
#define AT91C_MATRIX_PRBS2 ((AT91_REG *) 	0xFFFFEE94) /* (MATRIX)  PRBS2 (ram2)  */
#define AT91C_MATRIX_PRBS1 ((AT91_REG *) 	0xFFFFEE8C) /* (MATRIX)  PRBS1 (ram1)  */
#define AT91C_MATRIX_SCFG3 ((AT91_REG *) 	0xFFFFEE4C) /* (MATRIX)  Slave Configuration Register 3 (ebi) */
#define AT91C_MATRIX_SCFG1 ((AT91_REG *) 	0xFFFFEE44) /* (MATRIX)  Slave Configuration Register 1 (rom)     */

#endif
