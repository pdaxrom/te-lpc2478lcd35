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

#ifndef AT91SAM9260_AT91_UDP_H
#define AT91SAM9260_AT91_UDP_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR USB Device Interface */
/* ***************************************************************************** */
typedef struct _AT91S_UDP {
	AT91_REG	 UDP_NUM; 	/* Frame Number Register */
	AT91_REG	 UDP_GLBSTATE; 	/* Global State Register */
	AT91_REG	 UDP_FADDR; 	/* Function Address Register */
	AT91_REG	 Reserved0[1]; 	/*  */
	AT91_REG	 UDP_IER; 	/* Interrupt Enable Register */
	AT91_REG	 UDP_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 UDP_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 UDP_ISR; 	/* Interrupt Status Register */
	AT91_REG	 UDP_ICR; 	/* Interrupt Clear Register */
	AT91_REG	 Reserved1[1]; 	/*  */
	AT91_REG	 UDP_RSTEP; 	/* Reset Endpoint Register */
	AT91_REG	 Reserved2[1]; 	/*  */
	AT91_REG	 UDP_CSR[6]; 	/* Endpoint Control and Status Register */
	AT91_REG	 Reserved3[2]; 	/*  */
	AT91_REG	 UDP_FDR[6]; 	/* Endpoint FIFO Data Register */
	AT91_REG	 Reserved4[3]; 	/*  */
	AT91_REG	 UDP_TXVC; 	/* Transceiver Control Register */
} AT91S_UDP, *AT91PS_UDP;

/* -------- UDP_FRM_NUM : (UDP Offset: 0x0) USB Frame Number Register --------  */
#define AT91C_UDP_FRM_NUM     ((unsigned int) 0x7FF <<  0) /* (UDP) Frame Number as Defined in the Packet Field Formats */
#define AT91C_UDP_FRM_ERR     ((unsigned int) 0x1 << 16) /* (UDP) Frame Error */
#define AT91C_UDP_FRM_OK      ((unsigned int) 0x1 << 17) /* (UDP) Frame OK */
/* -------- UDP_GLB_STATE : (UDP Offset: 0x4) USB Global State Register --------  */
#define AT91C_UDP_FADDEN      ((unsigned int) 0x1 <<  0) /* (UDP) Function Address Enable */
#define AT91C_UDP_CONFG       ((unsigned int) 0x1 <<  1) /* (UDP) Configured */
#define AT91C_UDP_ESR         ((unsigned int) 0x1 <<  2) /* (UDP) Enable Send Resume */
#define AT91C_UDP_RSMINPR     ((unsigned int) 0x1 <<  3) /* (UDP) A Resume Has Been Sent to the Host */
#define AT91C_UDP_RMWUPE      ((unsigned int) 0x1 <<  4) /* (UDP) Remote Wake Up Enable */
/* -------- UDP_FADDR : (UDP Offset: 0x8) USB Function Address Register --------  */
#define AT91C_UDP_FADD        ((unsigned int) 0xFF <<  0) /* (UDP) Function Address Value */
#define AT91C_UDP_FEN         ((unsigned int) 0x1 <<  8) /* (UDP) Function Enable */
/* -------- UDP_IER : (UDP Offset: 0x10) USB Interrupt Enable Register --------  */
#define AT91C_UDP_EPINT0      ((unsigned int) 0x1 <<  0) /* (UDP) Endpoint 0 Interrupt */
#define AT91C_UDP_EPINT1      ((unsigned int) 0x1 <<  1) /* (UDP) Endpoint 0 Interrupt */
#define AT91C_UDP_EPINT2      ((unsigned int) 0x1 <<  2) /* (UDP) Endpoint 2 Interrupt */
#define AT91C_UDP_EPINT3      ((unsigned int) 0x1 <<  3) /* (UDP) Endpoint 3 Interrupt */
#define AT91C_UDP_EPINT4      ((unsigned int) 0x1 <<  4) /* (UDP) Endpoint 4 Interrupt */
#define AT91C_UDP_EPINT5      ((unsigned int) 0x1 <<  5) /* (UDP) Endpoint 5 Interrupt */
#define AT91C_UDP_RXSUSP      ((unsigned int) 0x1 <<  8) /* (UDP) USB Suspend Interrupt */
#define AT91C_UDP_RXRSM       ((unsigned int) 0x1 <<  9) /* (UDP) USB Resume Interrupt */
#define AT91C_UDP_EXTRSM      ((unsigned int) 0x1 << 10) /* (UDP) USB External Resume Interrupt */
#define AT91C_UDP_SOFINT      ((unsigned int) 0x1 << 11) /* (UDP) USB Start Of frame Interrupt */
#define AT91C_UDP_WAKEUP      ((unsigned int) 0x1 << 13) /* (UDP) USB Resume Interrupt */
/* -------- UDP_IDR : (UDP Offset: 0x14) USB Interrupt Disable Register --------  */
/* -------- UDP_IMR : (UDP Offset: 0x18) USB Interrupt Mask Register --------  */
/* -------- UDP_ISR : (UDP Offset: 0x1c) USB Interrupt Status Register --------  */
#define AT91C_UDP_ENDBUSRES   ((unsigned int) 0x1 << 12) /* (UDP) USB End Of Bus Reset Interrupt */
/* -------- UDP_ICR : (UDP Offset: 0x20) USB Interrupt Clear Register --------  */
/* -------- UDP_RST_EP : (UDP Offset: 0x28) USB Reset Endpoint Register --------  */
#define AT91C_UDP_EP0         ((unsigned int) 0x1 <<  0) /* (UDP) Reset Endpoint 0 */
#define AT91C_UDP_EP1         ((unsigned int) 0x1 <<  1) /* (UDP) Reset Endpoint 1 */
#define AT91C_UDP_EP2         ((unsigned int) 0x1 <<  2) /* (UDP) Reset Endpoint 2 */
#define AT91C_UDP_EP3         ((unsigned int) 0x1 <<  3) /* (UDP) Reset Endpoint 3 */
#define AT91C_UDP_EP4         ((unsigned int) 0x1 <<  4) /* (UDP) Reset Endpoint 4 */
#define AT91C_UDP_EP5         ((unsigned int) 0x1 <<  5) /* (UDP) Reset Endpoint 5 */
/* -------- UDP_CSR : (UDP Offset: 0x30) USB Endpoint Control and Status Register --------  */
#define AT91C_UDP_TXCOMP      ((unsigned int) 0x1 <<  0) /* (UDP) Generates an IN packet with data previously written in the DPR */
#define AT91C_UDP_RX_DATA_BK0 ((unsigned int) 0x1 <<  1) /* (UDP) Receive Data Bank 0 */
#define AT91C_UDP_RXSETUP     ((unsigned int) 0x1 <<  2) /* (UDP) Sends STALL to the Host (Control endpoints) */
#define AT91C_UDP_ISOERROR    ((unsigned int) 0x1 <<  3) /* (UDP) Isochronous error (Isochronous endpoints) */
#define AT91C_UDP_TXPKTRDY    ((unsigned int) 0x1 <<  4) /* (UDP) Transmit Packet Ready */
#define AT91C_UDP_FORCESTALL  ((unsigned int) 0x1 <<  5) /* (UDP) Force Stall (used by Control, Bulk and Isochronous endpoints). */
#define AT91C_UDP_RX_DATA_BK1 ((unsigned int) 0x1 <<  6) /* (UDP) Receive Data Bank 1 (only used by endpoints with ping-pong attributes). */
#define AT91C_UDP_DIR         ((unsigned int) 0x1 <<  7) /* (UDP) Transfer Direction */
#define AT91C_UDP_EPTYPE      ((unsigned int) 0x7 <<  8) /* (UDP) Endpoint type */
#define 	AT91C_UDP_EPTYPE_CTRL                 ((unsigned int) 0x0 <<  8) /* (UDP) Control */
#define 	AT91C_UDP_EPTYPE_ISO_OUT              ((unsigned int) 0x1 <<  8) /* (UDP) Isochronous OUT */
#define 	AT91C_UDP_EPTYPE_BULK_OUT             ((unsigned int) 0x2 <<  8) /* (UDP) Bulk OUT */
#define 	AT91C_UDP_EPTYPE_INT_OUT              ((unsigned int) 0x3 <<  8) /* (UDP) Interrupt OUT */
#define 	AT91C_UDP_EPTYPE_ISO_IN               ((unsigned int) 0x5 <<  8) /* (UDP) Isochronous IN */
#define 	AT91C_UDP_EPTYPE_BULK_IN              ((unsigned int) 0x6 <<  8) /* (UDP) Bulk IN */
#define 	AT91C_UDP_EPTYPE_INT_IN               ((unsigned int) 0x7 <<  8) /* (UDP) Interrupt IN */
#define AT91C_UDP_DTGLE       ((unsigned int) 0x1 << 11) /* (UDP) Data Toggle */
#define AT91C_UDP_EPEDS       ((unsigned int) 0x1 << 15) /* (UDP) Endpoint Enable Disable */
#define AT91C_UDP_RXBYTECNT   ((unsigned int) 0x7FF << 16) /* (UDP) Number Of Bytes Available in the FIFO */
/* -------- UDP_TXVC : (UDP Offset: 0x74) Transceiver Control Register --------  */
#define AT91C_UDP_TXVDIS      ((unsigned int) 0x1 <<  8) /* (UDP)  */
#define AT91C_UDP_PUON        ((unsigned int) 0x1 <<  9) /* (UDP) Pull-up ON */

/* ========== Register definition for UDP peripheral ==========  */
#define AT91C_UDP_FDR   ((AT91_REG *) 	0xFFFA4050) /* (UDP) Endpoint FIFO Data Register */
#define AT91C_UDP_IER   ((AT91_REG *) 	0xFFFA4010) /* (UDP) Interrupt Enable Register */
#define AT91C_UDP_FADDR ((AT91_REG *) 	0xFFFA4008) /* (UDP) Function Address Register */
#define AT91C_UDP_NUM   ((AT91_REG *) 	0xFFFA4000) /* (UDP) Frame Number Register */
#define AT91C_UDP_TXVC  ((AT91_REG *) 	0xFFFA4074) /* (UDP) Transceiver Control Register */
#define AT91C_UDP_GLBSTATE ((AT91_REG *) 	0xFFFA4004) /* (UDP) Global State Register */
#define AT91C_UDP_IDR   ((AT91_REG *) 	0xFFFA4014) /* (UDP) Interrupt Disable Register */
#define AT91C_UDP_ISR   ((AT91_REG *) 	0xFFFA401C) /* (UDP) Interrupt Status Register */
#define AT91C_UDP_CSR   ((AT91_REG *) 	0xFFFA4030) /* (UDP) Endpoint Control and Status Register */
#define AT91C_UDP_RSTEP ((AT91_REG *) 	0xFFFA4028) /* (UDP) Reset Endpoint Register */
#define AT91C_UDP_IMR   ((AT91_REG *) 	0xFFFA4018) /* (UDP) Interrupt Mask Register */
#define AT91C_UDP_ICR   ((AT91_REG *) 	0xFFFA4020) /* (UDP) Interrupt Clear Register */

#endif
