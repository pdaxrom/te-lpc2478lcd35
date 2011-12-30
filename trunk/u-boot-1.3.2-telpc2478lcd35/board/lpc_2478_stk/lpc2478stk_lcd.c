/****************************************************************************
 *  
 * Project: U-Boot support for the LPC22xx and LPC24xx boards from Olimex
 *
 * Copyright: Ivan Vasilev, Olimex Ltd. All rights reserved.
 * 
 * File: $File lpc2478stk.c $
 * Description: Initialize the LPC2478 LCD controller and display a picture
 * Developer: Ivan Vasilev, <ivan at l123.org>
 *
 * Last change: $Date: 2008-04-01 18:30:27 +0300 (вторник, 01 Април 2008) $
 * Revision: $Revision: 2 $
 * Id: $Id: lpc2478stk_lcd.c 2 2008-04-01 15:30:27Z Ivan $
 * Author: $Author: Ivan $
 *
 * This code is provided under the terms of the "beer-ware" license. You may do
 * whatever you like with it and if we meet some day, you may buy me a beer in
 * return.
 *
 ****************************************************************************/

#include "lpc2478stk_lcd.h"

void * framebuffer = 0;
uint32_t framebuffer_size = 0;

/* initialize the LCD from the given configuration. The user has to call 
 * lpc24xx_EnableLCD() after that to actually enable the controller */
void lpc24xx_InitLCD(LCD_INIT_STRUCTURE lcd)
{
	/*switch (lcd.color_mode)
	{
		case COLOR_MODE_1BPP:
			framebuffer_size = (lcd.xsize * lcd.ysize) / 8;
			break;
		case COLOR_MODE_2BPP:
			framebuffer_size = (lcd.xsize * lcd.ysize) / 4;
			break;
		case COLOR_MODE_4BPP:
			framebuffer_size = (lcd.xsize * lcd.ysize) / 2;
			break;
		case COLOR_MODE_8BPP:
			framebuffer_size = (lcd.xsize * lcd.ysize);
			break;
		case COLOR_MODE_16BPP:
			framebuffer_size = (lcd.xsize * lcd.ysize) * 2;
			break;
		case COLOR_MODE_24BPP:
			framebuffer_size = (lcd.xsize * lcd.ysize) * 4;
			break;
		case COLOR_MODE_16BPP_565:
			framebuffer_size = (lcd.xsize * lcd.ysize) * 2;
			break;
		case COLOR_MODE_12BPP_444:
			framebuffer_size = (lcd.xsize * lcd.ysize) * 2;
			break;
	}*/
	/* this needs to run from the ROM so skip that section for now */
#ifdef LCD_USE_MALLOC
	framebuffer = malloc(framebuffer_size);
#else
	framebuffer = (void *)LCD_FRAMEBUFFER_START;
#endif
	PCONP |= 1<<20;		/* Turn On LCD PCLK */
	
	PINSEL0 &= 0xfffc00ff;//BIN32(11111111,11111100,00000000,11111111);
	PINSEL0 |= 0x00015500;//BIN32(00000000,00000001,01010101,00000000);
	PINMODE0&= 0xfffc00ff;//BIN32(11111111,11111100,00000000,11111111);
	PINMODE0|= 0x0002aa00;//BIN32(00000000,00000010,10101010,00000000);
	PINSEL3 &= 0xf00000ff;//BIN32(11110000,00000000,00000000,11111111);
	PINSEL3 |= 0x05555500;//BIN32(00000101,01010101,01010101,00000000);
	PINMODE3&= 0xf00000ff;//BIN32(11110000,00000000,00000000,11111111);
	PINMODE3|= 0x0aaaaa00;//BIN32(00001010,10101010,10101010,00000000);
	PINSEL4 &= 0xf0300000;//BIN32(11110000,00110000,00000000,00000000);
	PINSEL4 |= 0x058fffff;//BIN32(00000101,01001111,11111111,11111111);
	PINMODE4&= 0xf0300000;//BIN32(11110000,00110000,00000000,00000000);
	PINMODE4|= 0x0a8aaaaa;//BIN32(00001010,10001010,10101010,10101010);
	PINSEL9 &= 0xf0ffffff;//BIN32(11110000,11111111,11111111,11111111);
	PINSEL9 |= 0x0a000000;//BIN32(00001010,00000000,00000000,00000000);
	PINMODE9&= 0xf0ffffff;//BIN32(11110000,11111111,11111111,11111111);
	PINMODE9|= 0x0a000000;//BIN32(00001010,00000000,00000000,00000000);
	PINSEL11&= 0xfffffff0;//BIN32(11111111,11111111,11111111,11110000);
	PINSEL11|= 0x0000000f;//BIN32(00000000,00000000,00000000,00001111);

	LCD_CFG = (uint32_t)lcd.hclk_divider << LCD_CFG_CLKDIV;

	LCD_TIMH = (	(((uint32_t)lcd.horiz_back_porch-1) << LCD_TIMH_HBP ) | \
		   	(((uint32_t)lcd.horiz_front_porch-1) << LCD_TIMH_HFP) | \
			(((uint32_t)lcd.horiz_sync_pulse-1) << LCD_TIMH_HSW ) | \
			(((lcd.xsize / 16) - 1) << LCD_TIMH_PPL ) );

	LCD_TIMV = (	(((uint32_t)lcd.vert_back_porch) << LCD_TIMV_VBP ) | \
			(((uint32_t)lcd.vert_front_porch) << LCD_TIMV_VFP) | \
			(((uint32_t)lcd.vert_sync_pulse) << LCD_TIMV_VSW ) | \
			(( lcd.ysize-1) << LCD_TIMV_LPP ) );

	LCD_POL = (	(((uint32_t)0	) << LCD_POL_PCD_HI	) | \
			(((uint32_t)1	) << LCD_POL_BCD	) | \
			(((uint32_t)lcd.xsize-1	) << LCD_POL_CPL	) | \
			(((uint32_t)0	) << LCD_POL_IOE	) | \
			(((uint32_t)1	) << LCD_POL_IPC	) | \
			(((uint32_t)1	) << LCD_POL_IHS	) | \
			(((uint32_t)1	) << LCD_POL_IVS	) | \
			(((uint32_t)0	) << LCD_POL_ACB	) | \
			(((uint32_t)0	) << LCD_POL_CLKSEL	) | \
			(((uint32_t)0	) << LCD_POL_PCD_LO	) );
			
	LCD_LE = 0;
	LCD_UPBASE = ((uint32_t)framebuffer&0xfffffff8); /* make sure the framebuffer is
						DWORD aligned - fixme */
	LCD_LPBASE = ((uint32_t)framebuffer&0xfffffff8); 

	LCD_CTRL = (	(((uint32_t) 1	) << LCD_CTRL_LCDPWR	) | \
			(((uint32_t) 1	) << LCD_CTRL_LCDTFT	) | \
			(((uint32_t)lcd.color_mode ) << LCD_CTRL_LCDBPP ) );
}

void lpc24xx_EnableLCD(void)
{
	LCD_CTRL |= 1 << LCD_CTRL_LCDEN;
}

void lpc24xx_GenerateTestPattern(uint8_t pattern)
{
	uint32_t cntr;
	uint32_t * ptr;


	if ( (framebuffer == 0) || (framebuffer_size == 0))
		return;

	
#ifdef LCD_USE_MALLOC
	ptr = framebuffer;
#else
	ptr = (void *)LCD_FRAMEBUFFER_START;
#endif

	for ( cntr = 0; cntr<framebuffer_size; cntr++)
	{
		if ((cntr*3)<framebuffer_size)
		{
			*ptr++ = 0x00ff0000;	/* RED */
		}
		else if (((cntr*3)/2)<framebuffer_size)
		{
			*ptr++ = 0x0000ff00;	/* Green */
		}
		else *ptr++ = 0x000000ff;	/* Blue */
	}
}

void lpc24xx_ShowBitmap(void * bitmap, uint16_t xsize, uint16_t ysize)
{}
