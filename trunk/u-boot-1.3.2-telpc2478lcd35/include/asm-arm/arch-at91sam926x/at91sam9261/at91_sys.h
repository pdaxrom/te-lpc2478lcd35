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
#ifndef AT91SAM9261_SYS_H
#define AT91SAM9261_SYS_H

/* *****************************************************************************
 *              SOFTWARE API DEFINITION  FOR System Peripherals
 * *****************************************************************************
 */
typedef struct _AT91S_SYS {
	AT91_REG	 SDRAMC_MR; 	/* SDRAM Controller Mode Register */
	AT91_REG	 SDRAMC_TR; 	/* SDRAM Controller Refresh Timer Register */
	AT91_REG	 SDRAMC_CR; 	/* SDRAM Controller Configuration Register */
	AT91_REG	 SDRAMC_HSR; 	/* SDRAM Controller High Speed Register */
	AT91_REG	 SDRAMC_LPR; 	/* SDRAM Controller Low Power Register */
	AT91_REG	 SDRAMC_IER; 	/* SDRAM Controller Interrupt Enable Register */
	AT91_REG	 SDRAMC_IDR; 	/* SDRAM Controller Interrupt Disable Register */
	AT91_REG	 SDRAMC_IMR; 	/* SDRAM Controller Interrupt Mask Register */
	AT91_REG	 SDRAMC_ISR; 	/* SDRAM Controller Interrupt Mask Register */
	AT91_REG	 SDRAMC_MDR; 	/* SDRAM Memory Device Register */
	AT91_REG	 Reserved0[118]; 	 
	AT91_REG	 SMC_SETUP0; 	/*  Setup Register for CS 0 */
	AT91_REG	 SMC_PULSE0; 	/*  Pulse Register for CS 0 */
	AT91_REG	 SMC_CYCLE0; 	/*  Cycle Register for CS 0 */
	AT91_REG	 SMC_CTRL0; 	/*  Control Register for CS 0 */
	AT91_REG	 SMC_SETUP1; 	/*  Setup Register for CS 1 */
	AT91_REG	 SMC_PULSE1; 	/*  Pulse Register for CS 1 */
	AT91_REG	 SMC_CYCLE1; 	/*  Cycle Register for CS 1 */
	AT91_REG	 SMC_CTRL1; 	/*  Control Register for CS 1 */
	AT91_REG	 SMC_SETUP2; 	/*  Setup Register for CS 2 */
	AT91_REG	 SMC_PULSE2; 	/*  Pulse Register for CS 2 */
	AT91_REG	 SMC_CYCLE2; 	/*  Cycle Register for CS 2 */
	AT91_REG	 SMC_CTRL2; 	/*  Control Register for CS 2 */
	AT91_REG	 SMC_SETUP3; 	/*  Setup Register for CS 3 */
	AT91_REG	 SMC_PULSE3; 	/*  Pulse Register for CS 3 */
	AT91_REG	 SMC_CYCLE3; 	/*  Cycle Register for CS 3 */
	AT91_REG	 SMC_CTRL3; 	/*  Control Register for CS 3 */
	AT91_REG	 SMC_SETUP4; 	/*  Setup Register for CS 4 */
	AT91_REG	 SMC_PULSE4; 	/*  Pulse Register for CS 4 */
	AT91_REG	 SMC_CYCLE4; 	/*  Cycle Register for CS 4 */
	AT91_REG	 SMC_CTRL4; 	/*  Control Register for CS 4 */
	AT91_REG	 SMC_SETUP5; 	/*  Setup Register for CS 5 */
	AT91_REG	 SMC_PULSE5; 	/*  Pulse Register for CS 5 */
	AT91_REG	 SMC_CYCLE5; 	/*  Cycle Register for CS 5 */
	AT91_REG	 SMC_CTRL5; 	/*  Control Register for CS 5 */
	AT91_REG	 SMC_SETUP6; 	/*  Setup Register for CS 6 */
	AT91_REG	 SMC_PULSE6; 	/*  Pulse Register for CS 6 */
	AT91_REG	 SMC_CYCLE6; 	/*  Cycle Register for CS 6 */
	AT91_REG	 SMC_CTRL6; 	/*  Control Register for CS 6 */
	AT91_REG	 SMC_SETUP7; 	/*  Setup Register for CS 7 */
	AT91_REG	 SMC_PULSE7; 	/*  Pulse Register for CS 7 */
	AT91_REG	 SMC_CYCLE7; 	/*  Cycle Register for CS 7 */
	AT91_REG	 SMC_CTRL7; 	/*  Control Register for CS 7 */
	AT91_REG	 Reserved1[96]; 	 
	AT91_REG	 MATRIX_MCFG; 	/*  Master Configuration Register */
	AT91_REG	 MATRIX_SCFG0; 	/*  Slave Configuration Register 0 */
	AT91_REG	 MATRIX_SCFG1; 	/*  Slave Configuration Register 1 */
	AT91_REG	 MATRIX_SCFG2; 	/*  Slave Configuration Register 2 */
	AT91_REG	 MATRIX_SCFG3; 	/*  Slave Configuration Register 3 */
	AT91_REG	 MATRIX_SCFG4; 	/*  Slave Configuration Register 4 */
	AT91_REG	 Reserved2[3]; 
	AT91_REG	 MATRIX_TCMR; 	/*  Slave 0 Special Function Register */
	AT91_REG	 Reserved3[2];
	AT91_REG	 MATRIX_EBICSA; 	/*  Slave 3 Special Function Register */
	AT91_REG	 MATRIX_USBPCR; 	/*  Slave 4 Special Function Register */
	AT91_REG	 Reserved4[3]; 	 
	AT91_REG	 MATRIX_VERSION; 	/*  Version Register */
	AT91_REG	 Reserved5[110]; 	 
	AT91_REG	 AIC_SMR[32]; 	/* Source Mode Register */
	AT91_REG	 AIC_SVR[32]; 	/* Source Vector Register */
	AT91_REG	 AIC_IVR; 	/* IRQ Vector Register */
	AT91_REG	 AIC_FVR; 	/* FIQ Vector Register */
	AT91_REG	 AIC_ISR; 	/* Interrupt Status Register */
	AT91_REG	 AIC_IPR; 	/* Interrupt Pending Register */
	AT91_REG	 AIC_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 AIC_CISR; 	/* Core Interrupt Status Register */
	AT91_REG	 Reserved6[2];
	AT91_REG	 AIC_IECR; 	/* Interrupt Enable Command Register */
	AT91_REG	 AIC_IDCR; 	/* Interrupt Disable Command Register */
	AT91_REG	 AIC_ICCR; 	/* Interrupt Clear Command Register */
	AT91_REG	 AIC_ISCR; 	/* Interrupt Set Command Register */
	AT91_REG	 AIC_EOICR; 	/* End of Interrupt Command Register */
	AT91_REG	 AIC_SPU; 	/* Spurious Vector Register */
	AT91_REG	 AIC_DCR; 	/* Debug Control Register (Protect) */
	AT91_REG	 Reserved7[1]; 	 
	AT91_REG	 AIC_FFER; 	/* Fast Forcing Enable Register */
	AT91_REG	 AIC_FFDR; 	/* Fast Forcing Disable Register */
	AT91_REG	 AIC_FFSR; 	/* Fast Forcing Status Register */
	AT91_REG	 Reserved8[45]; 	 
	AT91_REG	 DBGU_CR; 	/* Control Register */
	AT91_REG	 DBGU_MR; 	/* Mode Register */
	AT91_REG	 DBGU_IER; 	/* Interrupt Enable Register */
	AT91_REG	 DBGU_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 DBGU_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 DBGU_CSR; 	/* Channel Status Register */
	AT91_REG	 DBGU_RHR; 	/* Receiver Holding Register */
	AT91_REG	 DBGU_THR; 	/* Transmitter Holding Register */
	AT91_REG	 DBGU_BRGR; 	/* Baud Rate Generator Register */
	AT91_REG	 Reserved9[7]; 	 
	AT91_REG	 DBGU_CIDR; 	/* Chip ID Register */
	AT91_REG	 DBGU_EXID; 	/* Chip ID Extension Register */
	AT91_REG	 DBGU_FNTR; 	/* Force NTRST Register */
	AT91_REG	 Reserved10[45]; 	 
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
	AT91_REG	 Reserved11[54]; 	 
	AT91_REG	 PIOA_PER; 	/* PIO Enable Register */
	AT91_REG	 PIOA_PDR; 	/* PIO Disable Register */
	AT91_REG	 PIOA_PSR; 	/* PIO Status Register */
	AT91_REG	 Reserved12[1]; 	 
	AT91_REG	 PIOA_OER; 	/* Output Enable Register */
	AT91_REG	 PIOA_ODR; 	/* Output Disable Registerr */
	AT91_REG	 PIOA_OSR; 	/* Output Status Register */
	AT91_REG	 Reserved13[1]; 	 
	AT91_REG	 PIOA_IFER; 	/* Input Filter Enable Register */
	AT91_REG	 PIOA_IFDR; 	/* Input Filter Disable Register */
	AT91_REG	 PIOA_IFSR; 	/* Input Filter Status Register */
	AT91_REG	 Reserved14[1]; 	 
	AT91_REG	 PIOA_SODR; 	/* Set Output Data Register */
	AT91_REG	 PIOA_CODR; 	/* Clear Output Data Register */
	AT91_REG	 PIOA_ODSR; 	/* Output Data Status Register */
	AT91_REG	 PIOA_PDSR; 	/* Pin Data Status Register */
	AT91_REG	 PIOA_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PIOA_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PIOA_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 PIOA_ISR; 	/* Interrupt Status Register */
	AT91_REG	 PIOA_MDER; 	/* Multi-driver Enable Register */
	AT91_REG	 PIOA_MDDR; 	/* Multi-driver Disable Register */
	AT91_REG	 PIOA_MDSR; 	/* Multi-driver Status Register */
	AT91_REG	 Reserved15[1]; 	 
	AT91_REG	 PIOA_PPUDR; 	/* Pull-up Disable Register */
	AT91_REG	 PIOA_PPUER; 	/* Pull-up Enable Register */
	AT91_REG	 PIOA_PPUSR; 	/* Pull-up Status Register */
	AT91_REG	 Reserved16[1];
	AT91_REG	 PIOA_ASR; 	/* Select A Register */
	AT91_REG	 PIOA_BSR; 	/* Select B Register */
	AT91_REG	 PIOA_ABSR; 	/* AB Select Status Register */
	AT91_REG	 Reserved17[9]; 	 
	AT91_REG	 PIOA_OWER; 	/* Output Write Enable Register */
	AT91_REG	 PIOA_OWDR; 	/* Output Write Disable Register */
	AT91_REG	 PIOA_OWSR; 	/* Output Write Status Register */
	AT91_REG	 Reserved18[85]; 	 
	AT91_REG	 PIOB_PER; 	/* PIO Enable Register */
	AT91_REG	 PIOB_PDR; 	/* PIO Disable Register */
	AT91_REG	 PIOB_PSR; 	/* PIO Status Register */
	AT91_REG	 Reserved19[1]; 	 
	AT91_REG	 PIOB_OER; 	/* Output Enable Register */
	AT91_REG	 PIOB_ODR; 	/* Output Disable Registerr */
	AT91_REG	 PIOB_OSR; 	/* Output Status Register */
	AT91_REG	 Reserved20[1]; 	 
	AT91_REG	 PIOB_IFER; 	/* Input Filter Enable Register */
	AT91_REG	 PIOB_IFDR; 	/* Input Filter Disable Register */
	AT91_REG	 PIOB_IFSR; 	/* Input Filter Status Register */
	AT91_REG	 Reserved21[1]; 	 
	AT91_REG	 PIOB_SODR; 	/* Set Output Data Register */
	AT91_REG	 PIOB_CODR; 	/* Clear Output Data Register */
	AT91_REG	 PIOB_ODSR; 	/* Output Data Status Register */
	AT91_REG	 PIOB_PDSR; 	/* Pin Data Status Register */
	AT91_REG	 PIOB_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PIOB_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PIOB_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 PIOB_ISR; 	/* Interrupt Status Register */
	AT91_REG	 PIOB_MDER; 	/* Multi-driver Enable Register */
	AT91_REG	 PIOB_MDDR; 	/* Multi-driver Disable Register */
	AT91_REG	 PIOB_MDSR; 	/* Multi-driver Status Register */
	AT91_REG	 Reserved22[1];  
	AT91_REG	 PIOB_PPUDR; 	/* Pull-up Disable Register */
	AT91_REG	 PIOB_PPUER; 	/* Pull-up Enable Register */
	AT91_REG	 PIOB_PPUSR; 	/* Pull-up Status Register */
	AT91_REG	 Reserved23[1]; 	 
	AT91_REG	 PIOB_ASR; 	/* Select A Register */
	AT91_REG	 PIOB_BSR; 	/* Select B Register */
	AT91_REG	 PIOB_ABSR; 	/* AB Select Status Register */
	AT91_REG	 Reserved24[9]; 
	AT91_REG	 PIOB_OWER; 	/* Output Write Enable Register */
	AT91_REG	 PIOB_OWDR; 	/* Output Write Disable Register */
	AT91_REG	 PIOB_OWSR; 	/* Output Write Status Register */
	AT91_REG	 Reserved25[85];  
	AT91_REG	 PIOC_PER; 	/* PIO Enable Register */
	AT91_REG	 PIOC_PDR; 	/* PIO Disable Register */
	AT91_REG	 PIOC_PSR; 	/* PIO Status Register */
	AT91_REG	 Reserved26[1]; 
	AT91_REG	 PIOC_OER; 	/* Output Enable Register */
	AT91_REG	 PIOC_ODR; 	/* Output Disable Registerr */
	AT91_REG	 PIOC_OSR; 	/* Output Status Register */
	AT91_REG	 Reserved27[1];  
	AT91_REG	 PIOC_IFER; 	/* Input Filter Enable Register */
	AT91_REG	 PIOC_IFDR; 	/* Input Filter Disable Register */
	AT91_REG	 PIOC_IFSR; 	/* Input Filter Status Register */
	AT91_REG	 Reserved28[1];  
	AT91_REG	 PIOC_SODR; 	/* Set Output Data Register */
	AT91_REG	 PIOC_CODR; 	/* Clear Output Data Register */
	AT91_REG	 PIOC_ODSR; 	/* Output Data Status Register */
	AT91_REG	 PIOC_PDSR; 	/* Pin Data Status Register */
	AT91_REG	 PIOC_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PIOC_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PIOC_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 PIOC_ISR; 	/* Interrupt Status Register */
	AT91_REG	 PIOC_MDER; 	/* Multi-driver Enable Register */
	AT91_REG	 PIOC_MDDR; 	/* Multi-driver Disable Register */
	AT91_REG	 PIOC_MDSR; 	/* Multi-driver Status Register */
	AT91_REG	 Reserved29[1]; 
	AT91_REG	 PIOC_PPUDR; 	/* Pull-up Disable Register */
	AT91_REG	 PIOC_PPUER; 	/* Pull-up Enable Register */
	AT91_REG	 PIOC_PPUSR; 	/* Pull-up Status Register */
	AT91_REG	 Reserved30[1]; 
	AT91_REG	 PIOC_ASR; 	/* Select A Register */
	AT91_REG	 PIOC_BSR; 	/* Select B Register */
	AT91_REG	 PIOC_ABSR; 	/* AB Select Status Register */
	AT91_REG	 Reserved31[9]; 
	AT91_REG	 PIOC_OWER; 	/* Output Write Enable Register */
	AT91_REG	 PIOC_OWDR; 	/* Output Write Disable Register */
	AT91_REG	 PIOC_OWSR; 	/* Output Write Status Register */
	AT91_REG	 Reserved32[213]; 
	AT91_REG	 PMC_SCER; 	/* System Clock Enable Register */
	AT91_REG	 PMC_SCDR; 	/* System Clock Disable Register */
	AT91_REG	 PMC_SCSR; 	/* System Clock Status Register */
	AT91_REG	 Reserved33[1]; 
	AT91_REG	 PMC_PCER; 	/* Peripheral Clock Enable Register */
	AT91_REG	 PMC_PCDR; 	/* Peripheral Clock Disable Register */
	AT91_REG	 PMC_PCSR; 	/* Peripheral Clock Status Register */
	AT91_REG	 Reserved34[1]; 
	AT91_REG	 PMC_MOR; 	/* Main Oscillator Register */
	AT91_REG	 PMC_MCFR; 	/* Main Clock  Frequency Register */
	AT91_REG	 PMC_PLLAR; 	/* PLL A Register */
	AT91_REG	 PMC_PLLBR; 	/* PLL B Register */
	AT91_REG	 PMC_MCKR; 	/* Master Clock Register */
	AT91_REG	 Reserved35[3]; 
	AT91_REG	 PMC_PCKR[8]; 	/* Programmable Clock Register */
	AT91_REG	 PMC_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PMC_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PMC_SR; 	/* Status Register */
	AT91_REG	 PMC_IMR; 	/* Interrupt Mask Register */
	AT91_REG	 Reserved36[36]; 
	AT91_REG	 RSTC_RCR; 	/* Reset Control Register */
	AT91_REG	 RSTC_RSR; 	/* Reset Status Register */
	AT91_REG	 RSTC_RMR; 	/* Reset Mode Register */
	AT91_REG	 Reserved37[1]; 
	AT91_REG	 SHDWC_SHCR; 	/* Shut Down Control Register */
	AT91_REG	 SHDWC_SHMR; 	/* Shut Down Mode Register */
	AT91_REG	 SHDWC_SHSR; 	/* Shut Down Status Register */
	AT91_REG	 Reserved38[1]; 
	AT91_REG	 RTTC_RTMR; 	/* Real-time Mode Register */
	AT91_REG	 RTTC_RTAR; 	/* Real-time Alarm Register */
	AT91_REG	 RTTC_RTVR; 	/* Real-time Value Register */
	AT91_REG	 RTTC_RTSR; 	/* Real-time Status Register */
	AT91_REG	 PITC_PIMR; 	/* Period Interval Mode Register */
	AT91_REG	 PITC_PISR; 	/* Period Interval Status Register */
	AT91_REG	 PITC_PIVR; 	/* Period Interval Value Register */
	AT91_REG	 PITC_PIIR; 	/* Period Interval Image Register */
	AT91_REG	 WDTC_WDCR; 	/* Watchdog Control Register */
	AT91_REG	 WDTC_WDMR; 	/* Watchdog Mode Register */
	AT91_REG	 WDTC_WDSR; 	/* Watchdog Status Register */
	AT91_REG	 Reserved39[1]; 
	AT91_REG	 SYS_GPBR0; 	/* General Purpose Register 0 */
	AT91_REG	 SYS_GPBR1; 	/* General Purpose Register 1 */
	AT91_REG	 SYS_GPBR2; 	/* General Purpose Register 2 */
	AT91_REG	 SYS_GPBR3; 	/* General Purpose Register 3 */
} AT91S_SYS, *AT91PS_SYS;

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Peripheral Data Controller */
/* ***************************************************************************** */
typedef struct _AT91S_PDC {
	AT91_REG	 PDC_RPR; 	/* Receive Pointer Register */
	AT91_REG	 PDC_RCR; 	/* Receive Counter Register */
	AT91_REG	 PDC_TPR; 	/* Transmit Pointer Register */
	AT91_REG	 PDC_TCR; 	/* Transmit Counter Register */
	AT91_REG	 PDC_RNPR; 	/* Receive Next Pointer Register */
	AT91_REG	 PDC_RNCR; 	/* Receive Next Counter Register */
	AT91_REG	 PDC_TNPR; 	/* Transmit Next Pointer Register */
	AT91_REG	 PDC_TNCR; 	/* Transmit Next Counter Register */
	AT91_REG	 PDC_PTCR; 	/* PDC Transfer Control Register */
	AT91_REG	 PDC_PTSR; 	/* PDC Transfer Status Register */
} AT91S_PDC, *AT91PS_PDC;

/* -------- PDC_PTCR : (PDC Offset: 0x20) PDC Transfer Control Register --------  */
#define AT91C_PDC_RXTEN       ((unsigned int) 0x1 <<  0) /* (PDC) Receiver Transfer Enable */
#define AT91C_PDC_RXTDIS      ((unsigned int) 0x1 <<  1) /* (PDC) Receiver Transfer Disable */
#define AT91C_PDC_TXTEN       ((unsigned int) 0x1 <<  8) /* (PDC) Transmitter Transfer Enable */
#define AT91C_PDC_TXTDIS      ((unsigned int) 0x1 <<  9) /* (PDC) Transmitter Transfer Disable */

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Power Management Controler */
/* ***************************************************************************** */
typedef struct _AT91S_PMC {
	AT91_REG	 PMC_SCER; 	/* System Clock Enable Register */
	AT91_REG	 PMC_SCDR; 	/* System Clock Disable Register */
	AT91_REG	 PMC_SCSR; 	/* System Clock Status Register */
	AT91_REG	 Reserved0[1];
	AT91_REG	 PMC_PCER; 	/* Peripheral Clock Enable Register */
	AT91_REG	 PMC_PCDR; 	/* Peripheral Clock Disable Register */
	AT91_REG	 PMC_PCSR; 	/* Peripheral Clock Status Register */
	AT91_REG	 Reserved1[1];
	AT91_REG	 PMC_MOR; 	/* Main Oscillator Register */
	AT91_REG	 PMC_MCFR; 	/* Main Clock  Frequency Register */
	AT91_REG	 PMC_PLLAR; 	/* PLL A Register */
	AT91_REG	 PMC_PLLBR; 	/* PLL B Register */
	AT91_REG	 PMC_MCKR; 	/* Master Clock Register */
	AT91_REG	 Reserved2[3];
	AT91_REG	 PMC_PCKR[8]; 	/* Programmable Clock Register */
	AT91_REG	 PMC_IER; 	/* Interrupt Enable Register */
	AT91_REG	 PMC_IDR; 	/* Interrupt Disable Register */
	AT91_REG	 PMC_SR; 	/* Status Register */
	AT91_REG	 PMC_IMR; 	/* Interrupt Mask Register */
} AT91S_PMC, *AT91PS_PMC;

/* -------- PMC_SCER : (PMC Offset: 0x0) System Clock Enable Register --------  */
#define AT91C_PMC_PCK         ((unsigned int) 0x1 <<  0) /* (PMC) Processor Clock */
#define AT91C_PMC_UHP         ((unsigned int) 0x1 <<  6) /* (PMC) USB Host Port Clock */
#define AT91C_PMC_UDP         ((unsigned int) 0x1 <<  7) /* (PMC) USB Device Port Clock */
#define AT91C_PMC_PCK0        ((unsigned int) 0x1 <<  8) /* (PMC) Programmable Clock Output */
#define AT91C_PMC_PCK1        ((unsigned int) 0x1 <<  9) /* (PMC) Programmable Clock Output */
#define AT91C_PMC_PCK2        ((unsigned int) 0x1 << 10) /* (PMC) Programmable Clock Output */
#define AT91C_PMC_PCK3        ((unsigned int) 0x1 << 11) /* (PMC) Programmable Clock Output */
#define AT91C_PMC_HCK0        ((unsigned int) 0x1 << 16) /* (PMC) AHB LCDCK Clock Output */
#define AT91C_PMC_HCK1        ((unsigned int) 0x1 << 17) /* (PMC) AHB LCDCK Clock Output */
/* -------- PMC_MCKR : (PMC Offset: 0x30) Master Clock Register --------  */
#define AT91C_PMC_CSS         ((unsigned int) 0x3 <<  0) /* (PMC) Programmable Clock Selection */
#define 	AT91C_PMC_CSS_SLOW_CLK             ((unsigned int) 0x0) /* (PMC) Slow Clock is selected */
#define 	AT91C_PMC_CSS_MAIN_CLK             ((unsigned int) 0x1) /* (PMC) Main Clock is selected */
#define 	AT91C_PMC_CSS_PLLA_CLK             ((unsigned int) 0x2) /* (PMC) Clock from PLL A is selected */
#define 	AT91C_PMC_CSS_PLLB_CLK             ((unsigned int) 0x3) /* (PMC) Clock from PLL B is selected */
#define AT91C_PMC_PRES        ((unsigned int) 0x7 <<  2) /* (PMC) Programmable Clock Prescaler */
#define 	AT91C_PMC_PRES_CLK                  ((unsigned int) 0x0 <<  2) /* (PMC) Selected clock */
#define 	AT91C_PMC_PRES_CLK_2                ((unsigned int) 0x1 <<  2) /* (PMC) Selected clock divided by 2 */
#define 	AT91C_PMC_PRES_CLK_4                ((unsigned int) 0x2 <<  2) /* (PMC) Selected clock divided by 4 */
#define 	AT91C_PMC_PRES_CLK_8                ((unsigned int) 0x3 <<  2) /* (PMC) Selected clock divided by 8 */
#define 	AT91C_PMC_PRES_CLK_16               ((unsigned int) 0x4 <<  2) /* (PMC) Selected clock divided by 16 */
#define 	AT91C_PMC_PRES_CLK_32               ((unsigned int) 0x5 <<  2) /* (PMC) Selected clock divided by 32 */
#define 	AT91C_PMC_PRES_CLK_64               ((unsigned int) 0x6 <<  2) /* (PMC) Selected clock divided by 64 */
#define AT91C_PMC_MDIV        ((unsigned int) 0x3 <<  8) /* (PMC) Master Clock Division */
#define 	AT91C_PMC_MDIV_1                    ((unsigned int) 0x0 <<  8) /* (PMC) The master clock and the processor clock are the same */
#define 	AT91C_PMC_MDIV_2                    ((unsigned int) 0x1 <<  8) /* (PMC) The processor clock is twice as fast as the master clock */
#define 	AT91C_PMC_MDIV_3                    ((unsigned int) 0x2 <<  8) /* (PMC) The processor clock is four times faster than the master clock */
/* -------- PMC_IER : (PMC Offset: 0x60) PMC Interrupt Enable Register --------  */
#define AT91C_PMC_MOSCS       ((unsigned int) 0x1 <<  0) /* (PMC) MOSC Status/Enable/Disable/Mask */
#define AT91C_PMC_LOCKA       ((unsigned int) 0x1 <<  1) /* (PMC) PLL A Status/Enable/Disable/Mask */
#define AT91C_PMC_LOCKB       ((unsigned int) 0x1 <<  2) /* (PMC) PLL B Status/Enable/Disable/Mask */
#define AT91C_PMC_MCKRDY      ((unsigned int) 0x1 <<  3) /* (PMC) Master Clock Status/Enable/Disable/Mask */
#define AT91C_PMC_PCK0RDY     ((unsigned int) 0x1 <<  8) /* (PMC) PCK0_RDY Status/Enable/Disable/Mask */
#define AT91C_PMC_PCK1RDY     ((unsigned int) 0x1 <<  9) /* (PMC) PCK1_RDY Status/Enable/Disable/Mask */
#define AT91C_PMC_PCK2RDY     ((unsigned int) 0x1 << 10) /* (PMC) PCK2_RDY Status/Enable/Disable/Mask */
#define AT91C_PMC_PCK3RDY     ((unsigned int) 0x1 << 11) /* (PMC) PCK3_RDY Status/Enable/Disable/Mask */

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR Reset Controller Interface */
/* ***************************************************************************** */
typedef struct _AT91S_RSTC {
	AT91_REG	 RSTC_RCR; 	/* Reset Control Register */
	AT91_REG	 RSTC_RSR; 	/* Reset Status Register */
	AT91_REG	 RSTC_RMR; 	/* Reset Mode Register */
} AT91S_RSTC, *AT91PS_RSTC;

/* -------- RSTC_RCR : (RSTC Offset: 0x0) Reset Control Register --------  */
#define AT91C_RSTC_PROCRST    ((unsigned int) 0x1 <<  0) /* (RSTC) Processor Reset */
#define AT91C_RSTC_ICERST     ((unsigned int) 0x1 <<  1) /* (RSTC) ICE Interface Reset */
#define AT91C_RSTC_PERRST     ((unsigned int) 0x1 <<  2) /* (RSTC) Peripheral Reset */
#define AT91C_RSTC_EXTRST     ((unsigned int) 0x1 <<  3) /* (RSTC) External Reset */
#define AT91C_RSTC_KEY        ((unsigned int) 0xFF << 24) /* (RSTC) Password */
/* -------- RSTC_RSR : (RSTC Offset: 0x4) Reset Status Register --------  */
#define AT91C_RSTC_URSTS      ((unsigned int) 0x1 <<  0) /* (RSTC) User Reset Status */
#define AT91C_RSTC_RSTTYP     ((unsigned int) 0x7 <<  8) /* (RSTC) Reset Type */
#define 	AT91C_RSTC_RSTTYP_GENERAL              ((unsigned int) 0x0 <<  8) /* (RSTC) General reset. Both VDDCORE and VDDBU rising. */
#define 	AT91C_RSTC_RSTTYP_WAKEUP               ((unsigned int) 0x1 <<  8) /* (RSTC) WakeUp Reset. VDDCORE rising. */
#define 	AT91C_RSTC_RSTTYP_WATCHDOG             ((unsigned int) 0x2 <<  8) /* (RSTC) Watchdog Reset. Watchdog overflow occured. */
#define 	AT91C_RSTC_RSTTYP_SOFTWARE             ((unsigned int) 0x3 <<  8) /* (RSTC) Software Reset. Processor reset required by the software. */
#define 	AT91C_RSTC_RSTTYP_USER                 ((unsigned int) 0x4 <<  8) /* (RSTC) User Reset. NRST pin detected low. */
#define AT91C_RSTC_NRSTL      ((unsigned int) 0x1 << 16) /* (RSTC) NRST pin level */
#define AT91C_RSTC_SRCMP      ((unsigned int) 0x1 << 17) /* (RSTC) Software Reset Command in Progress. */
/* -------- RSTC_RMR : (RSTC Offset: 0x8) Reset Mode Register --------  */
#define AT91C_RSTC_URSTEN     ((unsigned int) 0x1 <<  0) /* (RSTC) User Reset Enable */
#define AT91C_RSTC_URSTIEN    ((unsigned int) 0x1 <<  4) /* (RSTC) User Reset Interrupt Enable */
#define AT91C_RSTC_ERSTL      ((unsigned int) 0xF <<  8) /* (RSTC) User Reset Enable */

/* ========== Register definition for PMC peripheral ========== */ 
#define AT91C_PMC_PCER  ((AT91_REG *) 	0xFFFFFC10) /* (PMC) Peripheral Clock Enable Register */
#define AT91C_PMC_PCKR  ((AT91_REG *) 	0xFFFFFC40) /* (PMC) Programmable Clock Register */
#define AT91C_PMC_MCKR  ((AT91_REG *) 	0xFFFFFC30) /* (PMC) Master Clock Register */
#define AT91C_PMC_PLLAR ((AT91_REG *) 	0xFFFFFC28) /* (PMC) PLL A Register */
#define AT91C_PMC_PCDR  ((AT91_REG *) 	0xFFFFFC14) /* (PMC) Peripheral Clock Disable Register */
#define AT91C_PMC_SCSR  ((AT91_REG *) 	0xFFFFFC08) /* (PMC) System Clock Status Register */
#define AT91C_PMC_MCFR  ((AT91_REG *) 	0xFFFFFC24) /* (PMC) Main Clock  Frequency Register */
#define AT91C_PMC_IMR   ((AT91_REG *) 	0xFFFFFC6C) /* (PMC) Interrupt Mask Register */
#define AT91C_PMC_IER   ((AT91_REG *) 	0xFFFFFC60) /* (PMC) Interrupt Enable Register */
#define AT91C_PMC_MOR   ((AT91_REG *) 	0xFFFFFC20) /* (PMC) Main Oscillator Register */
#define AT91C_PMC_IDR   ((AT91_REG *) 	0xFFFFFC64) /* (PMC) Interrupt Disable Register */
#define AT91C_PMC_PLLBR ((AT91_REG *) 	0xFFFFFC2C) /* (PMC) PLL B Register */
#define AT91C_PMC_SCDR  ((AT91_REG *) 	0xFFFFFC04) /* (PMC) System Clock Disable Register */
#define AT91C_PMC_PCSR  ((AT91_REG *) 	0xFFFFFC18) /* (PMC) Peripheral Clock Status Register */
#define AT91C_PMC_SCER  ((AT91_REG *) 	0xFFFFFC00) /* (PMC) System Clock Enable Register */
#define AT91C_PMC_SR    ((AT91_REG *) 	0xFFFFFC68) /* (PMC) Status Register */

/* ========== Register definition for PDC_SPI0 peripheral ========== */
#define AT91C_SPI0_PTCR ((AT91_REG *) 	0xFFFC8120) /* (PDC_SPI0) PDC Transfer Control Register */
#define AT91C_SPI0_TCR  ((AT91_REG *) 	0xFFFC810C) /* (PDC_SPI0) Transmit Counter Register */
#define AT91C_SPI0_RPR  ((AT91_REG *) 	0xFFFC8100) /* (PDC_SPI0) Receive Pointer Register */
#define AT91C_SPI0_TPR  ((AT91_REG *) 	0xFFFC8108) /* (PDC_SPI0) Transmit Pointer Register */
#define AT91C_SPI0_PTSR ((AT91_REG *) 	0xFFFC8124) /* (PDC_SPI0) PDC Transfer Status Register */
#define AT91C_SPI0_RNCR ((AT91_REG *) 	0xFFFC8114) /* (PDC_SPI0) Receive Next Counter Register */
#define AT91C_SPI0_TNPR ((AT91_REG *) 	0xFFFC8118) /* (PDC_SPI0) Transmit Next Pointer Register */
#define AT91C_SPI0_RCR  ((AT91_REG *) 	0xFFFC8104) /* (PDC_SPI0) Receive Counter Register */
#define AT91C_SPI0_RNPR ((AT91_REG *) 	0xFFFC8110) /* (PDC_SPI0) Receive Next Pointer Register */
#define AT91C_SPI0_TNCR ((AT91_REG *) 	0xFFFC811C) /* (PDC_SPI0) Transmit Next Counter Register */

#endif
