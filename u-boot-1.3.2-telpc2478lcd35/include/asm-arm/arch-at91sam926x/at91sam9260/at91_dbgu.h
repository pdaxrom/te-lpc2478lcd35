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

#ifndef AT91SAM9260_AT91_DBGU_H
#define AT91SAM9260_AT91_DBGU_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Debug Unit */
/* ***************************************************************************** */

typedef struct _AT91S_DBGU {
	AT91_REG	 DBGU_CR; 	/* Control Register */
	AT91_REG	 DBGU_MR; 	/* Mode Register */
	AT91_REG	 DBGU_IER; 	/* Interrupt Enable Register */
	AT91_REG	 DBGU_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 DBGU_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 DBGU_CSR; 	/* Channel Status Register */
	AT91_REG	 DBGU_RHR; 	/* Receiver Holding Register */
	AT91_REG	 DBGU_THR; 	/* Transmitter Holding Register */
	AT91_REG	 DBGU_BRGR; 	/* Baud Rate Generator Register */
	AT91_REG	 Reserved0[7]; 	/*  */
	AT91_REG	 DBGU_CIDR; 	/* Chip ID Register */
	AT91_REG	 DBGU_EXID; 	/* Chip ID Extension Register */
	AT91_REG	 DBGU_FNTR; 	/* Force NTRST Register */
	AT91_REG	 Reserved1[45]; 	/*  */
	AT91_REG	 DBGU_RPR; 	/* Receive Pointer Register */
	AT91_REG	 DBGU_RCR; 	/* Receive Counter Register */
	AT91_REG	 DBGU_TPR; 	/* Transmit Pointer Register */
	AT91_REG	 DBGU_TCR; 	/* Transmit Counter Register */
	AT91_REG	 DBGU_RNPR; 	/* Receive Next Pointer Register */
	AT91_REG	 DBGU_RNCR; 	/* Receive Next Counter Register */
	AT91_REG	 DBGU_TNPR; 	/* Transmit Next Pointer Register */
	AT91_REG	 DBGU_TNCR; 	/* Transmit Next Counter Register */
	AT91_REG	 DBGU_PTCR; 	/* PDC Transfer Control Register */
	AT91_REG	 DBGU_PTSR; 	/* PDC Transfer Status Register */
} AT91S_DBGU, *AT91PS_DBGU;


/* -------- DBGU_CR : (DBGU Offset: 0x0) Debug Unit Control Register --------  */
#define AT91C_US_RSTRX        ((unsigned int) 0x1 <<  2) /* (DBGU) Reset Receiver */
#define AT91C_US_RSTTX        ((unsigned int) 0x1 <<  3) /* (DBGU) Reset Transmitter */
#define AT91C_US_RXEN         ((unsigned int) 0x1 <<  4) /* (DBGU) Receiver Enable */
#define AT91C_US_RXDIS        ((unsigned int) 0x1 <<  5) /* (DBGU) Receiver Disable */
#define AT91C_US_TXEN         ((unsigned int) 0x1 <<  6) /* (DBGU) Transmitter Enable */
#define AT91C_US_TXDIS        ((unsigned int) 0x1 <<  7) /* (DBGU) Transmitter Disable */
#define AT91C_US_RSTSTA       ((unsigned int) 0x1 <<  8) /* (DBGU) Reset Status Bits */
/* -------- DBGU_MR : (DBGU Offset: 0x4) Debug Unit Mode Register --------  */
#define AT91C_US_PAR          ((unsigned int) 0x7 <<  9) /* (DBGU) Parity type */
#define 	AT91C_US_PAR_EVEN                 ((unsigned int) 0x0 <<  9) /* (DBGU) Even Parity */
#define 	AT91C_US_PAR_ODD                  ((unsigned int) 0x1 <<  9) /* (DBGU) Odd Parity */
#define 	AT91C_US_PAR_SPACE                ((unsigned int) 0x2 <<  9) /* (DBGU) Parity forced to 0 (Space) */
#define 	AT91C_US_PAR_MARK                 ((unsigned int) 0x3 <<  9) /* (DBGU) Parity forced to 1 (Mark) */
#define 	AT91C_US_PAR_NONE                 ((unsigned int) 0x4 <<  9) /* (DBGU) No Parity */
#define 	AT91C_US_PAR_MULTI_DROP           ((unsigned int) 0x6 <<  9) /* (DBGU) Multi-drop mode */
#define AT91C_US_CHMODE       ((unsigned int) 0x3 << 14) /* (DBGU) Channel Mode */
#define 	AT91C_US_CHMODE_NORMAL               ((unsigned int) 0x0 << 14) /* (DBGU) Normal Mode: The USART channel operates as an RX/TX USART. */
#define 	AT91C_US_CHMODE_AUTO                 ((unsigned int) 0x1 << 14) /* (DBGU) Automatic Echo: Receiver Data Input is connected to the TXD pin. */
#define 	AT91C_US_CHMODE_LOCAL                ((unsigned int) 0x2 << 14) /* (DBGU) Local Loopback: Transmitter Output Signal is connected to Receiver Input Signal. */
#define 	AT91C_US_CHMODE_REMOTE               ((unsigned int) 0x3 << 14) /* (DBGU) Remote Loopback: RXD pin is internally connected to TXD pin. */
/* -------- DBGU_IER : (DBGU Offset: 0x8) Debug Unit Interrupt Enable Register --------  */
#define AT91C_US_RXRDY        ((unsigned int) 0x1 <<  0) /* (DBGU) RXRDY Interrupt */
#define AT91C_US_TXRDY        ((unsigned int) 0x1 <<  1) /* (DBGU) TXRDY Interrupt */
#define AT91C_US_ENDRX        ((unsigned int) 0x1 <<  3) /* (DBGU) End of Receive Transfer Interrupt */
#define AT91C_US_ENDTX        ((unsigned int) 0x1 <<  4) /* (DBGU) End of Transmit Interrupt */
#define AT91C_US_OVRE         ((unsigned int) 0x1 <<  5) /* (DBGU) Overrun Interrupt */
#define AT91C_US_FRAME        ((unsigned int) 0x1 <<  6) /* (DBGU) Framing Error Interrupt */
#define AT91C_US_PARE         ((unsigned int) 0x1 <<  7) /* (DBGU) Parity Error Interrupt */
#define AT91C_US_TXEMPTY      ((unsigned int) 0x1 <<  9) /* (DBGU) TXEMPTY Interrupt */
#define AT91C_US_TXBUFE       ((unsigned int) 0x1 << 11) /* (DBGU) TXBUFE Interrupt */
#define AT91C_US_RXBUFF       ((unsigned int) 0x1 << 12) /* (DBGU) RXBUFF Interrupt */
#define AT91C_US_COMM_TX      ((unsigned int) 0x1 << 30) /* (DBGU) COMM_TX Interrupt */
#define AT91C_US_COMM_RX      ((unsigned int) 0x1 << 31) /* (DBGU) COMM_RX Interrupt */
/* -------- DBGU_IDR : (DBGU Offset: 0xc) Debug Unit Interrupt Disable Register --------  */
/* -------- DBGU_IMR : (DBGU Offset: 0x10) Debug Unit Interrupt Mask Register --------  */
/* -------- DBGU_CSR : (DBGU Offset: 0x14) Debug Unit Channel Status Register --------  */
/* -------- DBGU_FNTR : (DBGU Offset: 0x48) Debug Unit FORCE_NTRST Register --------  */
#define AT91C_US_FORCE_NTRST  ((unsigned int) 0x1 <<  0) /* (DBGU) Force NTRST in JTAG */


/* ========== Register definition for PDC_DBGU peripheral ==========  */
#define AT91C_DBGU_TNCR ((AT91_REG *) 	0xFFFFF31C) /* (PDC_DBGU) Transmit Next Counter Register */
#define AT91C_DBGU_RNCR ((AT91_REG *) 	0xFFFFF314) /* (PDC_DBGU) Receive Next Counter Register */
#define AT91C_DBGU_PTCR ((AT91_REG *) 	0xFFFFF320) /* (PDC_DBGU) PDC Transfer Control Register */
#define AT91C_DBGU_PTSR ((AT91_REG *) 	0xFFFFF324) /* (PDC_DBGU) PDC Transfer Status Register */
#define AT91C_DBGU_RCR  ((AT91_REG *) 	0xFFFFF304) /* (PDC_DBGU) Receive Counter Register */
#define AT91C_DBGU_TCR  ((AT91_REG *) 	0xFFFFF30C) /* (PDC_DBGU) Transmit Counter Register */
#define AT91C_DBGU_RPR  ((AT91_REG *) 	0xFFFFF300) /* (PDC_DBGU) Receive Pointer Register */
#define AT91C_DBGU_TPR  ((AT91_REG *) 	0xFFFFF308) /* (PDC_DBGU) Transmit Pointer Register */
#define AT91C_DBGU_RNPR ((AT91_REG *) 	0xFFFFF310) /* (PDC_DBGU) Receive Next Pointer Register */
#define AT91C_DBGU_TNPR ((AT91_REG *) 	0xFFFFF318) /* (PDC_DBGU) Transmit Next Pointer Register */
/* ========== Register definition for DBGU peripheral ==========  */
#define AT91C_DBGU_EXID ((AT91_REG *) 	0xFFFFF244) /* (DBGU) Chip ID Extension Register */
#define AT91C_DBGU_THR  ((AT91_REG *) 	0xFFFFF21C) /* (DBGU) Transmitter Holding Register */
#define AT91C_DBGU_CSR  ((AT91_REG *) 	0xFFFFF214) /* (DBGU) Channel Status Register */
#define AT91C_DBGU_IDR  ((AT91_REG *) 	0xFFFFF20C) /* (DBGU) Interrupt Disable Register */
#define AT91C_DBGU_MR   ((AT91_REG *) 	0xFFFFF204) /* (DBGU) Mode Register */
#define AT91C_DBGU_FNTR ((AT91_REG *) 	0xFFFFF248) /* (DBGU) Force NTRST Register */
#define AT91C_DBGU_CIDR ((AT91_REG *) 	0xFFFFF240) /* (DBGU) Chip ID Register */
#define AT91C_DBGU_BRGR ((AT91_REG *) 	0xFFFFF220) /* (DBGU) Baud Rate Generator Register */
#define AT91C_DBGU_RHR  ((AT91_REG *) 	0xFFFFF218) /* (DBGU) Receiver Holding Register */
#define AT91C_DBGU_IMR  ((AT91_REG *) 	0xFFFFF210) /* (DBGU) Interrupt Mask Register */
#define AT91C_DBGU_IER  ((AT91_REG *) 	0xFFFFF208) /* (DBGU) Interrupt Enable Register */
#define AT91C_DBGU_CR   ((AT91_REG *) 	0xFFFFF200) /* (DBGU) Control Register */
#endif
