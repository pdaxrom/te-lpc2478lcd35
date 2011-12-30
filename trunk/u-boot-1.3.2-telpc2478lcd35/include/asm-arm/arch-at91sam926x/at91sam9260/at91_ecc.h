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

#ifndef AT91SAM9260_AT91_ECC_H
#define AT91SAM9260_AT91_ECC_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Error Correction Code controller */
/* ***************************************************************************** */
typedef struct _AT91S_ECC {
	AT91_REG	 ECC_CR; 	/*  ECC reset register */
	AT91_REG	 ECC_MR; 	/*  ECC Page size register */
	AT91_REG	 ECC_SR; 	/*  ECC Status register */
	AT91_REG	 ECC_PR; 	/*  ECC Parity register */
	AT91_REG	 ECC_NPR; 	/*  ECC Parity N register */
	AT91_REG	 Reserved0[58]; 	/*  */
	AT91_REG	 ECC_VR; 	/*  ECC Version register */
} AT91S_ECC, *AT91PS_ECC;

/* -------- ECC_CR : (ECC Offset: 0x0) ECC reset register --------  */
#define AT91C_ECC_RST         ((unsigned int) 0x1 <<  0) /* (ECC) ECC reset parity */
/* -------- ECC_MR : (ECC Offset: 0x4) ECC page size register --------  */
#define AT91C_ECC_PAGE_SIZE   ((unsigned int) 0x3 <<  0) /* (ECC) Nand Flash page size */
/* -------- ECC_SR : (ECC Offset: 0x8) ECC status register --------  */
#define AT91C_ECC_RECERR      ((unsigned int) 0x1 <<  0) /* (ECC) ECC error */
#define AT91C_ECC_ECCERR      ((unsigned int) 0x1 <<  1) /* (ECC) ECC single error */
#define AT91C_ECC_MULERR      ((unsigned int) 0x1 <<  2) /* (ECC) ECC_MULERR */
/* -------- ECC_PR : (ECC Offset: 0xc) ECC parity register --------  */
#define AT91C_ECC_BITADDR     ((unsigned int) 0xF <<  0) /* (ECC) Bit address error */
#define AT91C_ECC_WORDADDR    ((unsigned int) 0xFFF <<  4) /* (ECC) address of the failing bit */
/* -------- ECC_NPR : (ECC Offset: 0x10) ECC N parity register --------  */
#define AT91C_ECC_NPARITY     ((unsigned int) 0xFFFF <<  0) /* (ECC) ECC parity N  */
/* -------- ECC_VR : (ECC Offset: 0xfc) ECC version register --------  */
#define AT91C_ECC_VR          ((unsigned int) 0xF <<  0) /* (ECC) ECC version register */


/* ========== Register definition for HECC peripheral ==========  */
#define AT91C_HECC_PR   ((AT91_REG *) 	0xFFFFE80C) /* (HECC)  ECC Parity register */
#define AT91C_HECC_MR   ((AT91_REG *) 	0xFFFFE804) /* (HECC)  ECC Page size register */
#define AT91C_HECC_NPR  ((AT91_REG *) 	0xFFFFE810) /* (HECC)  ECC Parity N register */
#define AT91C_HECC_SR   ((AT91_REG *) 	0xFFFFE808) /* (HECC)  ECC Status register */
#define AT91C_HECC_CR   ((AT91_REG *) 	0xFFFFE800) /* (HECC)  ECC reset register */
#define AT91C_HECC_VR   ((AT91_REG *) 	0xFFFFE8FC) /* (HECC)  ECC Version register */

#endif
