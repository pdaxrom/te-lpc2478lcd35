/*  ----------------------------------------------------------------------------
 *          ATMEL Microcontroller Software Support  -  ROUSSET  -
 *  ----------------------------------------------------------------------------
 *  DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 *  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 *  DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *  OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 *  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *  ----------------------------------------------------------------------------
 * File Name           : AT91SAM9261.h
 * Object              : AT91SAM9261 definitions
 * Generated           : AT91 SW Application Group  03/30/2005 (17:05:06)
 * 
 *  ----------------------------------------------------------------------------
*/
#ifndef AT91SAM9261_COMM_H
#define AT91SAM9261_COMM_H

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
	AT91_REG	 Reserved0[7];
	AT91_REG	 DBGU_CIDR; 	/* Chip ID Register */
	AT91_REG	 DBGU_EXID; 	/* Chip ID Extension Register */
	AT91_REG	 DBGU_FNTR; 	/* Force NTRST Register */
	AT91_REG	 Reserved1[45];
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
/* -------- DBGU_FNTR : (DBGU Offset: 0x48) Debug Unit FORCE_NTRST Register --------  */
#define AT91C_US_FORCE_NTRST  ((unsigned int) 0x1 <<  0) /* (DBGU) Force NTRST in JTAG */

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
	AT91_REG	 Reserved0[5];
	AT91_REG	 US_FIDI; 	/* FI_DI_Ratio Register */
	AT91_REG	 US_NER; 	/* Nb Errors Register */
	AT91_REG	 Reserved1[1];
	AT91_REG	 US_IF; 	/* IRDA_FILTER Register */
	AT91_REG	 Reserved2[44];
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
	AT91_REG	 Reserved0[4];
	AT91_REG	 SPI_CSR[4]; 	/* Chip Select Register */
	AT91_REG	 Reserved1[48];
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
/* -------- SPI_CSR : (SPI Offset: 0x30) Chip Select Register --------  */
#define AT91C_SPI_CPOL        ((unsigned int) 0x1 <<  0) /* (SPI) Clock Polarity */
#define AT91C_SPI_NCPHA       ((unsigned int) 0x1 <<  1) /* (SPI) Clock Phase */
#define AT91C_SPI_CSAAT       ((unsigned int) 0x1 <<  2) /* (SPI) Chip Select Active After Transfer */
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
#define AT91C_SPI_DLYBS       ((unsigned int) 0xFF << 16) /* (SPI) Serial Clock Baud Rate */
#define AT91C_SPI_DLYBCT      ((unsigned int) 0xFF << 24) /* (SPI) Delay Between Consecutive Transfers */


/* ========== Register definition for SPI0 peripheral ==========  */
#define AT91C_SPI0_IDR  ((AT91_REG *) 	0xFFFC8018) /* (SPI0) Interrupt Disable Register */
#define AT91C_SPI0_TDR  ((AT91_REG *) 	0xFFFC800C) /* (SPI0) Transmit Data Register */
#define AT91C_SPI0_SR   ((AT91_REG *) 	0xFFFC8010) /* (SPI0) Status Register */
#define AT91C_SPI0_CR   ((AT91_REG *) 	0xFFFC8000) /* (SPI0) Control Register */
#define AT91C_SPI0_CSR  ((AT91_REG *) 	0xFFFC8030) /* (SPI0) Chip Select Register */
#define AT91C_SPI0_RDR  ((AT91_REG *) 	0xFFFC8008) /* (SPI0) Receive Data Register */
#define AT91C_SPI0_MR   ((AT91_REG *) 	0xFFFC8004) /* (SPI0) Mode Register */
#define AT91C_SPI0_IER  ((AT91_REG *) 	0xFFFC8014) /* (SPI0) Interrupt Enable Register */
#define AT91C_SPI0_IMR  ((AT91_REG *) 	0xFFFC801C) /* (SPI0) Interrupt Mask Register */
/* ========== Register definition for PDC_SPI1 peripheral ==========  */
#define AT91C_SPI1_PTCR ((AT91_REG *) 	0xFFFCC120) /* (PDC_SPI1) PDC Transfer Control Register */
#define AT91C_SPI1_RNPR ((AT91_REG *) 	0xFFFCC110) /* (PDC_SPI1) Receive Next Pointer Register */
#define AT91C_SPI1_RCR  ((AT91_REG *) 	0xFFFCC104) /* (PDC_SPI1) Receive Counter Register */
#define AT91C_SPI1_TPR  ((AT91_REG *) 	0xFFFCC108) /* (PDC_SPI1) Transmit Pointer Register */
#define AT91C_SPI1_PTSR ((AT91_REG *) 	0xFFFCC124) /* (PDC_SPI1) PDC Transfer Status Register */
#define AT91C_SPI1_TNCR ((AT91_REG *) 	0xFFFCC11C) /* (PDC_SPI1) Transmit Next Counter Register */
#define AT91C_SPI1_RPR  ((AT91_REG *) 	0xFFFCC100) /* (PDC_SPI1) Receive Pointer Register */
#define AT91C_SPI1_TCR  ((AT91_REG *) 	0xFFFCC10C) /* (PDC_SPI1) Transmit Counter Register */
#define AT91C_SPI1_RNCR ((AT91_REG *) 	0xFFFCC114) /* (PDC_SPI1) Receive Next Counter Register */
#define AT91C_SPI1_TNPR ((AT91_REG *) 	0xFFFCC118) /* (PDC_SPI1) Transmit Next Pointer Register */
/* ========== Register definition for SPI1 peripheral ==========  */
#define AT91C_SPI1_IER  ((AT91_REG *) 	0xFFFCC014) /* (SPI1) Interrupt Enable Register */
#define AT91C_SPI1_RDR  ((AT91_REG *) 	0xFFFCC008) /* (SPI1) Receive Data Register */
#define AT91C_SPI1_SR   ((AT91_REG *) 	0xFFFCC010) /* (SPI1) Status Register */
#define AT91C_SPI1_IMR  ((AT91_REG *) 	0xFFFCC01C) /* (SPI1) Interrupt Mask Register */
#define AT91C_SPI1_TDR  ((AT91_REG *) 	0xFFFCC00C) /* (SPI1) Transmit Data Register */
#define AT91C_SPI1_IDR  ((AT91_REG *) 	0xFFFCC018) /* (SPI1) Interrupt Disable Register */
#define AT91C_SPI1_CSR  ((AT91_REG *) 	0xFFFCC030) /* (SPI1) Chip Select Register */
#define AT91C_SPI1_CR   ((AT91_REG *) 	0xFFFCC000) /* (SPI1) Control Register */
#define AT91C_SPI1_MR   ((AT91_REG *) 	0xFFFCC004) /* (SPI1) Mode Register */

#endif


