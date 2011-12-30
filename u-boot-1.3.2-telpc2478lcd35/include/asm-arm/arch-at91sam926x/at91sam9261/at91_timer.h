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
#ifndef AT91SAM9261_TIMER_H
#define AT91SAM9261_TIMER_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Periodic Interval Timer Controller Interface */
/* ***************************************************************************** */
typedef struct _AT91S_PITC {
	AT91_REG	 PITC_PIMR; 	/* Period Interval Mode Register */
	AT91_REG	 PITC_PISR; 	/* Period Interval Status Register */
	AT91_REG	 PITC_PIVR; 	/* Period Interval Value Register */
	AT91_REG	 PITC_PIIR; 	/* Period Interval Image Register */
} AT91S_PITC, *AT91PS_PITC;

/* -------- PITC_PIMR : (PITC Offset: 0x0) Periodic Interval Mode Register --------  */
#define AT91C_PITC_PIV        ((unsigned int) 0xFFFFF <<  0) /* (PITC) Periodic Interval Value */
#define AT91C_PITC_PITEN      ((unsigned int) 0x1 << 24) /* (PITC) Periodic Interval Timer Enabled */
#define AT91C_PITC_PITIEN     ((unsigned int) 0x1 << 25) /* (PITC) Periodic Interval Timer Interrupt Enable */
/* -------- PITC_PISR : (PITC Offset: 0x4) Periodic Interval Status Register --------  */
#define AT91C_PITC_PITS       ((unsigned int) 0x1 <<  0) /* (PITC) Periodic Interval Timer Status */
/* -------- PITC_PIVR : (PITC Offset: 0x8) Periodic Interval Value Register --------  */
#define AT91C_PITC_CPIV       ((unsigned int) 0xFFFFF <<  0) /* (PITC) Current Periodic Interval Value */
#define AT91C_PITC_PICNT      ((unsigned int) 0xFFF << 20) /* (PITC) Periodic Interval Counter */

/* ========== Register definition for PITC peripheral ==========  */
#define AT91C_PITC_PIVR ((AT91_REG *) 	0xFFFFFD38) /* (PITC) Period Interval Value Register */
#define AT91C_PITC_PISR ((AT91_REG *) 	0xFFFFFD34) /* (PITC) Period Interval Status Register */
#define AT91C_PITC_PIIR ((AT91_REG *) 	0xFFFFFD3C) /* (PITC) Period Interval Image Register */
#define AT91C_PITC_PIMR ((AT91_REG *) 	0xFFFFFD30) /* (PITC) Period Interval Mode Register */

#endif
