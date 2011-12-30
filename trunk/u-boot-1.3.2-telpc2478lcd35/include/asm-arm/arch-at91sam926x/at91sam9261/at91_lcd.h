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
#ifndef AT91SAM9261_LCD_H
#define AT91SAM9261_LCD_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR LCD Controller */
/* ***************************************************************************** */
typedef struct _AT91S_LCDC {
	AT91_REG	 LCDC_BA1; 	/* DMA Base Address Register 1 */
	AT91_REG	 LCDC_BA2; 	/* DMA Base Address Register 2 */
	AT91_REG	 LCDC_FRMP1; 	/* DMA Frame Pointer Register 1 */
	AT91_REG	 LCDC_FRMP2; 	/* DMA Frame Pointer Register 2 */
	AT91_REG	 LCDC_FRMA1; 	/* DMA Frame Address Register 1 */
	AT91_REG	 LCDC_FRMA2; 	/* DMA Frame Address Register 2 */
	AT91_REG	 LCDC_FRMCFG; 	/* DMA Frame Configuration Register */
	AT91_REG	 LCDC_DMACON; 	/* DMA Control Register */
	AT91_REG	 LCDC_DMA2DCFG; 	/* DMA 2D addressing configuration */
	AT91_REG	 Reserved0[503];
	AT91_REG	 LCDC_LCDCON1; 	/* LCD Control 1 Register */
	AT91_REG	 LCDC_LCDCON2; 	/* LCD Control 2 Register */
	AT91_REG	 LCDC_TIM1; 	/* LCD Timing Config 1 Register */
	AT91_REG	 LCDC_TIM2; 	/* LCD Timing Config 2 Register */
	AT91_REG	 LCDC_LCDFRCFG; 	/* LCD Frame Config Register */
	AT91_REG	 LCDC_FIFO; 	/* LCD FIFO Register */
	AT91_REG	 LCDC_MVAL; 	/* LCD Mode Toggle Rate Value Register */
	AT91_REG	 LCDC_DP1_2; 	/* Dithering Pattern DP1_2 Register */
	AT91_REG	 LCDC_DP4_7; 	/* Dithering Pattern DP4_7 Register */
	AT91_REG	 LCDC_DP3_5; 	/* Dithering Pattern DP3_5 Register */
	AT91_REG	 LCDC_DP2_3; 	/* Dithering Pattern DP2_3 Register */
	AT91_REG	 LCDC_DP5_7; 	/* Dithering Pattern DP5_7 Register */
	AT91_REG	 LCDC_DP3_4; 	/* Dithering Pattern DP3_4 Register */
	AT91_REG	 LCDC_DP4_5; 	/* Dithering Pattern DP4_5 Register */
	AT91_REG	 LCDC_DP6_7; 	/* Dithering Pattern DP6_7 Register */
	AT91_REG	 LCDC_PWRCON; 	/* Power Control Register */
	AT91_REG	 LCDC_CTRSTCON; 	/* Contrast Control Register */
	AT91_REG	 LCDC_CTRSTVAL; 	/* Contrast Value Register */
	AT91_REG	 LCDC_IER; 	/* Interrupt Enable Register */
	AT91_REG	 LCDC_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 LCDC_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 LCDC_ISR; 	/* Interrupt Enable Register */
	AT91_REG	 LCDC_ICR; 	/* Interrupt Clear Register */
	AT91_REG	 LCDC_GPR; 	/* General Purpose Register */
	AT91_REG	 LCDC_ITR; 	/* Interrupts Test Register */
	AT91_REG	 LCDC_IRR; 	/* Interrupts Raw Status Register */
	AT91_REG	 Reserved1[230];
	AT91_REG	 LCDC_LUT_ENTRY[256]; 	/* LUT Entries Register */
} AT91S_LCDC, *AT91PS_LCDC;

/* -------- LCDC_FRMP1 : (LCDC Offset: 0x8) DMA Frame Pointer 1 Register --------  */
#define AT91C_LCDC_FRMPT1     ((unsigned int) 0x3FFFFF <<  0) /* (LCDC) Frame Pointer Address 1 */
/* -------- LCDC_FRMP2 : (LCDC Offset: 0xc) DMA Frame Pointer 2 Register --------  */
#define AT91C_LCDC_FRMPT2     ((unsigned int) 0x1FFFFF <<  0) /* (LCDC) Frame Pointer Address 2 */
/* -------- LCDC_FRMCFG : (LCDC Offset: 0x18) DMA Frame Config Register --------  */
#define AT91C_LCDC_FRSIZE     ((unsigned int) 0x3FFFFF <<  0) /* (LCDC) FRAME SIZE */
#define AT91C_LCDC_BLENGTH    ((unsigned int) 0xF << 24) /* (LCDC) BURST LENGTH */
/* -------- LCDC_DMACON : (LCDC Offset: 0x1c) DMA Control Register --------  */
#define AT91C_LCDC_DMAEN      ((unsigned int) 0x1 <<  0) /* (LCDC) DAM Enable */
#define AT91C_LCDC_DMARST     ((unsigned int) 0x1 <<  1) /* (LCDC) DMA Reset (WO) */
#define AT91C_LCDC_DMABUSY    ((unsigned int) 0x1 <<  2) /* (LCDC) DMA Reset (WO) */
/* -------- LCDC_DMA2DCFG : (LCDC Offset: 0x20) DMA 2D addressing configuration Register --------  */
#define AT91C_LCDC_ADDRINC    ((unsigned int) 0xFFFF <<  0) /* (LCDC) Number of 32b words that the DMA must jump when going to the next line */
#define AT91C_LCDC_PIXELOFF   ((unsigned int) 0x1F << 24) /* (LCDC) Offset (in bits) of the first pixel of the screen in the memory word which contain it */
/* -------- LCDC_LCDCON1 : (LCDC Offset: 0x800) LCD Control 1 Register --------  */
#define AT91C_LCDC_BYPASS     ((unsigned int) 0x1 <<  0) /* (LCDC) Bypass lcd_pccklk divider */
#define AT91C_LCDC_CLKVAL     ((unsigned int) 0x1FF << 12) /* (LCDC) 9-bit Divider for pixel clock frequency */
#define AT91C_LCDC_LINCNT     ((unsigned int) 0x7FF << 21) /* (LCDC) Line Counter (RO) */
/* -------- LCDC_LCDCON2 : (LCDC Offset: 0x804) LCD Control 2 Register --------  */
#define AT91C_LCDC_DISTYPE    ((unsigned int) 0x3 <<  0) /* (LCDC) Display Type */
#define 	AT91C_LCDC_DISTYPE_STNMONO              ((unsigned int) 0x0) /* (LCDC) STN Mono */
#define 	AT91C_LCDC_DISTYPE_STNCOLOR             ((unsigned int) 0x1) /* (LCDC) STN Color */
#define 	AT91C_LCDC_DISTYPE_TFT                  ((unsigned int) 0x2) /* (LCDC) TFT */
#define AT91C_LCDC_SCANMOD    ((unsigned int) 0x1 <<  2) /* (LCDC) Scan Mode */
#define 	AT91C_LCDC_SCANMOD_SINGLESCAN           ((unsigned int) 0x0 <<  2) /* (LCDC) Single Scan */
#define 	AT91C_LCDC_SCANMOD_DUALSCAN             ((unsigned int) 0x1 <<  2) /* (LCDC) Dual Scan */
#define AT91C_LCDC_IFWIDTH    ((unsigned int) 0x3 <<  3) /* (LCDC) Interface Width */
#define 	AT91C_LCDC_IFWIDTH_FOURBITSWIDTH        ((unsigned int) 0x0 <<  3) /* (LCDC) 4 Bits */
#define 	AT91C_LCDC_IFWIDTH_EIGTHBITSWIDTH       ((unsigned int) 0x1 <<  3) /* (LCDC) 8 Bits */
#define 	AT91C_LCDC_IFWIDTH_SIXTEENBITSWIDTH     ((unsigned int) 0x2 <<  3) /* (LCDC) 16 Bits */
#define AT91C_LCDC_PIXELSIZE  ((unsigned int) 0x7 <<  5) /* (LCDC) Bits per pixel */
#define 	AT91C_LCDC_PIXELSIZE_ONEBITSPERPIXEL      ((unsigned int) 0x0 <<  5) /* (LCDC) 1 Bits */
#define 	AT91C_LCDC_PIXELSIZE_TWOBITSPERPIXEL      ((unsigned int) 0x1 <<  5) /* (LCDC) 2 Bits */
#define 	AT91C_LCDC_PIXELSIZE_FOURBITSPERPIXEL     ((unsigned int) 0x2 <<  5) /* (LCDC) 4 Bits */
#define 	AT91C_LCDC_PIXELSIZE_EIGTHBITSPERPIXEL    ((unsigned int) 0x3 <<  5) /* (LCDC) 8 Bits */
#define 	AT91C_LCDC_PIXELSIZE_SIXTEENBITSPERPIXEL  ((unsigned int) 0x4 <<  5) /* (LCDC) 16 Bits */
#define 	AT91C_LCDC_PIXELSIZE_TWENTYFOURBITSPERPIXEL ((unsigned int) 0x5 <<  5) /* (LCDC) 24 Bits */
#define AT91C_LCDC_INVVD      ((unsigned int) 0x1 <<  8) /* (LCDC) lcd datas polarity */
#define 	AT91C_LCDC_INVVD_NORMALPOL            ((unsigned int) 0x0 <<  8) /* (LCDC) Normal Polarity */
#define 	AT91C_LCDC_INVVD_INVERTEDPOL          ((unsigned int) 0x1 <<  8) /* (LCDC) Inverted Polarity */
#define AT91C_LCDC_INVFRAME   ((unsigned int) 0x1 <<  9) /* (LCDC) lcd vsync polarity */
#define 	AT91C_LCDC_INVFRAME_NORMALPOL            ((unsigned int) 0x0 <<  9) /* (LCDC) Normal Polarity */
#define 	AT91C_LCDC_INVFRAME_INVERTEDPOL          ((unsigned int) 0x1 <<  9) /* (LCDC) Inverted Polarity */
#define AT91C_LCDC_INVLINE    ((unsigned int) 0x1 << 10) /* (LCDC) lcd hsync polarity */
#define 	AT91C_LCDC_INVLINE_NORMALPOL            ((unsigned int) 0x0 << 10) /* (LCDC) Normal Polarity */
#define 	AT91C_LCDC_INVLINE_INVERTEDPOL          ((unsigned int) 0x1 << 10) /* (LCDC) Inverted Polarity */
#define AT91C_LCDC_INVCLK     ((unsigned int) 0x1 << 11) /* (LCDC) lcd pclk polarity */
#define 	AT91C_LCDC_INVCLK_NORMALPOL            ((unsigned int) 0x0 << 11) /* (LCDC) Normal Polarity */
#define 	AT91C_LCDC_INVCLK_INVERTEDPOL          ((unsigned int) 0x1 << 11) /* (LCDC) Inverted Polarity */
#define AT91C_LCDC_INVDVAL    ((unsigned int) 0x1 << 12) /* (LCDC) lcd dval polarity */
#define 	AT91C_LCDC_INVDVAL_NORMALPOL            ((unsigned int) 0x0 << 12) /* (LCDC) Normal Polarity */
#define 	AT91C_LCDC_INVDVAL_INVERTEDPOL          ((unsigned int) 0x1 << 12) /* (LCDC) Inverted Polarity */
#define AT91C_LCDC_CLKMOD     ((unsigned int) 0x1 << 15) /* (LCDC) lcd pclk Mode */
#define 	AT91C_LCDC_CLKMOD_ACTIVEONLYDISP       ((unsigned int) 0x0 << 15) /* (LCDC) Active during display period */
#define 	AT91C_LCDC_CLKMOD_ALWAYSACTIVE         ((unsigned int) 0x1 << 15) /* (LCDC) Always Active */
#define AT91C_LCDC_MEMOR      ((unsigned int) 0x1 << 31) /* (LCDC) lcd pclk Mode */
#define 	AT91C_LCDC_MEMOR_BIGIND               ((unsigned int) 0x0 << 31) /* (LCDC) Big Endian */
#define 	AT91C_LCDC_MEMOR_LITTLEIND            ((unsigned int) 0x1 << 31) /* (LCDC) Little Endian */
/* -------- LCDC_TIM1 : (LCDC Offset: 0x808) LCDC Timing Config 1 Register --------  */
#define AT91C_LCDC_VFP        ((unsigned int) 0xFF <<  0) /* (LCDC) Vertical Front Porch */
#define AT91C_LCDC_VBP        ((unsigned int) 0xFF <<  8) /* (LCDC) Vertical Back Porch */
#define AT91C_LCDC_VPW        ((unsigned int) 0x3F << 16) /* (LCDC) Vertical Synchronization Pulse Width */
#define AT91C_LCDC_VHDLY      ((unsigned int) 0xF << 24) /* (LCDC) Vertical to Horizontal Delay */
/* -------- LCDC_TIM2 : (LCDC Offset: 0x80c) LCDC Timing Config 2 Register --------  */
#define AT91C_LCDC_HBP        ((unsigned int) 0xFF <<  0) /* (LCDC) Horizontal Back Porch */
#define AT91C_LCDC_HPW        ((unsigned int) 0x3F <<  8) /* (LCDC) Horizontal Synchronization Pulse Width */
#define AT91C_LCDC_HFP        ((unsigned int) 0x3FF << 22) /* (LCDC) Horizontal Front Porch */
/* -------- LCDC_LCDFRCFG : (LCDC Offset: 0x810) LCD Frame Config Register --------  */
#define AT91C_LCDC_LINEVAL    ((unsigned int) 0x7FF <<  0) /* (LCDC) Vertical Size of LCD Module */
#define AT91C_LCDC_HOZVAL     ((unsigned int) 0x7FF << 21) /* (LCDC) Horizontal Size of LCD Module */
/* -------- LCDC_FIFO : (LCDC Offset: 0x814) LCD FIFO Register --------  */
#define AT91C_LCDC_FIFOTH     ((unsigned int) 0xFFFF <<  0) /* (LCDC) FIFO Threshold */
/* -------- LCDC_MVAL : (LCDC Offset: 0x818) LCD Mode Toggle Rate Value Register --------  */
#define AT91C_LCDC_MVALUE     ((unsigned int) 0xFF <<  0) /* (LCDC) Toggle Rate Value */
#define AT91C_LCDC_MMODE      ((unsigned int) 0x1 << 31) /* (LCDC) Toggle Rate Sel */
#define 	AT91C_LCDC_MMODE_EACHFRAME            ((unsigned int) 0x0 << 31) /* (LCDC) Each Frame */
#define 	AT91C_LCDC_MMODE_MVALDEFINED          ((unsigned int) 0x1 << 31) /* (LCDC) Defined by MVAL */
/* -------- LCDC_DP1_2 : (LCDC Offset: 0x81c) Dithering Pattern 1/2 --------  */
#define AT91C_LCDC_DP1_2_FIELD ((unsigned int) 0xFF <<  0) /* (LCDC) Ratio */
/* -------- LCDC_DP4_7 : (LCDC Offset: 0x820) Dithering Pattern 4/7 --------  */
#define AT91C_LCDC_DP4_7_FIELD ((unsigned int) 0xFFFFFFF <<  0) /* (LCDC) Ratio */
/* -------- LCDC_DP3_5 : (LCDC Offset: 0x824) Dithering Pattern 3/5 --------  */
#define AT91C_LCDC_DP3_5_FIELD ((unsigned int) 0xFFFFF <<  0) /* (LCDC) Ratio */
/* -------- LCDC_DP2_3 : (LCDC Offset: 0x828) Dithering Pattern 2/3 --------  */
#define AT91C_LCDC_DP2_3_FIELD ((unsigned int) 0xFFF <<  0) /* (LCDC) Ratio */
/* -------- LCDC_DP5_7 : (LCDC Offset: 0x82c) Dithering Pattern 5/7 --------  */
#define AT91C_LCDC_DP5_7_FIELD ((unsigned int) 0xFFFFFFF <<  0) /* (LCDC) Ratio */
/* -------- LCDC_DP3_4 : (LCDC Offset: 0x830) Dithering Pattern 3/4 --------  */
#define AT91C_LCDC_DP3_4_FIELD ((unsigned int) 0xFFFF <<  0) /* (LCDC) Ratio */
/* -------- LCDC_DP4_5 : (LCDC Offset: 0x834) Dithering Pattern 4/5 --------  */
#define AT91C_LCDC_DP4_5_FIELD ((unsigned int) 0xFFFFF <<  0) /* (LCDC) Ratio */
/* -------- LCDC_DP6_7 : (LCDC Offset: 0x838) Dithering Pattern 6/7 --------  */
#define AT91C_LCDC_DP6_7_FIELD ((unsigned int) 0xFFFFFFF <<  0) /* (LCDC) Ratio */
/* -------- LCDC_PWRCON : (LCDC Offset: 0x83c) LCDC Power Control Register --------  */
#define AT91C_LCDC_PWR        ((unsigned int) 0x1 <<  0) /* (LCDC) LCD Module Power Control */
#define AT91C_LCDC_GUARDT     ((unsigned int) 0x7F <<  1) /* (LCDC) Delay in Frame Period */
#define AT91C_LCDC_BUSY       ((unsigned int) 0x1 << 31) /* (LCDC) Read Only : 1 indicates that LCDC is busy */
#define 	AT91C_LCDC_BUSY_LCDNOTBUSY           ((unsigned int) 0x0 << 31) /* (LCDC) LCD is Not Busy */
#define 	AT91C_LCDC_BUSY_LCDBUSY              ((unsigned int) 0x1 << 31) /* (LCDC) LCD is Busy */
/* -------- LCDC_CTRSTCON : (LCDC Offset: 0x840) LCDC Contrast Control Register --------  */
#define AT91C_LCDC_PS         ((unsigned int) 0x3 <<  0) /* (LCDC) LCD Contrast Counter Prescaler */
#define 	AT91C_LCDC_PS_NOTDIVIDED           ((unsigned int) 0x0) /* (LCDC) Counter Freq is System Freq. */
#define 	AT91C_LCDC_PS_DIVIDEDBYTWO         ((unsigned int) 0x1) /* (LCDC) Counter Freq is System Freq divided by 2. */
#define 	AT91C_LCDC_PS_DIVIDEDBYFOUR        ((unsigned int) 0x2) /* (LCDC) Counter Freq is System Freq divided by 4. */
#define 	AT91C_LCDC_PS_DIVIDEDBYEIGHT       ((unsigned int) 0x3) /* (LCDC) Counter Freq is System Freq divided by 8. */
#define AT91C_LCDC_POL        ((unsigned int) 0x1 <<  2) /* (LCDC) Polarity of output Pulse */
#define 	AT91C_LCDC_POL_NEGATIVEPULSE        ((unsigned int) 0x0 <<  2) /* (LCDC) Negative Pulse */
#define 	AT91C_LCDC_POL_POSITIVEPULSE        ((unsigned int) 0x1 <<  2) /* (LCDC) Positive Pulse */
#define AT91C_LCDC_ENA        ((unsigned int) 0x1 <<  3) /* (LCDC) PWM generator Control */
#define 	AT91C_LCDC_ENA_PWMGEMDISABLED       ((unsigned int) 0x0 <<  3) /* (LCDC) PWM Generator Disabled */
#define 	AT91C_LCDC_ENA_PWMGEMENABLED        ((unsigned int) 0x1 <<  3) /* (LCDC) PWM Generator Disabled */
/* -------- LCDC_CTRSTVAL : (LCDC Offset: 0x844) Contrast Value Register --------  */
#define AT91C_LCDC_CVAL       ((unsigned int) 0xFF <<  0) /* (LCDC) PWM Compare Value */
/* -------- LCDC_IER : (LCDC Offset: 0x848) LCDC Interrupt Enable Register --------  */
#define AT91C_LCDC_LNI        ((unsigned int) 0x1 <<  0) /* (LCDC) Line Interrupt */
#define AT91C_LCDC_LSTLNI     ((unsigned int) 0x1 <<  1) /* (LCDC) Last Line Interrupt */
#define AT91C_LCDC_EOFI       ((unsigned int) 0x1 <<  2) /* (LCDC) End Of Frame Interrupt */
#define AT91C_LCDC_UFLWI      ((unsigned int) 0x1 <<  4) /* (LCDC) FIFO Underflow Interrupt */
#define AT91C_LCDC_OWRI       ((unsigned int) 0x1 <<  5) /* (LCDC) Over Write Interrupt */
#define AT91C_LCDC_MERI       ((unsigned int) 0x1 <<  6) /* (LCDC) Memory Error  Interrupt */
/* -------- LCDC_GPR : (LCDC Offset: 0x85c) LCDC General Purpose Register --------  */
#define AT91C_LCDC_GPRBUS     ((unsigned int) 0xFF <<  0) /* (LCDC) 8 bits available */

#endif


