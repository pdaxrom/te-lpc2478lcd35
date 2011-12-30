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

#ifndef AT91SAM9260_AT91_SPI_H
#define AT91SAM9260_AT91_SPI_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Serial Parallel Interface */
/* ***************************************************************************** */
typedef struct _AT91S_SPI {
	AT91_REG	 SPI_CR; 	/* Control Register */
	AT91_REG	 SPI_MR; 	/* Mode Register */
	AT91_REG	 SPI_RDR; 	/* Receive Data Register */
	AT91_REG	 SPI_TDR; 	/* Transmit Data Register */
	AT91_REG	 SPI_SR; 	/* Status Register */
	AT91_REG	 SPI_IER; 	/* Interrupt Enable Register */
	AT91_REG	 SPI_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 SPI_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 Reserved0[4]; 	/*  */
	AT91_REG	 SPI_CSR[4]; 	/* Chip Select Register */
	AT91_REG	 Reserved1[48]; 	/*  */
	AT91_REG	 SPI_RPR; 	/* Receive Pointer Register */
	AT91_REG	 SPI_RCR; 	/* Receive Counter Register */
	AT91_REG	 SPI_TPR; 	/* Transmit Pointer Register */
	AT91_REG	 SPI_TCR; 	/* Transmit Counter Register */
	AT91_REG	 SPI_RNPR; 	/* Receive Next Pointer Register */
	AT91_REG	 SPI_RNCR; 	/* Receive Next Counter Register */
	AT91_REG	 SPI_TNPR; 	/* Transmit Next Pointer Register */
	AT91_REG	 SPI_TNCR; 	/* Transmit Next Counter Register */
	AT91_REG	 SPI_PTCR; 	/* PDC Transfer Control Register */
	AT91_REG	 SPI_PTSR; 	/* PDC Transfer Status Register */
} AT91S_SPI, *AT91PS_SPI;

/* -------- SPI_CR : (SPI Offset: 0x0) SPI Control Register --------  */
#define AT91C_SPI_SPIEN       ((unsigned int) 0x1 <<  0) /* (SPI) SPI Enable */
#define AT91C_SPI_SPIDIS      ((unsigned int) 0x1 <<  1) /* (SPI) SPI Disable */
#define AT91C_SPI_SWRST       ((unsigned int) 0x1 <<  7) /* (SPI) SPI Software reset */
#define AT91C_SPI_LASTXFER    ((unsigned int) 0x1 << 24) /* (SPI) SPI Last Transfer */
/* -------- SPI_MR : (SPI Offset: 0x4) SPI Mode Register --------  */
#define AT91C_SPI_MSTR        ((unsigned int) 0x1 <<  0) /* (SPI) Master/Slave Mode */
#define AT91C_SPI_PS          ((unsigned int) 0x1 <<  1) /* (SPI) Peripheral Select */
#define 	AT91C_SPI_PS_FIXED                ((unsigned int) 0x0 <<  1) /* (SPI) Fixed Peripheral Select */
#define 	AT91C_SPI_PS_VARIABLE             ((unsigned int) 0x1 <<  1) /* (SPI) Variable Peripheral Select */
#define AT91C_SPI_PCSDEC      ((unsigned int) 0x1 <<  2) /* (SPI) Chip Select Decode */
#define AT91C_SPI_FDIV        ((unsigned int) 0x1 <<  3) /* (SPI) Clock Selection */
#define AT91C_SPI_MODFDIS     ((unsigned int) 0x1 <<  4) /* (SPI) Mode Fault Detection */
#define AT91C_SPI_LLB         ((unsigned int) 0x1 <<  7) /* (SPI) Clock Selection */
#define AT91C_SPI_PCS         ((unsigned int) 0xF << 16) /* (SPI) Peripheral Chip Select */
#define AT91C_SPI_DLYBCS      ((unsigned int) 0xFF << 24) /* (SPI) Delay Between Chip Selects */
/* -------- SPI_RDR : (SPI Offset: 0x8) Receive Data Register --------  */
#define AT91C_SPI_RD          ((unsigned int) 0xFFFF <<  0) /* (SPI) Receive Data */
#define AT91C_SPI_RPCS        ((unsigned int) 0xF << 16) /* (SPI) Peripheral Chip Select Status */
/* -------- SPI_TDR : (SPI Offset: 0xc) Transmit Data Register --------  */
#define AT91C_SPI_TD          ((unsigned int) 0xFFFF <<  0) /* (SPI) Transmit Data */
#define AT91C_SPI_TPCS        ((unsigned int) 0xF << 16) /* (SPI) Peripheral Chip Select Status */
/* -------- SPI_SR : (SPI Offset: 0x10) Status Register --------  */
#define AT91C_SPI_RDRF        ((unsigned int) 0x1 <<  0) /* (SPI) Receive Data Register Full */
#define AT91C_SPI_TDRE        ((unsigned int) 0x1 <<  1) /* (SPI) Transmit Data Register Empty */
#define AT91C_SPI_MODF        ((unsigned int) 0x1 <<  2) /* (SPI) Mode Fault Error */
#define AT91C_SPI_OVRES       ((unsigned int) 0x1 <<  3) /* (SPI) Overrun Error Status */
#define AT91C_SPI_ENDRX       ((unsigned int) 0x1 <<  4) /* (SPI) End of Receiver Transfer */
#define AT91C_SPI_ENDTX       ((unsigned int) 0x1 <<  5) /* (SPI) End of Receiver Transfer */
#define AT91C_SPI_RXBUFF      ((unsigned int) 0x1 <<  6) /* (SPI) RXBUFF Interrupt */
#define AT91C_SPI_TXBUFE      ((unsigned int) 0x1 <<  7) /* (SPI) TXBUFE Interrupt */
#define AT91C_SPI_NSSR        ((unsigned int) 0x1 <<  8) /* (SPI) NSSR Interrupt */
#define AT91C_SPI_TXEMPTY     ((unsigned int) 0x1 <<  9) /* (SPI) TXEMPTY Interrupt */
#define AT91C_SPI_SPIENS      ((unsigned int) 0x1 << 16) /* (SPI) Enable Status */
/* -------- SPI_IER : (SPI Offset: 0x14) Interrupt Enable Register --------  */
/* -------- SPI_IDR : (SPI Offset: 0x18) Interrupt Disable Register --------  */
/* -------- SPI_IMR : (SPI Offset: 0x1c) Interrupt Mask Register --------  */
/* -------- SPI_CSR : (SPI Offset: 0x30) Chip Select Register --------  */
#define AT91C_SPI_CPOL        ((unsigned int) 0x1 <<  0) /* (SPI) Clock Polarity */
#define AT91C_SPI_NCPHA       ((unsigned int) 0x1 <<  1) /* (SPI) Clock Phase */
#define AT91C_SPI_CSAAT       ((unsigned int) 0x1 <<  3) /* (SPI) Chip Select Active After Transfer */
#define AT91C_SPI_BITS        ((unsigned int) 0xF <<  4) /* (SPI) Bits Per Transfer */
#define 	AT91C_SPI_BITS_8                    ((unsigned int) 0x0 <<  4) /* (SPI) 8 Bits Per transfer */
#define 	AT91C_SPI_BITS_9                    ((unsigned int) 0x1 <<  4) /* (SPI) 9 Bits Per transfer */
#define 	AT91C_SPI_BITS_10                   ((unsigned int) 0x2 <<  4) /* (SPI) 10 Bits Per transfer */
#define 	AT91C_SPI_BITS_11                   ((unsigned int) 0x3 <<  4) /* (SPI) 11 Bits Per transfer */
#define 	AT91C_SPI_BITS_12                   ((unsigned int) 0x4 <<  4) /* (SPI) 12 Bits Per transfer */
#define 	AT91C_SPI_BITS_13                   ((unsigned int) 0x5 <<  4) /* (SPI) 13 Bits Per transfer */
#define 	AT91C_SPI_BITS_14                   ((unsigned int) 0x6 <<  4) /* (SPI) 14 Bits Per transfer */
#define 	AT91C_SPI_BITS_15                   ((unsigned int) 0x7 <<  4) /* (SPI) 15 Bits Per transfer */
#define 	AT91C_SPI_BITS_16                   ((unsigned int) 0x8 <<  4) /* (SPI) 16 Bits Per transfer */
#define AT91C_SPI_SCBR        ((unsigned int) 0xFF <<  8) /* (SPI) Serial Clock Baud Rate */
#define AT91C_SPI_DLYBS       ((unsigned int) 0xFF << 16) /* (SPI) Delay Before SPCK */
#define AT91C_SPI_DLYBCT      ((unsigned int) 0xFF << 24) /* (SPI) Delay Between Consecutive Transfers */

/* ========== Register definition for PDC_SPI0 peripheral ==========  */
#define AT91C_SPI0_PTSR ((AT91_REG *) 	0xFFFC8124) /* (PDC_SPI0) PDC Transfer Status Register */
#define AT91C_SPI0_TNCR ((AT91_REG *) 	0xFFFC811C) /* (PDC_SPI0) Transmit Next Counter Register */
#define AT91C_SPI0_RNCR ((AT91_REG *) 	0xFFFC8114) /* (PDC_SPI0) Receive Next Counter Register */
#define AT91C_SPI0_TCR  ((AT91_REG *) 	0xFFFC810C) /* (PDC_SPI0) Transmit Counter Register */
#define AT91C_SPI0_PTCR ((AT91_REG *) 	0xFFFC8120) /* (PDC_SPI0) PDC Transfer Control Register */
#define AT91C_SPI0_RCR  ((AT91_REG *) 	0xFFFC8104) /* (PDC_SPI0) Receive Counter Register */
#define AT91C_SPI0_TNPR ((AT91_REG *) 	0xFFFC8118) /* (PDC_SPI0) Transmit Next Pointer Register */
#define AT91C_SPI0_RPR  ((AT91_REG *) 	0xFFFC8100) /* (PDC_SPI0) Receive Pointer Register */
#define AT91C_SPI0_TPR  ((AT91_REG *) 	0xFFFC8108) /* (PDC_SPI0) Transmit Pointer Register */
#define AT91C_SPI0_RNPR ((AT91_REG *) 	0xFFFC8110) /* (PDC_SPI0) Receive Next Pointer Register */
/* ========== Register definition for SPI0 peripheral ==========  */
#define AT91C_SPI0_CSR  ((AT91_REG *) 	0xFFFC8030) /* (SPI0) Chip Select Register */
#define AT91C_SPI0_IDR  ((AT91_REG *) 	0xFFFC8018) /* (SPI0) Interrupt Disable Register */
#define AT91C_SPI0_SR   ((AT91_REG *) 	0xFFFC8010) /* (SPI0) Status Register */
#define AT91C_SPI0_RDR  ((AT91_REG *) 	0xFFFC8008) /* (SPI0) Receive Data Register */
#define AT91C_SPI0_CR   ((AT91_REG *) 	0xFFFC8000) /* (SPI0) Control Register */
#define AT91C_SPI0_IMR  ((AT91_REG *) 	0xFFFC801C) /* (SPI0) Interrupt Mask Register */
#define AT91C_SPI0_IER  ((AT91_REG *) 	0xFFFC8014) /* (SPI0) Interrupt Enable Register */
#define AT91C_SPI0_TDR  ((AT91_REG *) 	0xFFFC800C) /* (SPI0) Transmit Data Register */
#define AT91C_SPI0_MR   ((AT91_REG *) 	0xFFFC8004) /* (SPI0) Mode Register */
/* ========== Register definition for PDC_SPI1 peripheral ==========  */
#define AT91C_SPI1_PTSR ((AT91_REG *) 	0xFFFCC124) /* (PDC_SPI1) PDC Transfer Status Register */
#define AT91C_SPI1_TNCR ((AT91_REG *) 	0xFFFCC11C) /* (PDC_SPI1) Transmit Next Counter Register */
#define AT91C_SPI1_RNCR ((AT91_REG *) 	0xFFFCC114) /* (PDC_SPI1) Receive Next Counter Register */
#define AT91C_SPI1_TCR  ((AT91_REG *) 	0xFFFCC10C) /* (PDC_SPI1) Transmit Counter Register */
#define AT91C_SPI1_RCR  ((AT91_REG *) 	0xFFFCC104) /* (PDC_SPI1) Receive Counter Register */
#define AT91C_SPI1_PTCR ((AT91_REG *) 	0xFFFCC120) /* (PDC_SPI1) PDC Transfer Control Register */
#define AT91C_SPI1_TNPR ((AT91_REG *) 	0xFFFCC118) /* (PDC_SPI1) Transmit Next Pointer Register */
#define AT91C_SPI1_RNPR ((AT91_REG *) 	0xFFFCC110) /* (PDC_SPI1) Receive Next Pointer Register */
#define AT91C_SPI1_TPR  ((AT91_REG *) 	0xFFFCC108) /* (PDC_SPI1) Transmit Pointer Register */
#define AT91C_SPI1_RPR  ((AT91_REG *) 	0xFFFCC100) /* (PDC_SPI1) Receive Pointer Register */
/* ========== Register definition for SPI1 peripheral ==========  */
#define AT91C_SPI1_IMR  ((AT91_REG *) 	0xFFFCC01C) /* (SPI1) Interrupt Mask Register */
#define AT91C_SPI1_IER  ((AT91_REG *) 	0xFFFCC014) /* (SPI1) Interrupt Enable Register */
#define AT91C_SPI1_TDR  ((AT91_REG *) 	0xFFFCC00C) /* (SPI1) Transmit Data Register */
#define AT91C_SPI1_MR   ((AT91_REG *) 	0xFFFCC004) /* (SPI1) Mode Register */
#define AT91C_SPI1_CSR  ((AT91_REG *) 	0xFFFCC030) /* (SPI1) Chip Select Register */
#define AT91C_SPI1_IDR  ((AT91_REG *) 	0xFFFCC018) /* (SPI1) Interrupt Disable Register */
#define AT91C_SPI1_SR   ((AT91_REG *) 	0xFFFCC010) /* (SPI1) Status Register */
#define AT91C_SPI1_RDR  ((AT91_REG *) 	0xFFFCC008) /* (SPI1) Receive Data Register */
#define AT91C_SPI1_CR   ((AT91_REG *) 	0xFFFCC000) /* (SPI1) Control Register */

#endif
