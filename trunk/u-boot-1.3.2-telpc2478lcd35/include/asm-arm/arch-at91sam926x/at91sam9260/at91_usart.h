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

#ifndef AT91SAM9260_AT91_USART_H
#define AT91SAM9260_AT91_USART_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Usart */
/* ***************************************************************************** */
typedef struct _AT91S_USART {
	AT91_REG	 US_CR; 	/* Control Register */
	AT91_REG	 US_MR; 	/* Mode Register */
	AT91_REG	 US_IER; 	/* Interrupt Enable Register */
	AT91_REG	 US_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 US_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 US_CSR; 	/* Channel Status Register */
	AT91_REG	 US_RHR; 	/* Receiver Holding Register */
	AT91_REG	 US_THR; 	/* Transmitter Holding Register */
	AT91_REG	 US_BRGR; 	/* Baud Rate Generator Register */
	AT91_REG	 US_RTOR; 	/* Receiver Time-out Register */
	AT91_REG	 US_TTGR; 	/* Transmitter Time-guard Register */
	AT91_REG	 Reserved0[5]; 	/*  */
	AT91_REG	 US_FIDI; 	/* FI_DI_Ratio Register */
	AT91_REG	 US_NER; 	/* Nb Errors Register */
	AT91_REG	 Reserved1[1]; 	/*  */
	AT91_REG	 US_IF; 	/* IRDA_FILTER Register */
	AT91_REG	 Reserved2[44]; 	/*  */
	AT91_REG	 US_RPR; 	/* Receive Pointer Register */
	AT91_REG	 US_RCR; 	/* Receive Counter Register */
	AT91_REG	 US_TPR; 	/* Transmit Pointer Register */
	AT91_REG	 US_TCR; 	/* Transmit Counter Register */
	AT91_REG	 US_RNPR; 	/* Receive Next Pointer Register */
	AT91_REG	 US_RNCR; 	/* Receive Next Counter Register */
	AT91_REG	 US_TNPR; 	/* Transmit Next Pointer Register */
	AT91_REG	 US_TNCR; 	/* Transmit Next Counter Register */
	AT91_REG	 US_PTCR; 	/* PDC Transfer Control Register */
	AT91_REG	 US_PTSR; 	/* PDC Transfer Status Register */
} AT91S_USART, *AT91PS_USART;

/* -------- US_CR : (USART Offset: 0x0) Debug Unit Control Register --------  */
#define AT91C_US_STTBRK       ((unsigned int) 0x1 <<  9) /* (USART) Start Break */
#define AT91C_US_STPBRK       ((unsigned int) 0x1 << 10) /* (USART) Stop Break */
#define AT91C_US_STTTO        ((unsigned int) 0x1 << 11) /* (USART) Start Time-out */
#define AT91C_US_SENDA        ((unsigned int) 0x1 << 12) /* (USART) Send Address */
#define AT91C_US_RSTIT        ((unsigned int) 0x1 << 13) /* (USART) Reset Iterations */
#define AT91C_US_RSTNACK      ((unsigned int) 0x1 << 14) /* (USART) Reset Non Acknowledge */
#define AT91C_US_RETTO        ((unsigned int) 0x1 << 15) /* (USART) Rearm Time-out */
#define AT91C_US_DTREN        ((unsigned int) 0x1 << 16) /* (USART) Data Terminal ready Enable */
#define AT91C_US_DTRDIS       ((unsigned int) 0x1 << 17) /* (USART) Data Terminal ready Disable */
#define AT91C_US_RTSEN        ((unsigned int) 0x1 << 18) /* (USART) Request to Send enable */
#define AT91C_US_RTSDIS       ((unsigned int) 0x1 << 19) /* (USART) Request to Send Disable */
/* -------- US_MR : (USART Offset: 0x4) Debug Unit Mode Register --------  */
#define AT91C_US_USMODE       ((unsigned int) 0xF <<  0) /* (USART) Usart mode */
#define 	AT91C_US_USMODE_NORMAL               ((unsigned int) 0x0) /* (USART) Normal */
#define 	AT91C_US_USMODE_RS485                ((unsigned int) 0x1) /* (USART) RS485 */
#define 	AT91C_US_USMODE_HWHSH                ((unsigned int) 0x2) /* (USART) Hardware Handshaking */
#define 	AT91C_US_USMODE_MODEM                ((unsigned int) 0x3) /* (USART) Modem */
#define 	AT91C_US_USMODE_ISO7816_0            ((unsigned int) 0x4) /* (USART) ISO7816 protocol: T = 0 */
#define 	AT91C_US_USMODE_ISO7816_1            ((unsigned int) 0x6) /* (USART) ISO7816 protocol: T = 1 */
#define 	AT91C_US_USMODE_IRDA                 ((unsigned int) 0x8) /* (USART) IrDA */
#define 	AT91C_US_USMODE_SWHSH                ((unsigned int) 0xC) /* (USART) Software Handshaking */
#define AT91C_US_CLKS         ((unsigned int) 0x3 <<  4) /* (USART) Clock Selection (Baud Rate generator Input Clock */
#define 	AT91C_US_CLKS_CLOCK                ((unsigned int) 0x0 <<  4) /* (USART) Clock */
#define 	AT91C_US_CLKS_FDIV1                ((unsigned int) 0x1 <<  4) /* (USART) fdiv1 */
#define 	AT91C_US_CLKS_SLOW                 ((unsigned int) 0x2 <<  4) /* (USART) slow_clock (ARM) */
#define 	AT91C_US_CLKS_EXT                  ((unsigned int) 0x3 <<  4) /* (USART) External (SCK) */
#define AT91C_US_CHRL         ((unsigned int) 0x3 <<  6) /* (USART) Clock Selection (Baud Rate generator Input Clock */
#define 	AT91C_US_CHRL_5_BITS               ((unsigned int) 0x0 <<  6) /* (USART) Character Length: 5 bits */
#define 	AT91C_US_CHRL_6_BITS               ((unsigned int) 0x1 <<  6) /* (USART) Character Length: 6 bits */
#define 	AT91C_US_CHRL_7_BITS               ((unsigned int) 0x2 <<  6) /* (USART) Character Length: 7 bits */
#define 	AT91C_US_CHRL_8_BITS               ((unsigned int) 0x3 <<  6) /* (USART) Character Length: 8 bits */
#define AT91C_US_SYNC         ((unsigned int) 0x1 <<  8) /* (USART) Synchronous Mode Select */
#define AT91C_US_NBSTOP       ((unsigned int) 0x3 << 12) /* (USART) Number of Stop bits */
#define 	AT91C_US_NBSTOP_1_BIT                ((unsigned int) 0x0 << 12) /* (USART) 1 stop bit */
#define 	AT91C_US_NBSTOP_15_BIT               ((unsigned int) 0x1 << 12) /* (USART) Asynchronous (SYNC=0) 2 stop bits Synchronous (SYNC=1) 2 stop bits */
#define 	AT91C_US_NBSTOP_2_BIT                ((unsigned int) 0x2 << 12) /* (USART) 2 stop bits */
#define AT91C_US_MSBF         ((unsigned int) 0x1 << 16) /* (USART) Bit Order */
#define AT91C_US_MODE9        ((unsigned int) 0x1 << 17) /* (USART) 9-bit Character length */
#define AT91C_US_CKLO         ((unsigned int) 0x1 << 18) /* (USART) Clock Output Select */
#define AT91C_US_OVER         ((unsigned int) 0x1 << 19) /* (USART) Over Sampling Mode */
#define AT91C_US_INACK        ((unsigned int) 0x1 << 20) /* (USART) Inhibit Non Acknowledge */
#define AT91C_US_DSNACK       ((unsigned int) 0x1 << 21) /* (USART) Disable Successive NACK */
#define AT91C_US_MAX_ITER     ((unsigned int) 0x1 << 24) /* (USART) Number of Repetitions */
#define AT91C_US_FILTER       ((unsigned int) 0x1 << 28) /* (USART) Receive Line Filter */
/* -------- US_IER : (USART Offset: 0x8) Debug Unit Interrupt Enable Register --------  */
#define AT91C_US_RXBRK        ((unsigned int) 0x1 <<  2) /* (USART) Break Received/End of Break */
#define AT91C_US_TIMEOUT      ((unsigned int) 0x1 <<  8) /* (USART) Receiver Time-out */
#define AT91C_US_ITERATION    ((unsigned int) 0x1 << 10) /* (USART) Max number of Repetitions Reached */
#define AT91C_US_NACK         ((unsigned int) 0x1 << 13) /* (USART) Non Acknowledge */
#define AT91C_US_RIIC         ((unsigned int) 0x1 << 16) /* (USART) Ring INdicator Input Change Flag */
#define AT91C_US_DSRIC        ((unsigned int) 0x1 << 17) /* (USART) Data Set Ready Input Change Flag */
#define AT91C_US_DCDIC        ((unsigned int) 0x1 << 18) /* (USART) Data Carrier Flag */
#define AT91C_US_CTSIC        ((unsigned int) 0x1 << 19) /* (USART) Clear To Send Input Change Flag */
/* -------- US_IDR : (USART Offset: 0xc) Debug Unit Interrupt Disable Register --------  */
/* -------- US_IMR : (USART Offset: 0x10) Debug Unit Interrupt Mask Register --------  */
/* -------- US_CSR : (USART Offset: 0x14) Debug Unit Channel Status Register --------  */
#define AT91C_US_RI           ((unsigned int) 0x1 << 20) /* (USART) Image of RI Input */
#define AT91C_US_DSR          ((unsigned int) 0x1 << 21) /* (USART) Image of DSR Input */
#define AT91C_US_DCD          ((unsigned int) 0x1 << 22) /* (USART) Image of DCD Input */
#define AT91C_US_CTS          ((unsigned int) 0x1 << 23) /* (USART) Image of CTS Input */

/* ========== Register definition for PDC_US0 peripheral ==========  */
#define AT91C_US0_TNCR  ((AT91_REG *) 	0xFFFB011C) /* (PDC_US0) Transmit Next Counter Register */
#define AT91C_US0_RNCR  ((AT91_REG *) 	0xFFFB0114) /* (PDC_US0) Receive Next Counter Register */
#define AT91C_US0_TCR   ((AT91_REG *) 	0xFFFB010C) /* (PDC_US0) Transmit Counter Register */
#define AT91C_US0_RCR   ((AT91_REG *) 	0xFFFB0104) /* (PDC_US0) Receive Counter Register */
#define AT91C_US0_PTCR  ((AT91_REG *) 	0xFFFB0120) /* (PDC_US0) PDC Transfer Control Register */
#define AT91C_US0_TNPR  ((AT91_REG *) 	0xFFFB0118) /* (PDC_US0) Transmit Next Pointer Register */
#define AT91C_US0_RNPR  ((AT91_REG *) 	0xFFFB0110) /* (PDC_US0) Receive Next Pointer Register */
#define AT91C_US0_PTSR  ((AT91_REG *) 	0xFFFB0124) /* (PDC_US0) PDC Transfer Status Register */
#define AT91C_US0_RPR   ((AT91_REG *) 	0xFFFB0100) /* (PDC_US0) Receive Pointer Register */
#define AT91C_US0_TPR   ((AT91_REG *) 	0xFFFB0108) /* (PDC_US0) Transmit Pointer Register */
/* ========== Register definition for US0 peripheral ==========  */
#define AT91C_US0_IF    ((AT91_REG *) 	0xFFFB004C) /* (US0) IRDA_FILTER Register */
#define AT91C_US0_NER   ((AT91_REG *) 	0xFFFB0044) /* (US0) Nb Errors Register */
#define AT91C_US0_RTOR  ((AT91_REG *) 	0xFFFB0024) /* (US0) Receiver Time-out Register */
#define AT91C_US0_THR   ((AT91_REG *) 	0xFFFB001C) /* (US0) Transmitter Holding Register */
#define AT91C_US0_CSR   ((AT91_REG *) 	0xFFFB0014) /* (US0) Channel Status Register */
#define AT91C_US0_IDR   ((AT91_REG *) 	0xFFFB000C) /* (US0) Interrupt Disable Register */
#define AT91C_US0_MR    ((AT91_REG *) 	0xFFFB0004) /* (US0) Mode Register */
#define AT91C_US0_FIDI  ((AT91_REG *) 	0xFFFB0040) /* (US0) FI_DI_Ratio Register */
#define AT91C_US0_TTGR  ((AT91_REG *) 	0xFFFB0028) /* (US0) Transmitter Time-guard Register */
#define AT91C_US0_BRGR  ((AT91_REG *) 	0xFFFB0020) /* (US0) Baud Rate Generator Register */
#define AT91C_US0_RHR   ((AT91_REG *) 	0xFFFB0018) /* (US0) Receiver Holding Register */
#define AT91C_US0_IMR   ((AT91_REG *) 	0xFFFB0010) /* (US0) Interrupt Mask Register */
#define AT91C_US0_IER   ((AT91_REG *) 	0xFFFB0008) /* (US0) Interrupt Enable Register */
#define AT91C_US0_CR    ((AT91_REG *) 	0xFFFB0000) /* (US0) Control Register */
/* ========== Register definition for PDC_US1 peripheral ==========  */
#define AT91C_US1_PTCR  ((AT91_REG *) 	0xFFFB4120) /* (PDC_US1) PDC Transfer Control Register */
#define AT91C_US1_TNPR  ((AT91_REG *) 	0xFFFB4118) /* (PDC_US1) Transmit Next Pointer Register */
#define AT91C_US1_RNPR  ((AT91_REG *) 	0xFFFB4110) /* (PDC_US1) Receive Next Pointer Register */
#define AT91C_US1_TPR   ((AT91_REG *) 	0xFFFB4108) /* (PDC_US1) Transmit Pointer Register */
#define AT91C_US1_RPR   ((AT91_REG *) 	0xFFFB4100) /* (PDC_US1) Receive Pointer Register */
#define AT91C_US1_PTSR  ((AT91_REG *) 	0xFFFB4124) /* (PDC_US1) PDC Transfer Status Register */
#define AT91C_US1_TNCR  ((AT91_REG *) 	0xFFFB411C) /* (PDC_US1) Transmit Next Counter Register */
#define AT91C_US1_RNCR  ((AT91_REG *) 	0xFFFB4114) /* (PDC_US1) Receive Next Counter Register */
#define AT91C_US1_TCR   ((AT91_REG *) 	0xFFFB410C) /* (PDC_US1) Transmit Counter Register */
#define AT91C_US1_RCR   ((AT91_REG *) 	0xFFFB4104) /* (PDC_US1) Receive Counter Register */
/* ========== Register definition for US1 peripheral ==========  */
#define AT91C_US1_FIDI  ((AT91_REG *) 	0xFFFB4040) /* (US1) FI_DI_Ratio Register */
#define AT91C_US1_TTGR  ((AT91_REG *) 	0xFFFB4028) /* (US1) Transmitter Time-guard Register */
#define AT91C_US1_BRGR  ((AT91_REG *) 	0xFFFB4020) /* (US1) Baud Rate Generator Register */
#define AT91C_US1_RHR   ((AT91_REG *) 	0xFFFB4018) /* (US1) Receiver Holding Register */
#define AT91C_US1_IMR   ((AT91_REG *) 	0xFFFB4010) /* (US1) Interrupt Mask Register */
#define AT91C_US1_IER   ((AT91_REG *) 	0xFFFB4008) /* (US1) Interrupt Enable Register */
#define AT91C_US1_CR    ((AT91_REG *) 	0xFFFB4000) /* (US1) Control Register */
#define AT91C_US1_IF    ((AT91_REG *) 	0xFFFB404C) /* (US1) IRDA_FILTER Register */
#define AT91C_US1_NER   ((AT91_REG *) 	0xFFFB4044) /* (US1) Nb Errors Register */
#define AT91C_US1_RTOR  ((AT91_REG *) 	0xFFFB4024) /* (US1) Receiver Time-out Register */
#define AT91C_US1_THR   ((AT91_REG *) 	0xFFFB401C) /* (US1) Transmitter Holding Register */
#define AT91C_US1_CSR   ((AT91_REG *) 	0xFFFB4014) /* (US1) Channel Status Register */
#define AT91C_US1_IDR   ((AT91_REG *) 	0xFFFB400C) /* (US1) Interrupt Disable Register */
#define AT91C_US1_MR    ((AT91_REG *) 	0xFFFB4004) /* (US1) Mode Register */
/* ========== Register definition for PDC_US2 peripheral ==========  */
#define AT91C_US2_PTSR  ((AT91_REG *) 	0xFFFB8124) /* (PDC_US2) PDC Transfer Status Register */
#define AT91C_US2_TNCR  ((AT91_REG *) 	0xFFFB811C) /* (PDC_US2) Transmit Next Counter Register */
#define AT91C_US2_RNCR  ((AT91_REG *) 	0xFFFB8114) /* (PDC_US2) Receive Next Counter Register */
#define AT91C_US2_TCR   ((AT91_REG *) 	0xFFFB810C) /* (PDC_US2) Transmit Counter Register */
#define AT91C_US2_RCR   ((AT91_REG *) 	0xFFFB8104) /* (PDC_US2) Receive Counter Register */
#define AT91C_US2_PTCR  ((AT91_REG *) 	0xFFFB8120) /* (PDC_US2) PDC Transfer Control Register */
#define AT91C_US2_TNPR  ((AT91_REG *) 	0xFFFB8118) /* (PDC_US2) Transmit Next Pointer Register */
#define AT91C_US2_RNPR  ((AT91_REG *) 	0xFFFB8110) /* (PDC_US2) Receive Next Pointer Register */
#define AT91C_US2_TPR   ((AT91_REG *) 	0xFFFB8108) /* (PDC_US2) Transmit Pointer Register */
#define AT91C_US2_RPR   ((AT91_REG *) 	0xFFFB8100) /* (PDC_US2) Receive Pointer Register */
/* ========== Register definition for US2 peripheral ==========  */
#define AT91C_US2_FIDI  ((AT91_REG *) 	0xFFFB8040) /* (US2) FI_DI_Ratio Register */
#define AT91C_US2_TTGR  ((AT91_REG *) 	0xFFFB8028) /* (US2) Transmitter Time-guard Register */
#define AT91C_US2_BRGR  ((AT91_REG *) 	0xFFFB8020) /* (US2) Baud Rate Generator Register */
#define AT91C_US2_RHR   ((AT91_REG *) 	0xFFFB8018) /* (US2) Receiver Holding Register */
#define AT91C_US2_IMR   ((AT91_REG *) 	0xFFFB8010) /* (US2) Interrupt Mask Register */
#define AT91C_US2_IER   ((AT91_REG *) 	0xFFFB8008) /* (US2) Interrupt Enable Register */
#define AT91C_US2_CR    ((AT91_REG *) 	0xFFFB8000) /* (US2) Control Register */
#define AT91C_US2_IF    ((AT91_REG *) 	0xFFFB804C) /* (US2) IRDA_FILTER Register */
#define AT91C_US2_NER   ((AT91_REG *) 	0xFFFB8044) /* (US2) Nb Errors Register */
#define AT91C_US2_RTOR  ((AT91_REG *) 	0xFFFB8024) /* (US2) Receiver Time-out Register */
#define AT91C_US2_THR   ((AT91_REG *) 	0xFFFB801C) /* (US2) Transmitter Holding Register */
#define AT91C_US2_CSR   ((AT91_REG *) 	0xFFFB8014) /* (US2) Channel Status Register */
#define AT91C_US2_IDR   ((AT91_REG *) 	0xFFFB800C) /* (US2) Interrupt Disable Register */
#define AT91C_US2_MR    ((AT91_REG *) 	0xFFFB8004) /* (US2) Mode Register */
/* ========== Register definition for PDC_US3 peripheral ==========  */
#define AT91C_US3_PTCR  ((AT91_REG *) 	0xFFFD0120) /* (PDC_US3) PDC Transfer Control Register */
#define AT91C_US3_TNPR  ((AT91_REG *) 	0xFFFD0118) /* (PDC_US3) Transmit Next Pointer Register */
#define AT91C_US3_RNPR  ((AT91_REG *) 	0xFFFD0110) /* (PDC_US3) Receive Next Pointer Register */
#define AT91C_US3_TPR   ((AT91_REG *) 	0xFFFD0108) /* (PDC_US3) Transmit Pointer Register */
#define AT91C_US3_RPR   ((AT91_REG *) 	0xFFFD0100) /* (PDC_US3) Receive Pointer Register */
#define AT91C_US3_PTSR  ((AT91_REG *) 	0xFFFD0124) /* (PDC_US3) PDC Transfer Status Register */
#define AT91C_US3_TNCR  ((AT91_REG *) 	0xFFFD011C) /* (PDC_US3) Transmit Next Counter Register */
#define AT91C_US3_RNCR  ((AT91_REG *) 	0xFFFD0114) /* (PDC_US3) Receive Next Counter Register */
#define AT91C_US3_TCR   ((AT91_REG *) 	0xFFFD010C) /* (PDC_US3) Transmit Counter Register */
#define AT91C_US3_RCR   ((AT91_REG *) 	0xFFFD0104) /* (PDC_US3) Receive Counter Register */
/* ========== Register definition for US3 peripheral ==========  */
#define AT91C_US3_IF    ((AT91_REG *) 	0xFFFD004C) /* (US3) IRDA_FILTER Register */
#define AT91C_US3_NER   ((AT91_REG *) 	0xFFFD0044) /* (US3) Nb Errors Register */
#define AT91C_US3_RTOR  ((AT91_REG *) 	0xFFFD0024) /* (US3) Receiver Time-out Register */
#define AT91C_US3_THR   ((AT91_REG *) 	0xFFFD001C) /* (US3) Transmitter Holding Register */
#define AT91C_US3_CSR   ((AT91_REG *) 	0xFFFD0014) /* (US3) Channel Status Register */
#define AT91C_US3_IDR   ((AT91_REG *) 	0xFFFD000C) /* (US3) Interrupt Disable Register */
#define AT91C_US3_MR    ((AT91_REG *) 	0xFFFD0004) /* (US3) Mode Register */
#define AT91C_US3_FIDI  ((AT91_REG *) 	0xFFFD0040) /* (US3) FI_DI_Ratio Register */
#define AT91C_US3_TTGR  ((AT91_REG *) 	0xFFFD0028) /* (US3) Transmitter Time-guard Register */
#define AT91C_US3_BRGR  ((AT91_REG *) 	0xFFFD0020) /* (US3) Baud Rate Generator Register */
#define AT91C_US3_RHR   ((AT91_REG *) 	0xFFFD0018) /* (US3) Receiver Holding Register */
#define AT91C_US3_IMR   ((AT91_REG *) 	0xFFFD0010) /* (US3) Interrupt Mask Register */
#define AT91C_US3_IER   ((AT91_REG *) 	0xFFFD0008) /* (US3) Interrupt Enable Register */
#define AT91C_US3_CR    ((AT91_REG *) 	0xFFFD0000) /* (US3) Control Register */
/* ========== Register definition for PDC_US4 peripheral ==========  */
#define AT91C_US4_PTCR  ((AT91_REG *) 	0xFFFD4120) /* (PDC_US4) PDC Transfer Control Register */
#define AT91C_US4_TNPR  ((AT91_REG *) 	0xFFFD4118) /* (PDC_US4) Transmit Next Pointer Register */
#define AT91C_US4_RNPR  ((AT91_REG *) 	0xFFFD4110) /* (PDC_US4) Receive Next Pointer Register */
#define AT91C_US4_TPR   ((AT91_REG *) 	0xFFFD4108) /* (PDC_US4) Transmit Pointer Register */
#define AT91C_US4_RPR   ((AT91_REG *) 	0xFFFD4100) /* (PDC_US4) Receive Pointer Register */
#define AT91C_US4_PTSR  ((AT91_REG *) 	0xFFFD4124) /* (PDC_US4) PDC Transfer Status Register */
#define AT91C_US4_TNCR  ((AT91_REG *) 	0xFFFD411C) /* (PDC_US4) Transmit Next Counter Register */
#define AT91C_US4_RNCR  ((AT91_REG *) 	0xFFFD4114) /* (PDC_US4) Receive Next Counter Register */
#define AT91C_US4_TCR   ((AT91_REG *) 	0xFFFD410C) /* (PDC_US4) Transmit Counter Register */
#define AT91C_US4_RCR   ((AT91_REG *) 	0xFFFD4104) /* (PDC_US4) Receive Counter Register */
/* ========== Register definition for US4 peripheral ==========  */
#define AT91C_US4_CSR   ((AT91_REG *) 	0xFFFD4014) /* (US4) Channel Status Register */
#define AT91C_US4_IDR   ((AT91_REG *) 	0xFFFD400C) /* (US4) Interrupt Disable Register */
#define AT91C_US4_MR    ((AT91_REG *) 	0xFFFD4004) /* (US4) Mode Register */
#define AT91C_US4_TTGR  ((AT91_REG *) 	0xFFFD4028) /* (US4) Transmitter Time-guard Register */
#define AT91C_US4_BRGR  ((AT91_REG *) 	0xFFFD4020) /* (US4) Baud Rate Generator Register */
#define AT91C_US4_RHR   ((AT91_REG *) 	0xFFFD4018) /* (US4) Receiver Holding Register */
#define AT91C_US4_IMR   ((AT91_REG *) 	0xFFFD4010) /* (US4) Interrupt Mask Register */
#define AT91C_US4_NER   ((AT91_REG *) 	0xFFFD4044) /* (US4) Nb Errors Register */
#define AT91C_US4_RTOR  ((AT91_REG *) 	0xFFFD4024) /* (US4) Receiver Time-out Register */
#define AT91C_US4_FIDI  ((AT91_REG *) 	0xFFFD4040) /* (US4) FI_DI_Ratio Register */
#define AT91C_US4_CR    ((AT91_REG *) 	0xFFFD4000) /* (US4) Control Register */
#define AT91C_US4_IER   ((AT91_REG *) 	0xFFFD4008) /* (US4) Interrupt Enable Register */
#define AT91C_US4_IF    ((AT91_REG *) 	0xFFFD404C) /* (US4) IRDA_FILTER Register */
#define AT91C_US4_THR   ((AT91_REG *) 	0xFFFD401C) /* (US4) Transmitter Holding Register */
/* ========== Register definition for PDC_US5 peripheral ==========  */
#define AT91C_US5_PTCR  ((AT91_REG *) 	0xFFFD8120) /* (PDC_US5) PDC Transfer Control Register */
#define AT91C_US5_TNPR  ((AT91_REG *) 	0xFFFD8118) /* (PDC_US5) Transmit Next Pointer Register */
#define AT91C_US5_RNPR  ((AT91_REG *) 	0xFFFD8110) /* (PDC_US5) Receive Next Pointer Register */
#define AT91C_US5_TPR   ((AT91_REG *) 	0xFFFD8108) /* (PDC_US5) Transmit Pointer Register */
#define AT91C_US5_RPR   ((AT91_REG *) 	0xFFFD8100) /* (PDC_US5) Receive Pointer Register */
#define AT91C_US5_PTSR  ((AT91_REG *) 	0xFFFD8124) /* (PDC_US5) PDC Transfer Status Register */
#define AT91C_US5_TNCR  ((AT91_REG *) 	0xFFFD811C) /* (PDC_US5) Transmit Next Counter Register */
#define AT91C_US5_RNCR  ((AT91_REG *) 	0xFFFD8114) /* (PDC_US5) Receive Next Counter Register */
#define AT91C_US5_TCR   ((AT91_REG *) 	0xFFFD810C) /* (PDC_US5) Transmit Counter Register */
#define AT91C_US5_RCR   ((AT91_REG *) 	0xFFFD8104) /* (PDC_US5) Receive Counter Register */
/* ========== Register definition for US5 peripheral ==========  */
#define AT91C_US5_IF    ((AT91_REG *) 	0xFFFD804C) /* (US5) IRDA_FILTER Register */
#define AT91C_US5_NER   ((AT91_REG *) 	0xFFFD8044) /* (US5) Nb Errors Register */
#define AT91C_US5_MR    ((AT91_REG *) 	0xFFFD8004) /* (US5) Mode Register */
#define AT91C_US5_RHR   ((AT91_REG *) 	0xFFFD8018) /* (US5) Receiver Holding Register */
#define AT91C_US5_IMR   ((AT91_REG *) 	0xFFFD8010) /* (US5) Interrupt Mask Register */
#define AT91C_US5_IER   ((AT91_REG *) 	0xFFFD8008) /* (US5) Interrupt Enable Register */
#define AT91C_US5_CR    ((AT91_REG *) 	0xFFFD8000) /* (US5) Control Register */
#define AT91C_US5_IDR   ((AT91_REG *) 	0xFFFD800C) /* (US5) Interrupt Disable Register */
#define AT91C_US5_CSR   ((AT91_REG *) 	0xFFFD8014) /* (US5) Channel Status Register */
#define AT91C_US5_THR   ((AT91_REG *) 	0xFFFD801C) /* (US5) Transmitter Holding Register */
#define AT91C_US5_RTOR  ((AT91_REG *) 	0xFFFD8024) /* (US5) Receiver Time-out Register */
#define AT91C_US5_FIDI  ((AT91_REG *) 	0xFFFD8040) /* (US5) FI_DI_Ratio Register */
#define AT91C_US5_BRGR  ((AT91_REG *) 	0xFFFD8020) /* (US5) Baud Rate Generator Register */
#define AT91C_US5_TTGR  ((AT91_REG *) 	0xFFFD8028) /* (US5) Transmitter Time-guard Register */

#endif
