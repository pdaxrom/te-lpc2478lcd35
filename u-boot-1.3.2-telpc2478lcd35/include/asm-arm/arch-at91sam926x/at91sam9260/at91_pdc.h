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

#ifndef AT91SAM9260_AT91_PDC_H
#define AT91SAM9260_AT91_PDC_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Peripheral DMA Controller */
/* ***************************************************************************** */
typedef struct _AT91S_PDC {
	AT91_REG	 PDC_RPR; 	/* Receive Pointer Register */
	AT91_REG	 PDC_RCR; 	/* Receive Counter Register */
	AT91_REG	 PDC_TPR; 	/* Transmit Pointer Register */
	AT91_REG	 PDC_TCR; 	/* Transmit Counter Register */
	AT91_REG	 PDC_RNPR; 	/* Receive Next Pointer Register */
	AT91_REG	 PDC_RNCR; 	/* Receive Next Counter Register */
	AT91_REG	 PDC_TNPR; 	/* Transmit Next Pointer Register */
	AT91_REG	 PDC_TNCR; 	/* Transmit Next Counter Register */
	AT91_REG	 PDC_PTCR; 	/* PDC Transfer Control Register */
	AT91_REG	 PDC_PTSR; 	/* PDC Transfer Status Register */
} AT91S_PDC, *AT91PS_PDC;

/* -------- PDC_PTCR : (PDC Offset: 0x20) PDC Transfer Control Register --------  */
#define AT91C_PDC_RXTEN       ((unsigned int) 0x1 <<  0) /* (PDC) Receiver Transfer Enable */
#define AT91C_PDC_RXTDIS      ((unsigned int) 0x1 <<  1) /* (PDC) Receiver Transfer Disable */
#define AT91C_PDC_TXTEN       ((unsigned int) 0x1 <<  8) /* (PDC) Transmitter Transfer Enable */
#define AT91C_PDC_TXTDIS      ((unsigned int) 0x1 <<  9) /* (PDC) Transmitter Transfer Disable */
/* -------- PDC_PTSR : (PDC Offset: 0x24) PDC Transfer Status Register --------  */

#endif
