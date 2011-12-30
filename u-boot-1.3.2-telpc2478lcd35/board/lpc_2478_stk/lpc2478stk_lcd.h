/****************************************************************************
 *  
 * Project: U-Boot support for the LPC22xx and LPC24xx boards from Olimex
 *
 * Copyright: Ivan Vasilev, Olimex Ltd. All rights reserved.
 * 
 * File: $File lpc2478stk.h $
 * Description: Initialize the LPC2478 LCD controller and display a picture
 * Developer: Ivan Vasilev, <ivan at l123.org>
 *
 * Last change: $Date: 2008-04-04 19:47:01 +0300 (петък, 04 Април 2008) $
 * Revision: $Revision: 3 $
 * Id: $Id: lpc2478stk_lcd.h 3 2008-04-04 16:47:01Z Ivan $
 * Author: $Author: Ivan $
 *
 * This code is provided under the terms of the "beer-ware" license. You may do
 * whatever you like with it and if we meet some day, you may buy me a beer in
 * return.
 *
 ****************************************************************************/

#include <common.h>
#include <asm/arch/hardware.h>
#include <asm/arch/lpc2478_lcd.h>


#define	PANEL_X_SIZE	320
#define	PANEL_Y_SIZE	240

/* if defined, the driver will use malloc() for allocating the framebuffer */
#undef	LCD_USE_MALLOC
/* if not, allow 512kb just below u-boot for this purpose */
#ifndef LCD_USE_MALLOC
/*#define	LCD_FRAMEBUFFER_START	( TEXT_BASE - 0x80000)*/
#define	LCD_FRAMEBUFFER_START	0xa2000000
#endif

enum _COLOR_MODE
{
	COLOR_MODE_1BPP,
	COLOR_MODE_2BPP,
	COLOR_MODE_4BPP,
	COLOR_MODE_8BPP,
	COLOR_MODE_16BPP,
	COLOR_MODE_24BPP,
	COLOR_MODE_16BPP_565,
	COLOR_MODE_12BPP_444
};
typedef enum _COLOR_MODE COLOR_MODE;

typedef struct _LCD_INIT_STRUCTURE
{
	uint16_t	xsize;
	uint8_t		horiz_front_porch;
	uint8_t		horiz_back_porch;
	uint8_t		horiz_sync_pulse;
	uint16_t	ysize;
	uint8_t		vert_front_porch;
	uint8_t		vert_back_porch;
	uint8_t		vert_sync_pulse;
	COLOR_MODE	color_mode;
	uint8_t		hclk_divider;
} LCD_INIT_STRUCTURE;

/* function prototypes */
void lpc24xx_InitLCD(LCD_INIT_STRUCTURE lcd);
void lpc24xx_EnableLCD(void);
void lpc24xx_ShowBitmap(void * bitmap, uint16_t xsize, uint16_t ysize);

