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

#ifndef AT91SAM9260_AT91_MACB_H
#define AT91SAM9260_AT91_MACB_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Ethernet MAC 10/100 */
/* ***************************************************************************** */
typedef struct _AT91S_EMAC {
	AT91_REG	 EMAC_NCR; 	/* Network Control Register */
	AT91_REG	 EMAC_NCFGR; 	/* Network Configuration Register */
	AT91_REG	 EMAC_NSR; 	/* Network Status Register */
	AT91_REG	 Reserved0[2]; 	/*  */
	AT91_REG	 EMAC_TSR; 	/* Transmit Status Register */
	AT91_REG	 EMAC_RBQP; 	/* Receive Buffer Queue Pointer */
	AT91_REG	 EMAC_TBQP; 	/* Transmit Buffer Queue Pointer */
	AT91_REG	 EMAC_RSR; 	/* Receive Status Register */
	AT91_REG	 EMAC_ISR; 	/* Interrupt Status Register */
	AT91_REG	 EMAC_IER; 	/* Interrupt Enable Register */
	AT91_REG	 EMAC_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 EMAC_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 EMAC_MAN; 	/* PHY Maintenance Register */
	AT91_REG	 EMAC_PTR; 	/* Pause Time Register */
	AT91_REG	 EMAC_PFR; 	/* Pause Frames received Register */
	AT91_REG	 EMAC_FTO; 	/* Frames Transmitted OK Register */
	AT91_REG	 EMAC_SCF; 	/* Single Collision Frame Register */
	AT91_REG	 EMAC_MCF; 	/* Multiple Collision Frame Register */
	AT91_REG	 EMAC_FRO; 	/* Frames Received OK Register */
	AT91_REG	 EMAC_FCSE; 	/* Frame Check Sequence Error Register */
	AT91_REG	 EMAC_ALE; 	/* Alignment Error Register */
	AT91_REG	 EMAC_DTF; 	/* Deferred Transmission Frame Register */
	AT91_REG	 EMAC_LCOL; 	/* Late Collision Register */
	AT91_REG	 EMAC_ECOL; 	/* Excessive Collision Register */
	AT91_REG	 EMAC_TUND; 	/* Transmit Underrun Error Register */
	AT91_REG	 EMAC_CSE; 	/* Carrier Sense Error Register */
	AT91_REG	 EMAC_RRE; 	/* Receive Ressource Error Register */
	AT91_REG	 EMAC_ROV; 	/* Receive Overrun Errors Register */
	AT91_REG	 EMAC_RSE; 	/* Receive Symbol Errors Register */
	AT91_REG	 EMAC_ELE; 	/* Excessive Length Errors Register */
	AT91_REG	 EMAC_RJA; 	/* Receive Jabbers Register */
	AT91_REG	 EMAC_USF; 	/* Undersize Frames Register */
	AT91_REG	 EMAC_STE; 	/* SQE Test Error Register */
	AT91_REG	 EMAC_RLE; 	/* Receive Length Field Mismatch Register */
	AT91_REG	 EMAC_TPF; 	/* Transmitted Pause Frames Register */
	AT91_REG	 EMAC_HRB; 	/* Hash Address Bottom[31:0] */
	AT91_REG	 EMAC_HRT; 	/* Hash Address Top[63:32] */
	AT91_REG	 EMAC_SA1L; 	/* Specific Address 1 Bottom, First 4 bytes */
	AT91_REG	 EMAC_SA1H; 	/* Specific Address 1 Top, Last 2 bytes */
	AT91_REG	 EMAC_SA2L; 	/* Specific Address 2 Bottom, First 4 bytes */
	AT91_REG	 EMAC_SA2H; 	/* Specific Address 2 Top, Last 2 bytes */
	AT91_REG	 EMAC_SA3L; 	/* Specific Address 3 Bottom, First 4 bytes */
	AT91_REG	 EMAC_SA3H; 	/* Specific Address 3 Top, Last 2 bytes */
	AT91_REG	 EMAC_SA4L; 	/* Specific Address 4 Bottom, First 4 bytes */
	AT91_REG	 EMAC_SA4H; 	/* Specific Address 4 Top, Last 2 bytes */
	AT91_REG	 EMAC_TID; 	/* Type ID Checking Register */
	AT91_REG	 EMAC_TPQ; 	/* Transmit Pause Quantum Register */
	AT91_REG	 EMAC_USRIO; 	/* USER Input/Output Register */
	AT91_REG	 EMAC_WOL; 	/* Wake On LAN Register */
	AT91_REG	 Reserved1[13]; 	/*  */
	AT91_REG	 EMAC_REV; 	/* Revision Register */
} AT91S_EMAC, *AT91PS_EMAC;

/* -------- EMAC_NCR : (EMAC Offset: 0x0)  --------  */
#define AT91C_EMAC_LB         ((unsigned int) 0x1 <<  0) /* (EMAC) Loopback. Optional. When set, loopback signal is at high level. */
#define AT91C_EMAC_LLB        ((unsigned int) 0x1 <<  1) /* (EMAC) Loopback local.  */
#define AT91C_EMAC_RE         ((unsigned int) 0x1 <<  2) /* (EMAC) Receive enable.  */
#define AT91C_EMAC_TE         ((unsigned int) 0x1 <<  3) /* (EMAC) Transmit enable.  */
#define AT91C_EMAC_MPE        ((unsigned int) 0x1 <<  4) /* (EMAC) Management port enable.  */
#define AT91C_EMAC_CLRSTAT    ((unsigned int) 0x1 <<  5) /* (EMAC) Clear statistics registers.  */
#define AT91C_EMAC_INCSTAT    ((unsigned int) 0x1 <<  6) /* (EMAC) Increment statistics registers.  */
#define AT91C_EMAC_WESTAT     ((unsigned int) 0x1 <<  7) /* (EMAC) Write enable for statistics registers.  */
#define AT91C_EMAC_BP         ((unsigned int) 0x1 <<  8) /* (EMAC) Back pressure.  */
#define AT91C_EMAC_TSTART     ((unsigned int) 0x1 <<  9) /* (EMAC) Start Transmission.  */
#define AT91C_EMAC_THALT      ((unsigned int) 0x1 << 10) /* (EMAC) Transmission Halt.  */
#define AT91C_EMAC_TPFR       ((unsigned int) 0x1 << 11) /* (EMAC) Transmit pause frame  */
#define AT91C_EMAC_TZQ        ((unsigned int) 0x1 << 12) /* (EMAC) Transmit zero quantum pause frame */
/* -------- EMAC_NCFGR : (EMAC Offset: 0x4) Network Configuration Register --------  */
#define AT91C_EMAC_SPD        ((unsigned int) 0x1 <<  0) /* (EMAC) Speed.  */
#define AT91C_EMAC_FD         ((unsigned int) 0x1 <<  1) /* (EMAC) Full duplex.  */
#define AT91C_EMAC_JFRAME     ((unsigned int) 0x1 <<  3) /* (EMAC) Jumbo Frames.  */
#define AT91C_EMAC_CAF        ((unsigned int) 0x1 <<  4) /* (EMAC) Copy all frames.  */
#define AT91C_EMAC_NBC        ((unsigned int) 0x1 <<  5) /* (EMAC) No broadcast.  */
#define AT91C_EMAC_MTI        ((unsigned int) 0x1 <<  6) /* (EMAC) Multicast hash event enable */
#define AT91C_EMAC_UNI        ((unsigned int) 0x1 <<  7) /* (EMAC) Unicast hash enable.  */
#define AT91C_EMAC_BIG        ((unsigned int) 0x1 <<  8) /* (EMAC) Receive 1522 bytes.  */
#define AT91C_EMAC_EAE        ((unsigned int) 0x1 <<  9) /* (EMAC) External address match enable.  */
#define AT91C_EMAC_CLK        ((unsigned int) 0x3 << 10) /* (EMAC)  */
#define 	AT91C_EMAC_CLK_HCLK_8               ((unsigned int) 0x0 << 10) /* (EMAC) HCLK divided by 8 */
#define 	AT91C_EMAC_CLK_HCLK_16              ((unsigned int) 0x1 << 10) /* (EMAC) HCLK divided by 16 */
#define 	AT91C_EMAC_CLK_HCLK_32              ((unsigned int) 0x2 << 10) /* (EMAC) HCLK divided by 32 */
#define 	AT91C_EMAC_CLK_HCLK_64              ((unsigned int) 0x3 << 10) /* (EMAC) HCLK divided by 64 */
#define AT91C_EMAC_RTY        ((unsigned int) 0x1 << 12) /* (EMAC)  */
#define AT91C_EMAC_PAE        ((unsigned int) 0x1 << 13) /* (EMAC)  */
#define AT91C_EMAC_RBOF       ((unsigned int) 0x3 << 14) /* (EMAC)  */
#define 	AT91C_EMAC_RBOF_OFFSET_0             ((unsigned int) 0x0 << 14) /* (EMAC) no offset from start of receive buffer */
#define 	AT91C_EMAC_RBOF_OFFSET_1             ((unsigned int) 0x1 << 14) /* (EMAC) one byte offset from start of receive buffer */
#define 	AT91C_EMAC_RBOF_OFFSET_2             ((unsigned int) 0x2 << 14) /* (EMAC) two bytes offset from start of receive buffer */
#define 	AT91C_EMAC_RBOF_OFFSET_3             ((unsigned int) 0x3 << 14) /* (EMAC) three bytes offset from start of receive buffer */
#define AT91C_EMAC_RLCE       ((unsigned int) 0x1 << 16) /* (EMAC) Receive Length field Checking Enable */
#define AT91C_EMAC_DRFCS      ((unsigned int) 0x1 << 17) /* (EMAC) Discard Receive FCS */
#define AT91C_EMAC_EFRHD      ((unsigned int) 0x1 << 18) /* (EMAC)  */
#define AT91C_EMAC_IRXFCS     ((unsigned int) 0x1 << 19) /* (EMAC) Ignore RX FCS */
/* -------- EMAC_NSR : (EMAC Offset: 0x8) Network Status Register --------  */
#define AT91C_EMAC_LINKR      ((unsigned int) 0x1 <<  0) /* (EMAC)  */
#define AT91C_EMAC_MDIO       ((unsigned int) 0x1 <<  1) /* (EMAC)  */
#define AT91C_EMAC_IDLE       ((unsigned int) 0x1 <<  2) /* (EMAC)  */
/* -------- EMAC_TSR : (EMAC Offset: 0x14) Transmit Status Register --------  */
#define AT91C_EMAC_UBR        ((unsigned int) 0x1 <<  0) /* (EMAC)  */
#define AT91C_EMAC_COL        ((unsigned int) 0x1 <<  1) /* (EMAC)  */
#define AT91C_EMAC_RLES       ((unsigned int) 0x1 <<  2) /* (EMAC)  */
#define AT91C_EMAC_TGO        ((unsigned int) 0x1 <<  3) /* (EMAC) Transmit Go */
#define AT91C_EMAC_BEX        ((unsigned int) 0x1 <<  4) /* (EMAC) Buffers exhausted mid frame */
#define AT91C_EMAC_COMP       ((unsigned int) 0x1 <<  5) /* (EMAC)  */
#define AT91C_EMAC_UND        ((unsigned int) 0x1 <<  6) /* (EMAC)  */
/* -------- EMAC_RSR : (EMAC Offset: 0x20) Receive Status Register --------  */
#define AT91C_EMAC_BNA        ((unsigned int) 0x1 <<  0) /* (EMAC)  */
#define AT91C_EMAC_REC        ((unsigned int) 0x1 <<  1) /* (EMAC)  */
#define AT91C_EMAC_OVR        ((unsigned int) 0x1 <<  2) /* (EMAC)  */
/* -------- EMAC_ISR : (EMAC Offset: 0x24) Interrupt Status Register --------  */
#define AT91C_EMAC_MFD        ((unsigned int) 0x1 <<  0) /* (EMAC)  */
#define AT91C_EMAC_RCOMP      ((unsigned int) 0x1 <<  1) /* (EMAC)  */
#define AT91C_EMAC_RXUBR      ((unsigned int) 0x1 <<  2) /* (EMAC)  */
#define AT91C_EMAC_TXUBR      ((unsigned int) 0x1 <<  3) /* (EMAC)  */
#define AT91C_EMAC_TUNDR      ((unsigned int) 0x1 <<  4) /* (EMAC)  */
#define AT91C_EMAC_RLEX       ((unsigned int) 0x1 <<  5) /* (EMAC)  */
#define AT91C_EMAC_TXERR      ((unsigned int) 0x1 <<  6) /* (EMAC)  */
#define AT91C_EMAC_TCOMP      ((unsigned int) 0x1 <<  7) /* (EMAC)  */
#define AT91C_EMAC_LINK       ((unsigned int) 0x1 <<  9) /* (EMAC)  */
#define AT91C_EMAC_ROVR       ((unsigned int) 0x1 << 10) /* (EMAC)  */
#define AT91C_EMAC_HRESP      ((unsigned int) 0x1 << 11) /* (EMAC)  */
#define AT91C_EMAC_PFRE       ((unsigned int) 0x1 << 12) /* (EMAC)  */
#define AT91C_EMAC_PTZ        ((unsigned int) 0x1 << 13) /* (EMAC)  */
/* -------- EMAC_IER : (EMAC Offset: 0x28) Interrupt Enable Register --------  */
/* -------- EMAC_IDR : (EMAC Offset: 0x2c) Interrupt Disable Register --------  */
/* -------- EMAC_IMR : (EMAC Offset: 0x30) Interrupt Mask Register --------  */
/* -------- EMAC_MAN : (EMAC Offset: 0x34) PHY Maintenance Register --------  */
#define AT91C_EMAC_DATA       ((unsigned int) 0xFFFF <<  0) /* (EMAC)  */
#define AT91C_EMAC_CODE       ((unsigned int) 0x3 << 16) /* (EMAC)  */
#define AT91C_EMAC_REGA       ((unsigned int) 0x1F << 18) /* (EMAC)  */
#define AT91C_EMAC_PHYA       ((unsigned int) 0x1F << 23) /* (EMAC)  */
#define AT91C_EMAC_RW         ((unsigned int) 0x3 << 28) /* (EMAC)  */
#define AT91C_EMAC_SOF        ((unsigned int) 0x3 << 30) /* (EMAC)  */
/* -------- EMAC_USRIO : (EMAC Offset: 0xc0) USER Input Output Register --------  */
#define AT91C_EMAC_RMII       ((unsigned int) 0x1 <<  0) /* (EMAC) Reduce MII */
#define AT91C_EMAC_CLKEN      ((unsigned int) 0x1 <<  1) /* (EMAC) Clock Enable */
/* -------- EMAC_WOL : (EMAC Offset: 0xc4) Wake On LAN Register --------  */
#define AT91C_EMAC_IP         ((unsigned int) 0xFFFF <<  0) /* (EMAC) ARP request IP address */
#define AT91C_EMAC_MAG        ((unsigned int) 0x1 << 16) /* (EMAC) Magic packet event enable */
#define AT91C_EMAC_ARP        ((unsigned int) 0x1 << 17) /* (EMAC) ARP request event enable */
#define AT91C_EMAC_SA1        ((unsigned int) 0x1 << 18) /* (EMAC) Specific address register 1 event enable */
/* -------- EMAC_REV : (EMAC Offset: 0xfc) Revision Register --------  */
#define AT91C_EMAC_REVREF     ((unsigned int) 0xFFFF <<  0) /* (EMAC)  */
#define AT91C_EMAC_PARTREF    ((unsigned int) 0xFFFF << 16) /* (EMAC)  */


/* ========== Register definition for EMACB peripheral ==========  */
#define AT91C_EMACB_SA1L ((AT91_REG *) 	0xFFFC4098) /* (EMACB) Specific Address 1 Bottom, First 4 bytes */
#define AT91C_EMACB_SA2H ((AT91_REG *) 	0xFFFC40A4) /* (EMACB) Specific Address 2 Top, Last 2 bytes */
#define AT91C_EMACB_FRO ((AT91_REG *) 	0xFFFC404C) /* (EMACB) Frames Received OK Register */
#define AT91C_EMACB_NCFGR ((AT91_REG *) 	0xFFFC4004) /* (EMACB) Network Configuration Register */
#define AT91C_EMACB_TID ((AT91_REG *) 	0xFFFC40B8) /* (EMACB) Type ID Checking Register */
#define AT91C_EMACB_SA3L ((AT91_REG *) 	0xFFFC40A8) /* (EMACB) Specific Address 3 Bottom, First 4 bytes */
#define AT91C_EMACB_ECOL ((AT91_REG *) 	0xFFFC4060) /* (EMACB) Excessive Collision Register */
#define AT91C_EMACB_FCSE ((AT91_REG *) 	0xFFFC4050) /* (EMACB) Frame Check Sequence Error Register */
#define AT91C_EMACB_NSR ((AT91_REG *) 	0xFFFC4008) /* (EMACB) Network Status Register */
#define AT91C_EMACB_RBQP ((AT91_REG *) 	0xFFFC4018) /* (EMACB) Receive Buffer Queue Pointer */
#define AT91C_EMACB_TPQ ((AT91_REG *) 	0xFFFC40BC) /* (EMACB) Transmit Pause Quantum Register */
#define AT91C_EMACB_SA3H ((AT91_REG *) 	0xFFFC40AC) /* (EMACB) Specific Address 3 Top, Last 2 bytes */
#define AT91C_EMACB_RSE ((AT91_REG *) 	0xFFFC4074) /* (EMACB) Receive Symbol Errors Register */
#define AT91C_EMACB_TUND ((AT91_REG *) 	0xFFFC4064) /* (EMACB) Transmit Underrun Error Register */
#define AT91C_EMACB_TBQP ((AT91_REG *) 	0xFFFC401C) /* (EMACB) Transmit Buffer Queue Pointer */
#define AT91C_EMACB_IDR ((AT91_REG *) 	0xFFFC402C) /* (EMACB) Interrupt Disable Register */
#define AT91C_EMACB_USRIO ((AT91_REG *) 	0xFFFC40C0) /* (EMACB) USER Input/Output Register */
#define AT91C_EMACB_RLE ((AT91_REG *) 	0xFFFC4088) /* (EMACB) Receive Length Field Mismatch Register */
#define AT91C_EMACB_ELE ((AT91_REG *) 	0xFFFC4078) /* (EMACB) Excessive Length Errors Register */
#define AT91C_EMACB_IMR ((AT91_REG *) 	0xFFFC4030) /* (EMACB) Interrupt Mask Register */
#define AT91C_EMACB_RSR ((AT91_REG *) 	0xFFFC4020) /* (EMACB) Receive Status Register */
#define AT91C_EMACB_SA1H ((AT91_REG *) 	0xFFFC409C) /* (EMACB) Specific Address 1 Top, Last 2 bytes */
#define AT91C_EMACB_TPF ((AT91_REG *) 	0xFFFC408C) /* (EMACB) Transmitted Pause Frames Register */
#define AT91C_EMACB_MAN ((AT91_REG *) 	0xFFFC4034) /* (EMACB) PHY Maintenance Register */
#define AT91C_EMACB_SA2L ((AT91_REG *) 	0xFFFC40A0) /* (EMACB) Specific Address 2 Bottom, First 4 bytes */
#define AT91C_EMACB_REV ((AT91_REG *) 	0xFFFC40FC) /* (EMACB) Revision Register */
#define AT91C_EMACB_FTO ((AT91_REG *) 	0xFFFC4040) /* (EMACB) Frames Transmitted OK Register */
#define AT91C_EMACB_SCF ((AT91_REG *) 	0xFFFC4044) /* (EMACB) Single Collision Frame Register */
#define AT91C_EMACB_ALE ((AT91_REG *) 	0xFFFC4054) /* (EMACB) Alignment Error Register */
#define AT91C_EMACB_SA4L ((AT91_REG *) 	0xFFFC40B0) /* (EMACB) Specific Address 4 Bottom, First 4 bytes */
#define AT91C_EMACB_MCF ((AT91_REG *) 	0xFFFC4048) /* (EMACB) Multiple Collision Frame Register */
#define AT91C_EMACB_DTF ((AT91_REG *) 	0xFFFC4058) /* (EMACB) Deferred Transmission Frame Register */
#define AT91C_EMACB_CSE ((AT91_REG *) 	0xFFFC4068) /* (EMACB) Carrier Sense Error Register */
#define AT91C_EMACB_NCR ((AT91_REG *) 	0xFFFC4000) /* (EMACB) Network Control Register */
#define AT91C_EMACB_WOL ((AT91_REG *) 	0xFFFC40C4) /* (EMACB) Wake On LAN Register */
#define AT91C_EMACB_SA4H ((AT91_REG *) 	0xFFFC40B4) /* (EMACB) Specific Address 4 Top, Last 2 bytes */
#define AT91C_EMACB_LCOL ((AT91_REG *) 	0xFFFC405C) /* (EMACB) Late Collision Register */
#define AT91C_EMACB_RRE ((AT91_REG *) 	0xFFFC406C) /* (EMACB) Receive Ressource Error Register */
#define AT91C_EMACB_RJA ((AT91_REG *) 	0xFFFC407C) /* (EMACB) Receive Jabbers Register */
#define AT91C_EMACB_ISR ((AT91_REG *) 	0xFFFC4024) /* (EMACB) Interrupt Status Register */
#define AT91C_EMACB_TSR ((AT91_REG *) 	0xFFFC4014) /* (EMACB) Transmit Status Register */
#define AT91C_EMACB_HRB ((AT91_REG *) 	0xFFFC4090) /* (EMACB) Hash Address Bottom[31:0] */
#define AT91C_EMACB_ROV ((AT91_REG *) 	0xFFFC4070) /* (EMACB) Receive Overrun Errors Register */
#define AT91C_EMACB_USF ((AT91_REG *) 	0xFFFC4080) /* (EMACB) Undersize Frames Register */
#define AT91C_EMACB_IER ((AT91_REG *) 	0xFFFC4028) /* (EMACB) Interrupt Enable Register */
#define AT91C_EMACB_PTR ((AT91_REG *) 	0xFFFC4038) /* (EMACB) Pause Time Register */
#define AT91C_EMACB_HRT ((AT91_REG *) 	0xFFFC4094) /* (EMACB) Hash Address Top[63:32] */
#define AT91C_EMACB_STE ((AT91_REG *) 	0xFFFC4084) /* (EMACB) SQE Test Error Register */
#define AT91C_EMACB_PFR ((AT91_REG *) 	0xFFFC403C) /* (EMACB) Pause Frames received Register */

#endif
