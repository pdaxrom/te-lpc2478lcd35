/****************************************************************************
 *  
 * Project: U-Boot support for the LPC22xx and LPC24xx boards from Olimex
 *
 * Copyright: Ivan Vasilev, Olimex Ltd. All rights reserved.
 * 
 * File: $File lpc24xx_usb.c $
 * Description: Board-specific USB initialization
 * Developer: Ivan Vasilev, <ivan at l123.org>
 *
 * Last change: $Date: 2008-04-08 09:23:26 +0300 (вторник, 08 Април 2008) $
 * Revision: $Revision: 4 $
 * Id: $Id: lpc2478lcd.c 4 2008-04-08 06:23:26Z Ivan $
 * Author: $Author: Ivan $
 *
 ****************************************************************************/

#include <common.h>
#include <asm/arch/hardware.h>
 
//#define USB_USE_PORT1
#define USB_USE_PORT2

int usb_board_init(void)
{
	/* turn on the clocks */
	OTG_CLK_CTRL = 0x1F;
	while(OTG_CLK_STAT != 0x1F);
	
/*#ifdef USB_USE_PORT1
	PINSEL1 &= ~(0x3<<26 | 0x3<<28);
	PINSEL1 |= (0x1<<26| 0x1<<28);
	
	PINSEL3 &= ~(0x3<<4 | 0x3<<6 | 0x3<<12 | 0x3<<22);
	PINSEL3 |= (0x1<<4 | 0x2<<6 | 0x2<<12 | 0x2<<22);	
#endif
#ifdef USB_USE_PORT2
	/*PINSEL1 &= ~(0x3<<30);
	PINSEL1 |= (0x1<<30);
	
	PINSEL2 &= ~(0x3<<24 | 0x3<<26);
	PINSEL2 |= (0x1<<24 | 0x1<<26);

	PINSEL3 &= ~(0x3<<28 | 0x3<<30);
	PINSEL3 = (0x1<<28 | 0x1<<30);
#endif	*/
/* do we need that? - turn on the AHB USB clock */
	/*(*(volatile unsigned long *)(0xffe0cff4)) |= 0x1<<4;*/
	
	/* P0.12 - USB2_PPWR */
	//PINSEL0 &= ~(0x3<<24);
	//PINSEL0 |= (0x1<<24);
	//IODIR0 |= 0x1<<12;
	//IOCLR0 = 0x1<<12;
	
	/* P0.13 - USB2_UP_LED */
	PINSEL0 &= ~(0x3<<26);
	PINSEL0 |= (0x1<<26);
	
	/* P0.29 - USB1_D+ */
	PINSEL1 &= ~(0x3<<26);
	PINSEL1 |= (0x1<<26);
	
	/* P0.30 - USB1_D- */
	PINSEL1 &= ~(0x3<<28);
	PINSEL1 |= (0x1<<28);
	
	/* P0.31 - USB2_D- */
	PINSEL1 &= ~(0x3<<30);
	PINSEL1 |= (0x1<<30);	
	
	
	/* P1.18 - USB1_UP_LED */
//	PINSEL3 &= ~(0x3<<4);
//	PINSEL3 |= (0x1<<4);
	
	/* P1.19 - USB1_PPWR */
//	PINSEL3 &= ~(0x3<<6);
//	PINSEL3 |= (0x2<<6);
	//IODIR1 |= 1<<19;
	//IOCLR1 = 1<<19;
	
	/* P1.22 - USB1_PWRD */
//	PINSEL3 &= ~(0x3<<12);
//	PINSEL3 |= (0x2<<12);
	
	/* P1.27 - USB1_OVRCR */
//	PINSEL3 &= ~(0x3<<22);
//	PINSEL3 |= (0x2<<22);
	
	/* P1.30 - USB2_PWRD */
	PINSEL3 &= ~(0x3<<28);
	PINSEL3 |= (0x1<<28); /* maybe VBUS? */
	
	/* P1.31 - USB2_OVRCR */
//	PINSEL3 &= ~(0x3<<30);
//	PINSEL3 |= (0x1<<30);

	/* Configure port 1 as host */
	OTG_STAT_CTRL = 0x1;
		
	/* In all configurations, disable the pullups on P1.27 and P1.30 */
	PINMODE3 = 0x20800000;
	return 0;
}

void usb_board_init_fail(void)
{
	return;
}

void usb_board_stop(void)
{
	/*UHCHR |= UHCHR_FHR;
	udelay(11);
	UHCHR &= ~UHCHR_FHR;

	UHCCOMS |= 1;
	udelay(10);

	CKEN &= ~CKEN10_USBHOST;

	puts("Called USB STOP\n");
	return;*/
}
