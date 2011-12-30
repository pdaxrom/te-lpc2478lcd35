/*
 * (C) Copyright 2006-2007 Embedded Artists AB <www.embeddedartists.com>
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

#include <config.h>
#include <version.h>
#include <asm/arch/hardware.h>
#include <asm/hardware.h>
#include "lcd.h"

#define USE_32_BIT_DATABUS 0

/******************************************************************************
 * Defines, macros, and typedefs
 *****************************************************************************/
#define	USE_USB		1

#define PLL_MValue     11 // Fin = 12MHz Fcco = 288 MHz M = (288*(10^6)*1)/(2*12*10^6) N = 1 M = 12.
#define PLL_NValue     0
#define CCLKDivValue   3  // Fcco/4 = 72 MHz.
#define USBCLKDivValue 5  // Fcco/6 = 48 MHz.

/* System configuration: Fosc, Fcclk, Fcco, Fpclk must be defined */
/* PLL input Crystal frequence range 4KHz~20MHz. */
#define Fosc	12000000
/* System frequence,should be less than 80MHz. */
#define Fcclk	72000000
#define Fcco	288000000
#define Fpclk	(Fcclk / 1)

#define MAM_SETTING  1                /* 0=disabled,
                                         1=partly enabled (enabled for code prefetch, but not for data),
                                         2=fully enabled */

#define MEM_MAP 2                     /* When executing from RAM, MAM_MAP should always be 2 */

#define SDRAM_BASE_ADDR		0xA0000000

#define LCD_FRAMEBUFFER_START	0xA1F00000

/*****************************************************************************
 *
 * Description:
 *    Delay execution by a specified number of milliseconds by using
 *    timer #1. A polled implementation.
 *
 * Params:
 *    [in] delayInMs - the number of milliseconds to delay.
 *
 ****************************************************************************/
static void
delayMs(unsigned short delayInMs)
{
  /*
   * setup timer #1 for delay
   */
  T1TCR = 0x02;          //stop and reset timer
  T1PR  = 0x00;          //set prescaler to zero
  T1MR0 = delayInMs * (Fpclk / 1000);
  T1IR  = 0xff;          //reset all interrrupt flags
  T1MCR = 0x04;          //stop timer on match
  T1TCR = 0x01;          //start timer
  
  //wait until delay time has elapsed
  while (T1TCR & 0x01)
    ;
}

/******************************************************************************
** Function name:		GPIOinit
**
** Descriptions:		Sets all GPIO ports to a known state
** parameters:			None
** Returned value:	None
** 
******************************************************************************/
static void
GPIOinit(void)
{
    PINSEL0  = 0x00000000;
    PINSEL1  = 0x00000000;
    PINSEL2  = 0x00000000;
    PINSEL3  = 0x00000000;
    PINSEL4  = 0x00000000;
    PINSEL5  = 0x00000000;
    PINSEL6  = 0x00000000;
    PINSEL7  = 0x00000000;
    PINSEL8  = 0x00000000;
    PINSEL9  = 0x00000000;
    PINSEL10 = 0x00000000;

    IODIR0   = 0x00000000;
    IODIR1   = 0x00000000;
    //IO0SET   = 0x00000000;
    //IO1SET   = 0x00000000;

    FIO0DIR  = 0x00000000;
    FIO1DIR  = 0x00000000;
    FIO2DIR  = 0x00000000;
    FIO3DIR  = 0x00000000;
    FIO4DIR  = 0x00000000;

    //FIO0SET  = 0x00000000;
    //FIO1SET  = 0x00000000;
    //FIO2SET  = 0x00000000;
    //FIO3SET  = 0x00000000;
    //FIO4SET  = 0x00000000;

    FIO0MASK = 0x00000000;
    FIO1MASK = 0x00000000;
    FIO2MASK = 0x00000000;
    FIO3MASK = 0x00000000;
    FIO4MASK = 0x00000000;

    SCS |= 1; /* set GPIOx to use Fast I/O */
}

/******************************************************************************
** Function name:		VICinit
**
** Descriptions:		Initialize the VIC to a known state
** parameters:			None
** Returned value:	None
** 
******************************************************************************/
static void
VICinit(void)
{
  //initialize VIC
  VICIntEnClr    = 0xFFFFFFFF;           /* Disable ALL interrupts                             */
  VICProtection  = 0;                    /* Setup interrupt controller                         */
  VICVectAddr    = 0;
  VICIntSelect   = 0;
  VICVectAddr0   = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr1   = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr2   = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr3   = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr4   = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr5   = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr6   = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr7   = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr8   = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr9   = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr10  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr11  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr12  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr13  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr14  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr15  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr16  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr17  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr18  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr19  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr20  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr21  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr22  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr23  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr24  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr25  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr26  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr27  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr28  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr29  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr30  = (unsigned int)0;      /* Set the vector address                             */
  VICVectAddr31  = (unsigned int)0;      /* Set the vector address                             */

  VICVectCntl0   = (unsigned int)0xf;
  VICVectCntl1   = (unsigned int)0xf;
  VICVectCntl2   = (unsigned int)0xf;
  VICVectCntl3   = (unsigned int)0xf;
  VICVectCntl4   = (unsigned int)0xf;
  VICVectCntl5   = (unsigned int)0xf;
  VICVectCntl6   = (unsigned int)0xf;
  VICVectCntl7   = (unsigned int)0xf;
  VICVectCntl8   = (unsigned int)0xf;
  VICVectCntl9   = (unsigned int)0xf;
  VICVectCntl10   = (unsigned int)0xf;
  VICVectCntl11   = (unsigned int)0xf;
  VICVectCntl12   = (unsigned int)0xf;
  VICVectCntl13   = (unsigned int)0xf;
  VICVectCntl14   = (unsigned int)0xf;
  VICVectCntl15   = (unsigned int)0xf;
  VICVectCntl16   = (unsigned int)0xf;
  VICVectCntl17   = (unsigned int)0xf;
  VICVectCntl18   = (unsigned int)0xf;
  VICVectCntl19   = (unsigned int)0xf;
  VICVectCntl20   = (unsigned int)0xf;
  VICVectCntl21   = (unsigned int)0xf;
  VICVectCntl22   = (unsigned int)0xf;
  VICVectCntl23   = (unsigned int)0xf;
  VICVectCntl24   = (unsigned int)0xf;
  VICVectCntl25   = (unsigned int)0xf;
  VICVectCntl26   = (unsigned int)0xf;
  VICVectCntl27   = (unsigned int)0xf;
  VICVectCntl28   = (unsigned int)0xf;
  VICVectCntl29   = (unsigned int)0xf;
  VICVectCntl30   = (unsigned int)0xf;
  VICVectCntl31   = (unsigned int)0xf;
}

/******************************************************************************
** Function name:		UART0init
**
** Description: 		Configure UART #0 to 38400 bps, 8N1
** Parameters:			None
** Returned value:	None
** 
******************************************************************************/
void
UART0init(void)
{
  PINSEL0 = 0x00000050;  
  PINSEL1 = 0x00000000;  

  U0LCR = 0;
  U0IER = 0;
  U0LCR = 0x80;	/* DLAB=1 */
  U0DLL = (Fpclk/16)/CONFIG_BAUDRATE;
  U0DLM = 0;
  U0LCR = 0x03;	/* 8N1, DLAB=0  */
  U0FCR = 0x07;		/* Enable RX and TX FIFOs */
}

/*****************************************************************************
** Function name:   UART1init
**
** Description:     Configure UART #1 to 9600 bps, 8N1
** Parameters:      None
** Returned value:  None
**
*****************************************************************************/
void
UART1init(void)
{
  PINSEL7 |= 0x30003fff;
  U1LCR = 0;
  U1IER = 0;
  U1LCR = 0x80;
  U1DLL = ((Fpclk/16)/9600) & 0xff;
  U1DLM = ((Fpclk/16)/9600) >> 8;
  U1LCR = 0x03;
  U1FCR = 0x07;

  U1THR = '\n';
}

/******************************************************************************
** Function name:		printEndBanner
**
** Descriptions:		Prints a couple of ending chars
** parameters:			None
** Returned value:	None
** 
******************************************************************************/
void
printEndBanner(void)
{
  static const unsigned char message[] = "..\r\n";
  unsigned int i;
  unsigned char *pMsg = (unsigned char *)message - (unsigned char *)TEXT_BASE;

  for(i=0; i<(sizeof(message)-1); i++)
  {
    while((U0LSR & (1<<5)) == 0); /* Wait for empty U0THR */
    U0THR = *pMsg++;
  }
}

/******************************************************************************
** Function name:		printBanner
**
** Descriptions:		Prints a startup banner
** parameters:			None
** Returned value:	None
** 
******************************************************************************/
void
printBanner(void)
{
static const unsigned char message[] =
    "\n\n\r**********************************************\n\r"
          "*                LPC-2478-STK                *\n\r"
          "*    www.olimex.com/dev/lpc-2478stk.html     *\n\r"
          "**********************************************\n\r";

  unsigned int i;
  unsigned char *pMsg = (unsigned char *)message - (unsigned char *)TEXT_BASE;

  for(i=0; i<(sizeof(message)-1); i++)
  {
    while((U0LSR & (1<<5)) == 0); /* Wait for empty U0THR */
    U0THR = *pMsg++;
  }
}


void Init_CPC(void)
{
    uint32_t MValue, NValue; // M,N value.

    PCLKSEL0 = 0x55555555; // PCLK is 1/1 CCLK.
    PCLKSEL1 = 0x55555555;

    //PCLKSEL0 = 0xAAAAAAAA; // PCLK is 1/2 CCLK.
    //PCLKSEL1 = 0xAAAAAAAA;

    //PCLKSEL0 = 0x00000000; // PCLK is 1/4 CCLK.
    //PCLKSEL1 = 0x00000000;

    if (PLLSTAT & (1 << 25)) {
	PLLCON = 1; // Enable PLL, disconnected.
	PLLFEED = 0xaa;
	PLLFEED = 0x55;
    }

    PLLCON = 0; // Disable PLL, disconnected.
    PLLFEED = 0xaa;
    PLLFEED = 0x55;

    SCS |= 0x20; // Enable main OSC.
    while(!(SCS & 0x40)); // Wait until main OSC is usable.

    CLKSRCSEL = 0x1; // Select main OSC, 12MHz, as the PLL clock source.

    PLLCFG = PLL_MValue | (PLL_NValue << 16);
    PLLFEED = 0xaa;
    PLLFEED = 0x55;

    PLLCON = 1; // Enable PLL, disconnected.
    PLLFEED = 0xaa;
    PLLFEED = 0x55;

    CCLKCFG = CCLKDivValue; // Set clock divider.
#if USE_USB
    USBCLKCFG = USBCLKDivValue; // Usbclk = 288 MHz/6 = 48 MHz.
#endif

    while (((PLLSTAT & (1 << 26)) == 0)); // Check lock bit status.

    MValue = PLLSTAT & 0x00007FFF;
    NValue = (PLLSTAT & 0x00FF0000) >> 16;

    while ((MValue != PLL_MValue) && ( NValue != PLL_NValue) );

    PLLCON = 3; // Enable and connect.
    PLLFEED = 0xaa;
    PLLFEED = 0x55;

    while ( ((PLLSTAT & (1 << 25)) == 0) ); // Check connect bit status.
}

void Init_MAM(void) 
{
    MAMCR = 0x00; // MAM functions disabled.
    MAMTIM = 0x03; // MAM fetch cycles are 3 CCLKs in duration.
    MAMCR = 0x02; // MAM functions full enabled.
}

/******************************************************************************
** Function name:		ConfigureEMC
**
** Descriptions:		Configure EMC for external SDRAM, NAND and NOR FLASH
** parameters:			None
** Returned value:	None
** 
******************************************************************************/
#define NOP asm volatile (" nop ")
#define SDRAM_BASE     0xA0000000  // 0xA000 0000 - 0xAFFF FFFF Dynamic memory bank 0.

void Init_EMC(void)
{
	volatile unsigned int i, dummy = dummy;

    // Initialize EMC and SDRAM for Samsung K4S561632H.
	SCS     |= 0x00000002;   // Reset EMC. 

	EMC_CTRL = 0x00000001; // Enable EMC and Disable Address mirror.

	PCONP   |= 0x00000800;   // Turn on EMC PCLK.

	PINSEL5  = 0x05050555; // CAS,RAS,CLKOUT0_1,DYCS0_1,CKEOUT0_1,DQMOUT0_1.
	PINSEL6  = 0x55555555; // D0-D15.
	PINSEL8  = 0x55555555; // A0-A15.
	PINSEL9  = 0x10555555; // A16-A23,OE,WE,BLS0_1,CS_0_.  

	EMC_DYN_RP     = 2; // Command period: 3(n+1) clock cycles.
	EMC_DYN_RAS    = 3; // RAS command period: 4(n+1) clock cycles.
	EMC_DYN_SREX   = 7; // Self-refresh period: 8(n+1) clock cycles.
	EMC_DYN_APR    = 2; // Data out to active: 3(n+1) clock cycles.
	EMC_DYN_DAL    = 5; // Data in to active: 5(n+1) clock cycles.
	EMC_DYN_WR     = 1;	// Write recovery: 2(n+1) clock cycles.
	EMC_DYN_RC     = 5;	// Active to Active cmd: 6(n+1) clock cycles.
	EMC_DYN_RFC    = 5;	// Auto-refresh: 6(n+1) clock cycles.
	EMC_DYN_XSR    = 7;	// Exit self-refresh: 8(n+1) clock cycles.
	EMC_DYN_RRD    = 1;	// Active bank A->B: 2(n+1) clock cycles.
	EMC_DYN_MRD    = 2;	// Load Mode to Active cmd: 3(n+1) clock cycles.

	EMC_DYN_RD_CFG  = 1; // Command delayed strategy.

	EMC_DYN_RASCAS0 = 0x00000303; //  Default setting, RAS latency 3 CCLKs, CAS latenty 3 CCLKs.

	EMC_DYN_CFG0 = 0x00000680;  // 256MB, 16Mx16, 4 banks, row=13, column=9.

	for(i = 0; i < 0x40000; i++)
	    NOP; // Wait 128 AHB clock cycles.

	EMC_DYN_CTRL = 0x00000183; // Mem clock enable, CLKOUT runs, send command: NOP.

	for(i = 0; i < 0x40000; i++)
	    NOP; // Wait 128 AHB clock cycles.

	EMC_DYN_CTRL = 0x00000103; // Send command: PRECHARGE-ALL, shortest possible refresh period.

	EMC_DYN_RFSH = 2; // Set 32 CCLKs between SDRAM refresh cycles.
	for(i = 0; i < 0x40; i++)
	    NOP; // Wait 128 AHB clock cycles.
	EMC_DYN_RFSH = 28; // Set 28 x 16CCLKs=448CCLK=7us between SDRAM refresh cycles.

	//To set mode register in SDRAM, enter mode by issue
	//MODE command, after finishing, bailout and back to NORMAL mode.

	EMC_DYN_CTRL  = 0x00000083; // Mem clock enable, CLKOUT runs, send command: MODE.

	dummy = *((volatile unsigned int*)(SDRAM_BASE | (0x33 << 12))); // Set mode register in SDRAM.

	EMC_DYN_CTRL  = 0x00000000; // Send command: NORMAL.

	EMC_DYN_CFG0 |= 0x00080000; // Enable buffer.

	for(i = 0; i < 0x40000; i++)
	    NOP; // Wait 128 AHB clock cycles.

	EMC_STA_WAITWEN0   = 0x2; // Selects the delay from chip select 0 to write enable.
	EMC_STA_WAITOEN0   = 0x2; // Selects the delay from chip select 0 or address change, whichever is later, to output enable.
	EMC_STA_WAITRD0    = 0x1f; // Selects the delay from chip select 0 to a read access.
        EMC_STA_WAITPAGE0  = 0x1f; // Selects the delay for asynchronous page mode sequential accesses for chip select 0.
        EMC_STA_WAITWR0    = 0x1f; // Selects the delay from chip select 0 to a write access.
        EMC_STA_WAITTURN0  = 0xf; // Selects the number of bus turnaround cycles for chip select 0.

	EMC_STA_CFG0       = 0x00000081; // Selects the memory configuration for static chip select 0.
}



/*****************************************************************************
 *
 * Description:
 *    Initialize system functions and GPIO
 *
 ****************************************************************************/
void
lowlevel_init(void)
{
  /********************************************************************************************
   * Remap vectors for RAM execution
   ********************************************************************************************/
  MEMMAP = 1;

#ifndef CONFIG_SKIP_LOWLEVEL_INIT
	/* move vectors to beginning of SRAM */
	asm volatile("  mov	r2, #0x40000000		\n"
	             "  mov	r0, #0x00000000   \n"
	             "  ldmneia r0!, {r3-r10}	\n"
	             "  stmneia r2!, {r3-r10} \n"
	             "  ldmneia r0, {r3-r9}   \n"
	             "  stmneia r2, {r3-r9}   \n" : : : 
		     "r0","r2","r3","r4","r5","r6","r7","r8","r9","r10");
#else
  /* move vectors to beginning of SRAM */
  asm volatile("  mov r2, #0x40000000   \n"
               "  mov r0, #0xa0000000   \n"
               "  ldmneia r0!, {r3-r10} \n"
               "  stmneia r2!, {r3-r10} \n"
               "  ldmneia r0, {r3-r9}   \n"
               "  stmneia r2, {r3-r9}   \n" : : :
         "r0", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10");
#endif

    //initialize the exception vector mapping
    MEMMAP = MEM_MAP;


#if USE_USB
    PCONP |= 0x80000000;		/* Turn On USB PCLK */
#endif

    Init_CPC();
    
    Init_MAM();

    //Init GPIO
    GPIOinit();

    //initialize VIC
    VICinit();

    //initialize UART #0 to 38400, 8N1
    UART0init();

#ifndef USE_32_BIT_DATABUS
    //initialize UART #1
    UART1init();
#endif
    //short delay
    delayMs(10);

    //print startup banner
    printBanner();

    /********************************************************************************************
     * Initialize external memory interface (EMC)
     ********************************************************************************************/
#ifndef CONFIG_SKIP_LOWLEVEL_INIT
    Init_EMC();
#endif

    //print final chars
    printEndBanner();

    LCD_Init(LCD_FRAMEBUFFER_START, NULL);

    LCD_Ctrl(1);

    printEndBanner();
}
