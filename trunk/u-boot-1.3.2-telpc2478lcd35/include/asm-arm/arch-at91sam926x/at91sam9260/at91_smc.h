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

#ifndef AT91SAM9260_AT91_SMC_H
#define AT91SAM9260_AT91_SMC_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Static Memory Controller Interface */
/* ***************************************************************************** */
typedef struct _AT91S_SMC {
	AT91_REG	 SMC_SETUP0; 	/*  Setup Register for CS 0 */
	AT91_REG	 SMC_PULSE0; 	/*  Pulse Register for CS 0 */
	AT91_REG	 SMC_CYCLE0; 	/*  Cycle Register for CS 0 */
	AT91_REG	 SMC_CTRL0; 	/*  Control Register for CS 0 */
	AT91_REG	 SMC_SETUP1; 	/*  Setup Register for CS 1 */
	AT91_REG	 SMC_PULSE1; 	/*  Pulse Register for CS 1 */
	AT91_REG	 SMC_CYCLE1; 	/*  Cycle Register for CS 1 */
	AT91_REG	 SMC_CTRL1; 	/*  Control Register for CS 1 */
	AT91_REG	 SMC_SETUP2; 	/*  Setup Register for CS 2 */
	AT91_REG	 SMC_PULSE2; 	/*  Pulse Register for CS 2 */
	AT91_REG	 SMC_CYCLE2; 	/*  Cycle Register for CS 2 */
	AT91_REG	 SMC_CTRL2; 	/*  Control Register for CS 2 */
	AT91_REG	 SMC_SETUP3; 	/*  Setup Register for CS 3 */
	AT91_REG	 SMC_PULSE3; 	/*  Pulse Register for CS 3 */
	AT91_REG	 SMC_CYCLE3; 	/*  Cycle Register for CS 3 */
	AT91_REG	 SMC_CTRL3; 	/*  Control Register for CS 3 */
	AT91_REG	 SMC_SETUP4; 	/*  Setup Register for CS 4 */
	AT91_REG	 SMC_PULSE4; 	/*  Pulse Register for CS 4 */
	AT91_REG	 SMC_CYCLE4; 	/*  Cycle Register for CS 4 */
	AT91_REG	 SMC_CTRL4; 	/*  Control Register for CS 4 */
	AT91_REG	 SMC_SETUP5; 	/*  Setup Register for CS 5 */
	AT91_REG	 SMC_PULSE5; 	/*  Pulse Register for CS 5 */
	AT91_REG	 SMC_CYCLE5; 	/*  Cycle Register for CS 5 */
	AT91_REG	 SMC_CTRL5; 	/*  Control Register for CS 5 */
	AT91_REG	 SMC_SETUP6; 	/*  Setup Register for CS 6 */
	AT91_REG	 SMC_PULSE6; 	/*  Pulse Register for CS 6 */
	AT91_REG	 SMC_CYCLE6; 	/*  Cycle Register for CS 6 */
	AT91_REG	 SMC_CTRL6; 	/*  Control Register for CS 6 */
	AT91_REG	 SMC_SETUP7; 	/*  Setup Register for CS 7 */
	AT91_REG	 SMC_PULSE7; 	/*  Pulse Register for CS 7 */
	AT91_REG	 SMC_CYCLE7; 	/*  Cycle Register for CS 7 */
	AT91_REG	 SMC_CTRL7; 	/*  Control Register for CS 7 */
} AT91S_SMC, *AT91PS_SMC;

/* -------- SMC_SETUP : (SMC Offset: 0x0) Setup Register for CS x --------  */
#define AT91C_SMC_NWESETUP    ((unsigned int) 0x3F <<  0) /* (SMC) NWE Setup Length */
#define AT91C_SMC_NCSSETUPWR  ((unsigned int) 0x3F <<  8) /* (SMC) NCS Setup Length in WRite Access */
#define AT91C_SMC_NRDSETUP    ((unsigned int) 0x3F << 16) /* (SMC) NRD Setup Length */
#define AT91C_SMC_NCSSETUPRD  ((unsigned int) 0x3F << 24) /* (SMC) NCS Setup Length in ReaD Access */
/* -------- SMC_PULSE : (SMC Offset: 0x4) Pulse Register for CS x --------  */
#define AT91C_SMC_NWEPULSE    ((unsigned int) 0x7F <<  0) /* (SMC) NWE Pulse Length */
#define AT91C_SMC_NCSPULSEWR  ((unsigned int) 0x7F <<  8) /* (SMC) NCS Pulse Length in WRite Access */
#define AT91C_SMC_NRDPULSE    ((unsigned int) 0x7F << 16) /* (SMC) NRD Pulse Length */
#define AT91C_SMC_NCSPULSERD  ((unsigned int) 0x7F << 24) /* (SMC) NCS Pulse Length in ReaD Access */
/* -------- SMC_CYC : (SMC Offset: 0x8) Cycle Register for CS x --------  */
#define AT91C_SMC_NWECYCLE    ((unsigned int) 0x1FF <<  0) /* (SMC) Total Write Cycle Length */
#define AT91C_SMC_NRDCYCLE    ((unsigned int) 0x1FF << 16) /* (SMC) Total Read Cycle Length */
/* -------- SMC_CTRL : (SMC Offset: 0xc) Control Register for CS x --------  */
#define AT91C_SMC_READMODE    ((unsigned int) 0x1 <<  0) /* (SMC) Read Mode */
#define AT91C_SMC_WRITEMODE   ((unsigned int) 0x1 <<  1) /* (SMC) Write Mode */
#define AT91C_SMC_NWAITM      ((unsigned int) 0x3 <<  5) /* (SMC) NWAIT Mode */
#define 	AT91C_SMC_NWAITM_NWAIT_DISABLE        ((unsigned int) 0x0 <<  5) /* (SMC) External NWAIT disabled. */
#define 	AT91C_SMC_NWAITM_NWAIT_ENABLE_FROZEN  ((unsigned int) 0x2 <<  5) /* (SMC) External NWAIT enabled in frozen mode. */
#define 	AT91C_SMC_NWAITM_NWAIT_ENABLE_READY   ((unsigned int) 0x3 <<  5) /* (SMC) External NWAIT enabled in ready mode. */
#define AT91C_SMC_BAT         ((unsigned int) 0x1 <<  8) /* (SMC) Byte Access Type */
#define 	AT91C_SMC_BAT_BYTE_SELECT          ((unsigned int) 0x0 <<  8) /* (SMC) Write controled by ncs, nbs0, nbs1, nbs2, nbs3. Read controled by ncs, nrd, nbs0, nbs1, nbs2, nbs3. */
#define 	AT91C_SMC_BAT_BYTE_WRITE           ((unsigned int) 0x1 <<  8) /* (SMC) Write controled by ncs, nwe0, nwe1, nwe2, nwe3. Read controled by ncs and nrd. */
#define AT91C_SMC_DBW         ((unsigned int) 0x3 << 12) /* (SMC) Data Bus Width */
#define 	AT91C_SMC_DBW_WIDTH_EIGTH_BITS     ((unsigned int) 0x0 << 12) /* (SMC) 8 bits. */
#define 	AT91C_SMC_DBW_WIDTH_SIXTEEN_BITS   ((unsigned int) 0x1 << 12) /* (SMC) 16 bits. */
#define 	AT91C_SMC_DBW_WIDTH_THIRTY_TWO_BITS ((unsigned int) 0x2 << 12) /* (SMC) 32 bits. */
#define AT91C_SMC_TDF         ((unsigned int) 0xF << 16) /* (SMC) Data Float Time. */
#define AT91C_SMC_TDFEN       ((unsigned int) 0x1 << 20) /* (SMC) TDF Enabled. */
#define AT91C_SMC_PMEN        ((unsigned int) 0x1 << 24) /* (SMC) Page Mode Enabled. */
#define AT91C_SMC_PS          ((unsigned int) 0x3 << 28) /* (SMC) Page Size */
#define 	AT91C_SMC_PS_SIZE_FOUR_BYTES      ((unsigned int) 0x0 << 28) /* (SMC) 4 bytes. */
#define 	AT91C_SMC_PS_SIZE_EIGHT_BYTES     ((unsigned int) 0x1 << 28) /* (SMC) 8 bytes. */
#define 	AT91C_SMC_PS_SIZE_SIXTEEN_BYTES   ((unsigned int) 0x2 << 28) /* (SMC) 16 bytes. */
#define 	AT91C_SMC_PS_SIZE_THIRTY_TWO_BYTES ((unsigned int) 0x3 << 28) /* (SMC) 32 bytes. */
/* -------- SMC_SETUP : (SMC Offset: 0x10) Setup Register for CS x --------  */
/* -------- SMC_PULSE : (SMC Offset: 0x14) Pulse Register for CS x --------  */
/* -------- SMC_CYC : (SMC Offset: 0x18) Cycle Register for CS x --------  */
/* -------- SMC_CTRL : (SMC Offset: 0x1c) Control Register for CS x --------  */
/* -------- SMC_SETUP : (SMC Offset: 0x20) Setup Register for CS x --------  */
/* -------- SMC_PULSE : (SMC Offset: 0x24) Pulse Register for CS x --------  */
/* -------- SMC_CYC : (SMC Offset: 0x28) Cycle Register for CS x --------  */
/* -------- SMC_CTRL : (SMC Offset: 0x2c) Control Register for CS x --------  */
/* -------- SMC_SETUP : (SMC Offset: 0x30) Setup Register for CS x --------  */
/* -------- SMC_PULSE : (SMC Offset: 0x34) Pulse Register for CS x --------  */
/* -------- SMC_CYC : (SMC Offset: 0x38) Cycle Register for CS x --------  */
/* -------- SMC_CTRL : (SMC Offset: 0x3c) Control Register for CS x --------  */
/* -------- SMC_SETUP : (SMC Offset: 0x40) Setup Register for CS x --------  */
/* -------- SMC_PULSE : (SMC Offset: 0x44) Pulse Register for CS x --------  */
/* -------- SMC_CYC : (SMC Offset: 0x48) Cycle Register for CS x --------  */
/* -------- SMC_CTRL : (SMC Offset: 0x4c) Control Register for CS x --------  */
/* -------- SMC_SETUP : (SMC Offset: 0x50) Setup Register for CS x --------  */
/* -------- SMC_PULSE : (SMC Offset: 0x54) Pulse Register for CS x --------  */
/* -------- SMC_CYC : (SMC Offset: 0x58) Cycle Register for CS x --------  */
/* -------- SMC_CTRL : (SMC Offset: 0x5c) Control Register for CS x --------  */
/* -------- SMC_SETUP : (SMC Offset: 0x60) Setup Register for CS x --------  */
/* -------- SMC_PULSE : (SMC Offset: 0x64) Pulse Register for CS x --------  */
/* -------- SMC_CYC : (SMC Offset: 0x68) Cycle Register for CS x --------  */
/* -------- SMC_CTRL : (SMC Offset: 0x6c) Control Register for CS x --------  */
/* -------- SMC_SETUP : (SMC Offset: 0x70) Setup Register for CS x --------  */
/* -------- SMC_PULSE : (SMC Offset: 0x74) Pulse Register for CS x --------  */
/* -------- SMC_CYC : (SMC Offset: 0x78) Cycle Register for CS x --------  */
/* -------- SMC_CTRL : (SMC Offset: 0x7c) Control Register for CS x --------  */


/* ========== Register definition for SMC peripheral ==========  */
#define AT91C_SMC_CYCLE1 ((AT91_REG *) 	0xFFFFEC18) /* (SMC)  Cycle Register for CS 1 */
#define AT91C_SMC_CTRL7 ((AT91_REG *) 	0xFFFFEC7C) /* (SMC)  Control Register for CS 7 */
#define AT91C_SMC_CTRL2 ((AT91_REG *) 	0xFFFFEC2C) /* (SMC)  Control Register for CS 2 */
#define AT91C_SMC_PULSE2 ((AT91_REG *) 	0xFFFFEC24) /* (SMC)  Pulse Register for CS 2 */
#define AT91C_SMC_CTRL1 ((AT91_REG *) 	0xFFFFEC1C) /* (SMC)  Control Register for CS 1 */
#define AT91C_SMC_SETUP4 ((AT91_REG *) 	0xFFFFEC40) /* (SMC)  Setup Register for CS 4 */
#define AT91C_SMC_CYCLE3 ((AT91_REG *) 	0xFFFFEC38) /* (SMC)  Cycle Register for CS 3 */
#define AT91C_SMC_SETUP3 ((AT91_REG *) 	0xFFFFEC30) /* (SMC)  Setup Register for CS 3 */
#define AT91C_SMC_CYCLE2 ((AT91_REG *) 	0xFFFFEC28) /* (SMC)  Cycle Register for CS 2 */
#define AT91C_SMC_SETUP2 ((AT91_REG *) 	0xFFFFEC20) /* (SMC)  Setup Register for CS 2 */
#define AT91C_SMC_PULSE5 ((AT91_REG *) 	0xFFFFEC54) /* (SMC)  Pulse Register for CS 5 */
#define AT91C_SMC_CTRL4 ((AT91_REG *) 	0xFFFFEC4C) /* (SMC)  Control Register for CS 4 */
#define AT91C_SMC_PULSE4 ((AT91_REG *) 	0xFFFFEC44) /* (SMC)  Pulse Register for CS 4 */
#define AT91C_SMC_CTRL3 ((AT91_REG *) 	0xFFFFEC3C) /* (SMC)  Control Register for CS 3 */
#define AT91C_SMC_PULSE3 ((AT91_REG *) 	0xFFFFEC34) /* (SMC)  Pulse Register for CS 3 */
#define AT91C_SMC_PULSE0 ((AT91_REG *) 	0xFFFFEC04) /* (SMC)  Pulse Register for CS 0 */
#define AT91C_SMC_CYCLE4 ((AT91_REG *) 	0xFFFFEC48) /* (SMC)  Cycle Register for CS 4 */
#define AT91C_SMC_SETUP5 ((AT91_REG *) 	0xFFFFEC50) /* (SMC)  Setup Register for CS 5 */
#define AT91C_SMC_CYCLE5 ((AT91_REG *) 	0xFFFFEC58) /* (SMC)  Cycle Register for CS 5 */
#define AT91C_SMC_SETUP6 ((AT91_REG *) 	0xFFFFEC60) /* (SMC)  Setup Register for CS 6 */
#define AT91C_SMC_CYCLE6 ((AT91_REG *) 	0xFFFFEC68) /* (SMC)  Cycle Register for CS 6 */
#define AT91C_SMC_SETUP0 ((AT91_REG *) 	0xFFFFEC00) /* (SMC)  Setup Register for CS 0 */
#define AT91C_SMC_CYCLE0 ((AT91_REG *) 	0xFFFFEC08) /* (SMC)  Cycle Register for CS 0 */
#define AT91C_SMC_SETUP1 ((AT91_REG *) 	0xFFFFEC10) /* (SMC)  Setup Register for CS 1 */
#define AT91C_SMC_CTRL5 ((AT91_REG *) 	0xFFFFEC5C) /* (SMC)  Control Register for CS 5 */
#define AT91C_SMC_PULSE6 ((AT91_REG *) 	0xFFFFEC64) /* (SMC)  Pulse Register for CS 6 */
#define AT91C_SMC_CTRL6 ((AT91_REG *) 	0xFFFFEC6C) /* (SMC)  Control Register for CS 6 */
#define AT91C_SMC_PULSE7 ((AT91_REG *) 	0xFFFFEC74) /* (SMC)  Pulse Register for CS 7 */
#define AT91C_SMC_CTRL0 ((AT91_REG *) 	0xFFFFEC0C) /* (SMC)  Control Register for CS 0 */
#define AT91C_SMC_PULSE1 ((AT91_REG *) 	0xFFFFEC14) /* (SMC)  Pulse Register for CS 1 */
#define AT91C_SMC_SETUP7 ((AT91_REG *) 	0xFFFFEC70) /* (SMC)  Setup Register for CS 7 */
#define AT91C_SMC_CYCLE7 ((AT91_REG *) 	0xFFFFEC78) /* (SMC)  Cycle Register for CS 7 */

#endif
