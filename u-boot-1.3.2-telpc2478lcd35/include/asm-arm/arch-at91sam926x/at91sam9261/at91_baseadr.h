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
#ifndef AT91SAM9261_BASEADR_H
#define AT91SAM9261_BASEADR_H

/* ***************************************************************************** */
/*               BASE ADDRESS DEFINITIONS FOR AT91SAM9261 */
/* ***************************************************************************** */
#define AT91C_BASE_SYS       ((AT91PS_SYS) 	0xFFFFEA00) /* (SYS) Base Address */
#define AT91C_BASE_SDRAMC    ((AT91PS_SDRAMC) 	0xFFFFEA00) /* (SDRAMC) Base Address */
#define AT91C_BASE_SMC       ((AT91PS_SMC) 	0xFFFFEC00) /* (SMC) Base Address */
#define AT91C_BASE_MATRIX    ((AT91PS_MATRIX) 	0xFFFFEE00) /* (MATRIX) Base Address */
#define AT91C_BASE_AIC       ((AT91PS_AIC) 	0xFFFFF000) /* (AIC) Base Address */
#define AT91C_BASE_PDC_DBGU  ((AT91PS_PDC) 	0xFFFFF300) /* (PDC_DBGU) Base Address */
#define AT91C_BASE_DBGU      ((AT91PS_DBGU) 	0xFFFFF200) /* (DBGU) Base Address */
#define AT91C_BASE_PIOA      ((AT91PS_PIO) 	0xFFFFF400) /* (PIOA) Base Address */
#define AT91C_BASE_PIOB      ((AT91PS_PIO) 	0xFFFFF600) /* (PIOB) Base Address */
#define AT91C_BASE_PIOC      ((AT91PS_PIO) 	0xFFFFF800) /* (PIOC) Base Address */
#define AT91C_BASE_CKGR      ((AT91PS_CKGR) 	0xFFFFFC20) /* (CKGR) Base Address */
#define AT91C_BASE_PMC       ((AT91PS_PMC) 	0xFFFFFC00) /* (PMC) Base Address */
#define AT91C_BASE_RSTC      ((AT91PS_RSTC) 	0xFFFFFD00) /* (RSTC) Base Address */
#define AT91C_BASE_SHDWC     ((AT91PS_SHDWC) 	0xFFFFFD10) /* (SHDWC) Base Address */
#define AT91C_BASE_RTTC      ((AT91PS_RTTC) 	0xFFFFFD20) /* (RTTC) Base Address */
#define AT91C_BASE_PITC      ((AT91PS_PITC) 	0xFFFFFD30) /* (PITC) Base Address */
#define AT91C_BASE_WDTC      ((AT91PS_WDTC) 	0xFFFFFD40) /* (WDTC) Base Address */
#define AT91C_BASE_TC0       ((AT91PS_TC) 	0xFFFA0000) /* (TC0) Base Address */
#define AT91C_BASE_TC1       ((AT91PS_TC) 	0xFFFA0040) /* (TC1) Base Address */
#define AT91C_BASE_TC2       ((AT91PS_TC) 	0xFFFA0080) /* (TC2) Base Address */
#define AT91C_BASE_TCB0      ((AT91PS_TCB) 	0xFFFA0000) /* (TCB0) Base Address */
#define AT91C_BASE_UDP       ((AT91PS_UDP) 	0xFFFA4000) /* (UDP) Base Address */
#define AT91C_BASE_PDC_MCI   ((AT91PS_PDC) 	0xFFFA8100) /* (PDC_MCI) Base Address */
#define AT91C_BASE_MCI       ((AT91PS_MCI) 	0xFFFA8000) /* (MCI) Base Address */
#define AT91C_BASE_TWI       ((AT91PS_TWI) 	0xFFFAC000) /* (TWI) Base Address */
#define AT91C_BASE_PDC_US0   ((AT91PS_PDC) 	0xFFFB0100) /* (PDC_US0) Base Address */
#define AT91C_BASE_US0       ((AT91PS_USART) 	0xFFFB0000) /* (US0) Base Address */
#define AT91C_BASE_PDC_US1   ((AT91PS_PDC) 	0xFFFB4100) /* (PDC_US1) Base Address */
#define AT91C_BASE_US1       ((AT91PS_USART) 	0xFFFB4000) /* (US1) Base Address */
#define AT91C_BASE_PDC_US2   ((AT91PS_PDC) 	0xFFFB8100) /* (PDC_US2) Base Address */
#define AT91C_BASE_US2       ((AT91PS_USART) 	0xFFFB8000) /* (US2) Base Address */
#define AT91C_BASE_PDC_SSC0  ((AT91PS_PDC) 	0xFFFBC100) /* (PDC_SSC0) Base Address */
#define AT91C_BASE_SSC0      ((AT91PS_SSC) 	0xFFFBC000) /* (SSC0) Base Address */
#define AT91C_BASE_PDC_SSC1  ((AT91PS_PDC) 	0xFFFC0100) /* (PDC_SSC1) Base Address */
#define AT91C_BASE_SSC1      ((AT91PS_SSC) 	0xFFFC0000) /* (SSC1) Base Address */
#define AT91C_BASE_PDC_SSC2  ((AT91PS_PDC) 	0xFFFC4100) /* (PDC_SSC2) Base Address */
#define AT91C_BASE_SSC2      ((AT91PS_SSC) 	0xFFFC4000) /* (SSC2) Base Address */
#define AT91C_BASE_PDC_SPI0  ((AT91PS_PDC) 	0xFFFC8100) /* (PDC_SPI0) Base Address */
#define AT91C_BASE_SPI0      ((AT91PS_SPI) 	0xFFFC8000) /* (SPI0) Base Address */
#define AT91C_BASE_PDC_SPI1  ((AT91PS_PDC) 	0xFFFCC100) /* (PDC_SPI1) Base Address */
#define AT91C_BASE_SPI1      ((AT91PS_SPI) 	0xFFFCC000) /* (SPI1) Base Address */
#define AT91C_BASE_UHP       ((AT91PS_UHP) 	0x00500000) /* (UHP) Base Address */
#define AT91C_BASE_LCDC      ((AT91PS_LCDC) 	0x00600000) /* (LCDC) Base Address */
#define AT91C_BASE_LCDC_16B_TFT ((AT91PS_LCDC) 	0x00600000) /* (LCDC_16B_TFT) Base Address  */

#endif
