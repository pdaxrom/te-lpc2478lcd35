/****************************************************************************
 *  
 * Project: U-Boot support for the LPC22xx and LPC24xx boards from Olimex
 *
 * Copyright: Ivan Vasilev, Olimex Ltd. All rights reserved.
 * 
 * File: $File lpc2478stk.h $
 * Description: Provide the required functionality to get the color framebuffer
 * 	console working
 * Developer: Ivan Vasilev, <ivan at l123.org>
 *
 * Last change: $Date: 2008-04-08 09:23:26 +0300 (вторник, 08 Април 2008) $
 * Revision: $Revision: 4 $
 * Id: $Id: lpc2478lcd.c 4 2008-04-08 06:23:26Z Ivan $
 * Author: $Author: Ivan $
 *
 * This code is provided under the terms of the "beer-ware" license. You may do
 * whatever you like with it and if we meet some day, you may buy me a beer in
 * return.
 *
 ****************************************************************************/

#include <common.h>

#ifdef CONFIG_VIDEO_LPC2478

#include <video_fb.h>

#include <asm/arch/hardware.h>
#include <asm/arch/lpc2478_lcd.h>
 
GraphicDevice  lpc2478_lcddev;

void *video_hw_init (void)
{
	memset (&lpc2478_lcddev, 0, sizeof (GraphicDevice));

	lpc2478_lcddev.frameAdrs = LCD_UPBASE;
	lpc2478_lcddev.memSize = (320 * 240 * 2);
	lpc2478_lcddev.mode = 1;
	lpc2478_lcddev.gdfIndex = GDF_15BIT_555RGB;
	lpc2478_lcddev.gdfBytesPP = 2;
	lpc2478_lcddev.bg = 0x00000000;
	lpc2478_lcddev.fg = 0x0000ffff;
	lpc2478_lcddev.plnSizeX = (320);
	lpc2478_lcddev.plnSizeY = (240);
	lpc2478_lcddev.winSizeX = (320);
	lpc2478_lcddev.winSizeY = (240);

	memcpy((void *)&lpc2478_lcddev.modeIdent, (const void *)"320x240 15bpp\r\n", 17);

	memset((void *)lpc2478_lcddev.frameAdrs, 0x00222222, lpc2478_lcddev.memSize);

	return (&lpc2478_lcddev);
}
 
void video_set_lut(unsigned int index, unsigned char r, unsigned char g, unsigned char b)
{
}
#endif 
