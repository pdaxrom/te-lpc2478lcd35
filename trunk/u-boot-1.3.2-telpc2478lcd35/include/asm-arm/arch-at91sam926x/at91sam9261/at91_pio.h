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
#ifndef AT91SAM9261_PIO_H
#define AT91SAM9261_PIO_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Parallel Input Output Controler */
/* ***************************************************************************** */
typedef struct _AT91S_PIO {
	AT91_REG	 PIO_PER; 	/* PIO Enable Register */
	AT91_REG	 PIO_PDR; 	/* PIO Disable Register */
	AT91_REG	 PIO_PSR; 	/* PIO Status Register */
	AT91_REG	 Reserved0[1];
	AT91_REG	 PIO_OER; 	/* Output Enable Register */
	AT91_REG	 PIO_ODR; 	/* Output Disable Registerr */
	AT91_REG	 PIO_OSR; 	/* Output Status Register */
	AT91_REG	 Reserved1[1];
	AT91_REG	 PIO_IFER; 	/* Input Filter Enable Register */
	AT91_REG	 PIO_IFDR; 	/* Input Filter Disable Register */
	AT91_REG	 PIO_IFSR; 	/* Input Filter Status Register */
	AT91_REG	 Reserved2[1];
	AT91_REG	 PIO_SODR; 	/* Set Output Data Register */
	AT91_REG	 PIO_CODR; 	/* Clear Output Data Register */
	AT91_REG	 PIO_ODSR; 	/* Output Data Status Register */
	AT91_REG	 PIO_PDSR; 	/* Pin Data Status Register */
	AT91_REG	 PIO_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PIO_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PIO_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 PIO_ISR; 	/* Interrupt Status Register */
	AT91_REG	 PIO_MDER; 	/* Multi-driver Enable Register */
	AT91_REG	 PIO_MDDR; 	/* Multi-driver Disable Register */
	AT91_REG	 PIO_MDSR; 	/* Multi-driver Status Register */
	AT91_REG	 Reserved3[1];
	AT91_REG	 PIO_PPUDR; 	/* Pull-up Disable Register */
	AT91_REG	 PIO_PPUER; 	/* Pull-up Enable Register */
	AT91_REG	 PIO_PPUSR; 	/* Pull-up Status Register */
	AT91_REG	 Reserved4[1];
	AT91_REG	 PIO_ASR; 	/* Select A Register */
	AT91_REG	 PIO_BSR; 	/* Select B Register */
	AT91_REG	 PIO_ABSR; 	/* AB Select Status Register */
	AT91_REG	 Reserved5[9];
	AT91_REG	 PIO_OWER; 	/* Output Write Enable Register */
	AT91_REG	 PIO_OWDR; 	/* Output Write Disable Register */
	AT91_REG	 PIO_OWSR; 	/* Output Write Status Register */
} AT91S_PIO, *AT91PS_PIO;

/* ========== Register definition for PIOA peripheral ==========  */
#define AT91C_PIOA_IMR  ((AT91_REG *) 	0xFFFFF448) /* (PIOA) Interrupt Mask Register */
#define AT91C_PIOA_IER  ((AT91_REG *) 	0xFFFFF440) /* (PIOA) Interrupt Enable Register */
#define AT91C_PIOA_OWDR ((AT91_REG *) 	0xFFFFF4A4) /* (PIOA) Output Write Disable Register */
#define AT91C_PIOA_ISR  ((AT91_REG *) 	0xFFFFF44C) /* (PIOA) Interrupt Status Register */
#define AT91C_PIOA_PPUDR ((AT91_REG *) 	0xFFFFF460) /* (PIOA) Pull-up Disable Register */
#define AT91C_PIOA_MDSR ((AT91_REG *) 	0xFFFFF458) /* (PIOA) Multi-driver Status Register */
#define AT91C_PIOA_MDER ((AT91_REG *) 	0xFFFFF450) /* (PIOA) Multi-driver Enable Register */
#define AT91C_PIOA_PER  ((AT91_REG *) 	0xFFFFF400) /* (PIOA) PIO Enable Register */
#define AT91C_PIOA_PSR  ((AT91_REG *) 	0xFFFFF408) /* (PIOA) PIO Status Register */
#define AT91C_PIOA_OER  ((AT91_REG *) 	0xFFFFF410) /* (PIOA) Output Enable Register */
#define AT91C_PIOA_BSR  ((AT91_REG *) 	0xFFFFF474) /* (PIOA) Select B Register */
#define AT91C_PIOA_PPUER ((AT91_REG *) 	0xFFFFF464) /* (PIOA) Pull-up Enable Register */
#define AT91C_PIOA_MDDR ((AT91_REG *) 	0xFFFFF454) /* (PIOA) Multi-driver Disable Register */
#define AT91C_PIOA_PDR  ((AT91_REG *) 	0xFFFFF404) /* (PIOA) PIO Disable Register */
#define AT91C_PIOA_ODR  ((AT91_REG *) 	0xFFFFF414) /* (PIOA) Output Disable Registerr */
#define AT91C_PIOA_IFDR ((AT91_REG *) 	0xFFFFF424) /* (PIOA) Input Filter Disable Register */
#define AT91C_PIOA_ABSR ((AT91_REG *) 	0xFFFFF478) /* (PIOA) AB Select Status Register */
#define AT91C_PIOA_ASR  ((AT91_REG *) 	0xFFFFF470) /* (PIOA) Select A Register */
#define AT91C_PIOA_PPUSR ((AT91_REG *) 	0xFFFFF468) /* (PIOA) Pull-up Status Register */
#define AT91C_PIOA_ODSR ((AT91_REG *) 	0xFFFFF438) /* (PIOA) Output Data Status Register */
#define AT91C_PIOA_SODR ((AT91_REG *) 	0xFFFFF430) /* (PIOA) Set Output Data Register */
#define AT91C_PIOA_IFSR ((AT91_REG *) 	0xFFFFF428) /* (PIOA) Input Filter Status Register */
#define AT91C_PIOA_IFER ((AT91_REG *) 	0xFFFFF420) /* (PIOA) Input Filter Enable Register */
#define AT91C_PIOA_OSR  ((AT91_REG *) 	0xFFFFF418) /* (PIOA) Output Status Register */
#define AT91C_PIOA_IDR  ((AT91_REG *) 	0xFFFFF444) /* (PIOA) Interrupt Disable Register */
#define AT91C_PIOA_PDSR ((AT91_REG *) 	0xFFFFF43C) /* (PIOA) Pin Data Status Register */
#define AT91C_PIOA_CODR ((AT91_REG *) 	0xFFFFF434) /* (PIOA) Clear Output Data Register */
#define AT91C_PIOA_OWSR ((AT91_REG *) 	0xFFFFF4A8) /* (PIOA) Output Write Status Register */
#define AT91C_PIOA_OWER ((AT91_REG *) 	0xFFFFF4A0) /* (PIOA) Output Write Enable Register */
/* ========== Register definition for PIOB peripheral ==========  */
#define AT91C_PIOB_OWSR ((AT91_REG *) 	0xFFFFF6A8) /* (PIOB) Output Write Status Register */
#define AT91C_PIOB_PPUSR ((AT91_REG *) 	0xFFFFF668) /* (PIOB) Pull-up Status Register */
#define AT91C_PIOB_PPUDR ((AT91_REG *) 	0xFFFFF660) /* (PIOB) Pull-up Disable Register */
#define AT91C_PIOB_MDSR ((AT91_REG *) 	0xFFFFF658) /* (PIOB) Multi-driver Status Register */
#define AT91C_PIOB_MDER ((AT91_REG *) 	0xFFFFF650) /* (PIOB) Multi-driver Enable Register */
#define AT91C_PIOB_IMR  ((AT91_REG *) 	0xFFFFF648) /* (PIOB) Interrupt Mask Register */
#define AT91C_PIOB_OSR  ((AT91_REG *) 	0xFFFFF618) /* (PIOB) Output Status Register */
#define AT91C_PIOB_OER  ((AT91_REG *) 	0xFFFFF610) /* (PIOB) Output Enable Register */
#define AT91C_PIOB_PSR  ((AT91_REG *) 	0xFFFFF608) /* (PIOB) PIO Status Register */
#define AT91C_PIOB_PER  ((AT91_REG *) 	0xFFFFF600) /* (PIOB) PIO Enable Register */
#define AT91C_PIOB_BSR  ((AT91_REG *) 	0xFFFFF674) /* (PIOB) Select B Register */
#define AT91C_PIOB_PPUER ((AT91_REG *) 	0xFFFFF664) /* (PIOB) Pull-up Enable Register */
#define AT91C_PIOB_IFDR ((AT91_REG *) 	0xFFFFF624) /* (PIOB) Input Filter Disable Register */
#define AT91C_PIOB_ODR  ((AT91_REG *) 	0xFFFFF614) /* (PIOB) Output Disable Registerr */
#define AT91C_PIOB_ABSR ((AT91_REG *) 	0xFFFFF678) /* (PIOB) AB Select Status Register */
#define AT91C_PIOB_ASR  ((AT91_REG *) 	0xFFFFF670) /* (PIOB) Select A Register */
#define AT91C_PIOB_IFER ((AT91_REG *) 	0xFFFFF620) /* (PIOB) Input Filter Enable Register */
#define AT91C_PIOB_IFSR ((AT91_REG *) 	0xFFFFF628) /* (PIOB) Input Filter Status Register */
#define AT91C_PIOB_SODR ((AT91_REG *) 	0xFFFFF630) /* (PIOB) Set Output Data Register */
#define AT91C_PIOB_ODSR ((AT91_REG *) 	0xFFFFF638) /* (PIOB) Output Data Status Register */
#define AT91C_PIOB_CODR ((AT91_REG *) 	0xFFFFF634) /* (PIOB) Clear Output Data Register */
#define AT91C_PIOB_PDSR ((AT91_REG *) 	0xFFFFF63C) /* (PIOB) Pin Data Status Register */
#define AT91C_PIOB_OWER ((AT91_REG *) 	0xFFFFF6A0) /* (PIOB) Output Write Enable Register */
#define AT91C_PIOB_IER  ((AT91_REG *) 	0xFFFFF640) /* (PIOB) Interrupt Enable Register */
#define AT91C_PIOB_OWDR ((AT91_REG *) 	0xFFFFF6A4) /* (PIOB) Output Write Disable Register */
#define AT91C_PIOB_MDDR ((AT91_REG *) 	0xFFFFF654) /* (PIOB) Multi-driver Disable Register */
#define AT91C_PIOB_ISR  ((AT91_REG *) 	0xFFFFF64C) /* (PIOB) Interrupt Status Register */
#define AT91C_PIOB_IDR  ((AT91_REG *) 	0xFFFFF644) /* (PIOB) Interrupt Disable Register */
#define AT91C_PIOB_PDR  ((AT91_REG *) 	0xFFFFF604) /* (PIOB) PIO Disable Register */
/* ========== Register definition for PIOC peripheral ==========  */
#define AT91C_PIOC_SODR ((AT91_REG *) 	0xFFFFF830) /* (PIOC) Set Output Data Register */
#define AT91C_PIOC_CODR ((AT91_REG *) 	0xFFFFF834) /* (PIOC) Clear Output Data Register */
#define AT91C_PIOC_PDSR ((AT91_REG *) 	0xFFFFF83C) /* (PIOC) Pin Data Status Register */

/* ***************************************************************************** */
/*               PIO DEFINITIONS FOR AT91SAM9261 */
/* ***************************************************************************** */
#define AT91C_PIO_PA0        ((unsigned int) 1 <<  0) /* Pin Controlled by PA0 */
#define AT91C_PA0_MISO0    ((unsigned int) AT91C_PIO_PA0) /*  SPI0 Master In Slave */
#define AT91C_PIO_PA1        ((unsigned int) 1 <<  1) /* Pin Controlled by PA1 */
#define AT91C_PA1_MOSI0    ((unsigned int) AT91C_PIO_PA1) /*  SPI0 Master Out Slave */
#define AT91C_PIO_PA10       ((unsigned int) 1 << 10) /* Pin Controlled by PA10 */
#define AT91C_PA10_DTXD     ((unsigned int) AT91C_PIO_PA10) /*  DBGU Debug Transmit Data */
#define AT91C_PIO_PA12       ((unsigned int) 1 << 12) /* Pin Controlled by PA12 */
#define AT91C_PIO_PA13       ((unsigned int) 1 << 13) /* Pin Controlled by PA13 */
#define AT91C_PIO_PA14       ((unsigned int) 1 << 14) /* Pin Controlled by PA14 */
#define AT91C_PIO_PA15       ((unsigned int) 1 << 15) /* Pin Controlled by PA15 */
#define AT91C_PIO_PA23       ((unsigned int) 1 << 23) /* Pin Controlled by PA23 */
#define AT91C_PIO_PA30       ((unsigned int) 1 << 30) /* Pin Controlled by PA23 */
#define AT91C_PIO_PA31       ((unsigned int) 1 << 31) /* Pin Controlled by PA23 */
#define AT91C_PIO_PA2        ((unsigned int) 1 <<  2) /* Pin Controlled by PA2 */
#define AT91C_PA2_SPCK0    ((unsigned int) AT91C_PIO_PA2) /*  SPI0 Serial Clock */
#define AT91C_PIO_PA3        ((unsigned int) 1 <<  3) /* Pin Controlled by PA3 */
#define AT91C_PA3_NPCS00   ((unsigned int) AT91C_PIO_PA3) /*  SPI0 Peripheral Chip Select 0 */
#define AT91C_PIO_PA4        ((unsigned int) 1 <<  4) /* Pin Controlled by PA4 */
#define AT91C_PA4_NPCS01   ((unsigned int) AT91C_PIO_PA4) /*  SPI0 Peripheral Chip Select 1 */
#define AT91C_PIO_PA5        ((unsigned int) 1 <<  5) /* Pin Controlled by PA5 */
#define AT91C_PA5_NPCS02   ((unsigned int) AT91C_PIO_PA5) /*  SPI0 Peripheral Chip Select 2 */
#define AT91C_PIO_PA6        ((unsigned int) 1 <<  6) /* Pin Controlled by PA6 */
#define AT91C_PA6_NPCS03   ((unsigned int) AT91C_PIO_PA6) /*  SPI0 Peripheral Chip Select 3 */
#define AT91C_PIO_PA9        ((unsigned int) 1 <<  9) /* Pin Controlled by PA9  */
#define AT91C_PA9_DRXD     ((unsigned int) AT91C_PIO_PA9) /*  DBGU Debug Receive Data */
#define AT91C_PIO_PB0        ((unsigned int) 1 <<  0) /* Pin Controlled by PB0 */
#define AT91C_PB0_LCDVSYNC ((unsigned int) AT91C_PIO_PB0) /*  LCD Vertical Synchronization */
#define AT91C_PIO_PB1        ((unsigned int) 1 <<  1) /* Pin Controlled by PB1 */
#define AT91C_PB1_LCDHSYNC ((unsigned int) AT91C_PIO_PB1) /*  LCD Horizontal Synchronization */
#define AT91C_PIO_PB10       ((unsigned int) 1 << 10) /* Pin Controlled by PB10 */
#define AT91C_PB10_LCDD5    ((unsigned int) AT91C_PIO_PB10) /*  LCD Data Bus Bit 5 */
#define AT91C_PB10_LCDD10   ((unsigned int) AT91C_PIO_PB10) /*  LCD Data Bus Bit 10 */
#define AT91C_PIO_PB11       ((unsigned int) 1 << 11) /* Pin Controlled by PB11 */
#define AT91C_PB11_LCDD6    ((unsigned int) AT91C_PIO_PB11) /*  LCD Data Bus Bit 6 */
#define AT91C_PB11_LCDD11   ((unsigned int) AT91C_PIO_PB11) /*  LCD Data Bus Bit 11 */
#define AT91C_PIO_PB12       ((unsigned int) 1 << 12) /* Pin Controlled by PB12 */
#define AT91C_PB12_LCDD7    ((unsigned int) AT91C_PIO_PB12) /*  LCD Data Bus Bit 7 */
#define AT91C_PB12_LCDD12   ((unsigned int) AT91C_PIO_PB12) /*  LCD Data Bus Bit 12 */
#define AT91C_PIO_PB13       ((unsigned int) 1 << 13) /* Pin Controlled by PB13 */
#define AT91C_PB13_LCDD8    ((unsigned int) AT91C_PIO_PB13) /*  LCD Data Bus Bit 8 */
#define AT91C_PB13_LCDD13   ((unsigned int) AT91C_PIO_PB13) /*  LCD Data Bus Bit 13 */
#define AT91C_PIO_PB14       ((unsigned int) 1 << 14) /* Pin Controlled by PB14 */
#define AT91C_PB14_LCDD9    ((unsigned int) AT91C_PIO_PB14) /*  LCD Data Bus Bit 9 */
#define AT91C_PB14_LCDD14   ((unsigned int) AT91C_PIO_PB14) /*  LCD Data Bus Bit 14 */
#define AT91C_PIO_PB15       ((unsigned int) 1 << 15) /* Pin Controlled by PB15 */
#define AT91C_PB15_LCDD10   ((unsigned int) AT91C_PIO_PB15) /*  LCD Data Bus Bit 10 */
#define AT91C_PB15_LCDD15   ((unsigned int) AT91C_PIO_PB15) /*  LCD Data Bus Bit 15 */
#define AT91C_PIO_PB16       ((unsigned int) 1 << 16) /* Pin Controlled by PB16 */
#define AT91C_PB16_LCDD11   ((unsigned int) AT91C_PIO_PB16) /*  LCD Data Bus Bit 11 */
#define AT91C_PB16_LCDD19   ((unsigned int) AT91C_PIO_PB16) /*  LCD Data Bus Bit 19 */
#define AT91C_PIO_PB17       ((unsigned int) 1 << 17) /* Pin Controlled by PB17 */
#define AT91C_PB17_LCDD12   ((unsigned int) AT91C_PIO_PB17) /*  LCD Data Bus Bit 12 */
#define AT91C_PB17_LCDD20   ((unsigned int) AT91C_PIO_PB17) /*  LCD Data Bus Bit 20 */
#define AT91C_PIO_PB18       ((unsigned int) 1 << 18) /* Pin Controlled by PB18 */
#define AT91C_PB18_LCDD13   ((unsigned int) AT91C_PIO_PB18) /*  LCD Data Bus Bit 13 */
#define AT91C_PB18_LCDD21   ((unsigned int) AT91C_PIO_PB18) /*  LCD Data Bus Bit 21 */
#define AT91C_PIO_PB19       ((unsigned int) 1 << 19) /* Pin Controlled by PB19 */
#define AT91C_PB19_LCDD14   ((unsigned int) AT91C_PIO_PB19) /*  LCD Data Bus Bit 14 */
#define AT91C_PB19_LCDD22   ((unsigned int) AT91C_PIO_PB19) /*  LCD Data Bus Bit 22 */
#define AT91C_PIO_PB2        ((unsigned int) 1 <<  2) /* Pin Controlled by PB2 */
#define AT91C_PB2_LCDDOTCK ((unsigned int) AT91C_PIO_PB2) /*  LCD Dot Clock */
#define AT91C_PB2_PCK0     ((unsigned int) AT91C_PIO_PB2) /*  PMC Programmable clock Output 0 */
#define AT91C_PIO_PB20       ((unsigned int) 1 << 20) /* Pin Controlled by PB20 */
#define AT91C_PB20_LCDD15   ((unsigned int) AT91C_PIO_PB20) /*  LCD Data Bus Bit 15 */
#define AT91C_PB20_LCDD23   ((unsigned int) AT91C_PIO_PB20) /*  LCD Data Bus Bit 23 */
#define AT91C_PIO_PB21       ((unsigned int) 1 << 21) /* Pin Controlled by PB21 */
#define AT91C_PB21_TF0      ((unsigned int) AT91C_PIO_PB21) /*  SSC0 Transmit Frame Sync */
#define AT91C_PB21_LCDD16   ((unsigned int) AT91C_PIO_PB21) /*  LCD Data Bus Bit 16 */
#define AT91C_PIO_PB22       ((unsigned int) 1 << 22) /* Pin Controlled by PB22 */
#define AT91C_PB22_TK0      ((unsigned int) AT91C_PIO_PB22) /*  SSC0 Transmit Clock */
#define AT91C_PB22_LCDD17   ((unsigned int) AT91C_PIO_PB22) /*  LCD Data Bus Bit 17 */
#define AT91C_PIO_PB23       ((unsigned int) 1 << 23) /* Pin Controlled by PB23 */
#define AT91C_PB23_TD0      ((unsigned int) AT91C_PIO_PB23) /*  SSC0 Transmit Data */
#define AT91C_PB23_LCDD18   ((unsigned int) AT91C_PIO_PB23) /*  LCD Data Bus Bit 18 */
#define AT91C_PIO_PB24       ((unsigned int) 1 << 24) /* Pin Controlled by PB24 */
#define AT91C_PB24_RD0      ((unsigned int) AT91C_PIO_PB24) /*  SSC0 Receive Data */
#define AT91C_PB24_LCDD19   ((unsigned int) AT91C_PIO_PB24) /*  LCD Data Bus Bit 19 */
#define AT91C_PIO_PB25       ((unsigned int) 1 << 25) /* Pin Controlled by PB25 */
#define AT91C_PB25_RK0      ((unsigned int) AT91C_PIO_PB25) /*  SSC0 Receive Clock */
#define AT91C_PB25_LCDD20   ((unsigned int) AT91C_PIO_PB25) /*  LCD Data Bus Bit 20 */
#define AT91C_PIO_PB26       ((unsigned int) 1 << 26) /* Pin Controlled by PB26 */
#define AT91C_PB26_RF0      ((unsigned int) AT91C_PIO_PB26) /*  SSC0 Receive Frame Sync */
#define AT91C_PB26_LCDD21   ((unsigned int) AT91C_PIO_PB26) /*  LCD Data Bus Bit 21 */
#define AT91C_PIO_PB27       ((unsigned int) 1 << 27) /* Pin Controlled by PB27 */
#define AT91C_PB27_NPCS11   ((unsigned int) AT91C_PIO_PB27) /*  SPI1 Peripheral Chip Select 1 */
#define AT91C_PB27_LCDD22   ((unsigned int) AT91C_PIO_PB27) /*  LCD Data Bus Bit 22 */
#define AT91C_PIO_PB28       ((unsigned int) 1 << 28) /* Pin Controlled by PB28 */
#define AT91C_PB28_NPCS10   ((unsigned int) AT91C_PIO_PB28) /*  SPI1 Peripheral Chip Select 0 */
#define AT91C_PB28_LCDD23   ((unsigned int) AT91C_PIO_PB28) /*  LCD Data Bus Bit 23 */
#define AT91C_PIO_PB29       ((unsigned int) 1 << 29) /* Pin Controlled by PB29 */
#define AT91C_PB29_SPCK1    ((unsigned int) AT91C_PIO_PB29) /*  SPI1 Serial Clock */
#define AT91C_PB29_IRQ2     ((unsigned int) AT91C_PIO_PB29) /*  Interrupt input 2 */
#define AT91C_PIO_PB3        ((unsigned int) 1 <<  3) /* Pin Controlled by PB3 */
#define AT91C_PB3_LCDDEN   ((unsigned int) AT91C_PIO_PB3) /*  LCD Data Enable */
#define AT91C_PIO_PB30       ((unsigned int) 1 << 30) /* Pin Controlled by PB30 */
#define AT91C_PB30_MISO1    ((unsigned int) AT91C_PIO_PB30) /*  SPI1 Master In Slave */
#define AT91C_PB30_IRQ1     ((unsigned int) AT91C_PIO_PB30) /*  Interrupt input 1 */
#define AT91C_PIO_PB31       ((unsigned int) 1 << 31) /* Pin Controlled by PB31 */
#define AT91C_PB31_MOSI1    ((unsigned int) AT91C_PIO_PB31) /*  SPI1 Master Out Slave */
#define AT91C_PB31_PCK2     ((unsigned int) AT91C_PIO_PB31) /*  PMC Programmable clock Output 2 */
#define AT91C_PIO_PB4        ((unsigned int) 1 <<  4) /* Pin Controlled by PB4 */
#define AT91C_PB4_LCDCC    ((unsigned int) AT91C_PIO_PB4) /*  LCD Contrast Control */
#define AT91C_PB4_LCDD2    ((unsigned int) AT91C_PIO_PB4) /*  LCD Data Bus Bit 2 */
#define AT91C_PIO_PB5        ((unsigned int) 1 <<  5) /* Pin Controlled by PB5 */
#define AT91C_PB5_LCDD0    ((unsigned int) AT91C_PIO_PB5) /*  LCD Data Bus Bit 0 */
#define AT91C_PB5_LCDD3    ((unsigned int) AT91C_PIO_PB5) /*  LCD Data Bus Bit 3 */
#define AT91C_PIO_PB6        ((unsigned int) 1 <<  6) /* Pin Controlled by PB6 */
#define AT91C_PB6_LCDD1    ((unsigned int) AT91C_PIO_PB6) /*  LCD Data Bus Bit 1 */
#define AT91C_PB6_LCDD4    ((unsigned int) AT91C_PIO_PB6) /*  LCD Data Bus Bit 4 */
#define AT91C_PIO_PB7        ((unsigned int) 1 <<  7) /* Pin Controlled by PB7 */
#define AT91C_PB7_LCDD2    ((unsigned int) AT91C_PIO_PB7) /*  LCD Data Bus Bit 2 */
#define AT91C_PB7_LCDD5    ((unsigned int) AT91C_PIO_PB7) /*  LCD Data Bus Bit 5 */
#define AT91C_PIO_PB8        ((unsigned int) 1 <<  8) /* Pin Controlled by PB8 */
#define AT91C_PB8_LCDD3    ((unsigned int) AT91C_PIO_PB8) /*  LCD Data Bus Bit 3 */
#define AT91C_PB8_LCDD6    ((unsigned int) AT91C_PIO_PB8) /*  LCD Data Bus Bit 6 */
#define AT91C_PIO_PB9        ((unsigned int) 1 <<  9) /* Pin Controlled by PB9 */
#define AT91C_PB9_LCDD4    ((unsigned int) AT91C_PIO_PB9) /*  LCD Data Bus Bit 4 */
#define AT91C_PB9_LCDD7    ((unsigned int) AT91C_PIO_PB9) /*  LCD Data Bus Bit 7 */
#define AT91C_PIO_PC0        ((unsigned int) 1 <<  0) /* Pin Controlled by PC0 */
#define AT91C_PC0_SMOE     ((unsigned int) AT91C_PIO_PC0) /*  SmartMedia Output Enable */
#define AT91C_PIO_PC1        ((unsigned int) 1 <<  1) /* Pin Controlled by PC1 */
#define AT91C_PC1_SMWE     ((unsigned int) AT91C_PIO_PC1) /*  SmartMedia Write Enable */
#define AT91C_PIO_PC10       ((unsigned int) 1 << 10) /* Pin Controlled by PC10 */
#define AT91C_PIO_PC14       ((unsigned int) 1 << 14) /* Pin Controlled by PC14 */
#define AT91C_PIO_PC15       ((unsigned int) 1 << 15) /* Pin Controlled by PC15 */

#endif
