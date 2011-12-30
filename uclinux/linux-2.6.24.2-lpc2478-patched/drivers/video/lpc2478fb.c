/****************************************************************************
 *  
 * Project: uClinux support for LPC-2478-STK
 *
 * Copyright: Ivan Vasilev, Olimex Ltd. All rights reserved.
 * 
 * File: $File lpc2478fb.c $
 * Description: The framebuffer driver. Based on drivers/video/skeletonfb.c
 * Developer: Ivan Vasilev, <ivan at l123.org>
 *
 * Last change: $Date: 2008-04-08 09:23:26 +0300 (вторник, 08 Април 2008) $
 * Revision: $Revision: 4 $
 * Id: $Id: lpc2478fb.c  4 2008-04-08 06:23:26Z Ivan $
 * Author: $Author: Ivan $
 *
 *  This file is subject to the terms and conditions of the GNU General Public
 *  License. See the file COPYING in the main directory of this archive for
 *  more details.
 *
 ****************************************************************************/
 
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/reboot.h>
#include <linux/errno.h>
#include <linux/string.h>
#include <linux/mm.h>
#include <linux/delay.h>
#include <linux/fb.h>
#include <linux/init.h>
#include <linux/ioport.h>
#include <linux/interrupt.h>
#include <linux/dma-mapping.h>
#include <asm/io.h>
#include <asm/uaccess.h>
#include "lpc2478fb.h"
#include "lpc2468_registers.h"
/*#include <asm/hardware.h>*/
#include <linux/platform_device.h>

#include <linux/slab.h>
#include <linux/vmalloc.h>

#include "console/fbcon.h"

#define DEBUG 1
#ifdef DEBUG
#define DPRINTK( fmt, arg... )  printk( fmt, ##arg )
#else
#define DPRINTK( fmt, arg... )
#endif

#define LongToBin(n) (((n >> 21) & 0x80) | \
                      ((n >> 18) & 0x40) | \
                      ((n >> 15) & 0x20) | \
                      ((n >> 12) & 0x10) | \
                      ((n >>  9) & 0x08) | \
                      ((n >>  6) & 0x04) | \
                      ((n >>  3) & 0x02) | \
                      ((n      ) & 0x01))

#define __BIN(n) LongToBin(0x##n##l)

#define BIN8(n)                       __BIN(n)
#define BIN(n)                        __BIN(n)
#define BIN16(b1,b2)        ((        __BIN(b1)  <<  8UL) + \
                                      __BIN(b2))
#define BIN32(b1,b2,b3,b4) ((((uint32_t)__BIN(b1)) << 24UL) + \
                            (((uint32_t)__BIN(b2)) << 16UL) + \
                            (((uint32_t)__BIN(b3)) <<  8UL) + \
                              (uint32_t)__BIN(b4))

#define CONFIG_PINSEL(a, p, v) { \
    unsigned long t = a; \
    unsigned long p1 = (p & 0x0f) << 1; \
    t &= ~(0x03 << p1); \
    t |= (v << p1); \
    a = t; \
}

#define CONFIG_PINMODE CONFIG_PINSEL

#define CONFIG_BIT(a, p, v) { \
    unsigned long t = a; \
    t &= ~(1 << p); \
    t |= (v << p); \
    a = t; \
}

#define	SCREEN_SIZE_X	320
#define	SCREEN_SIZE_Y	240
#define SCREEN_BPP	2
#define	FBMEM_SIZE	(SCREEN_SIZE_X * SCREEN_SIZE_Y * SCREEN_BPP)

#define C_LCD_H_SIZE           320
#define C_LCD_H_PULSE          30
#define C_LCD_H_FRONT_PORCH    20
#define C_LCD_H_BACK_PORCH     38

#define C_LCD_V_SIZE           240
#define C_LCD_V_PULSE          3
#define C_LCD_V_FRONT_PORCH    4
#define C_LCD_V_BACK_PORCH     15

#define C_LCD_CTRL_LcdBpp      4 //100 - 16pbb
#define C_LCD_CTRL_LcdTFT      1
#define C_LCD_CTRL_BGR         1
#define C_LCD_CTRL_BEBO        0
#define C_LCD_CTRL_BEPO        0
#define C_LCD_CTRL_WATERMARK   0

#define C_LCD_POL_PCD_LO       2
#define C_LCD_POL_CLKSEL       0
#define C_LCD_POL_ACB          1
#define C_LCD_POL_IVS          1
#define C_LCD_POL_IHS          1
#define C_LCD_POL_IPC          1
#define C_LCD_POL_IOE          1
#define C_LCD_POL_CPL          (C_LCD_H_SIZE - 1)
#define C_LCD_POL_BCD          0
#define C_LCD_POL_PCD_HI       0

static int __init lpc2478fb_probe(struct platform_device *dev);
int __init lpc2478fb_init(void);
static int lpc2478_fb_mmap(struct fb_info *info, struct vm_area_struct *vma);

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

static struct fb_fix_screeninfo lpc2478fb_fix __initdata = {
	.id		= "LPC-2478 LCD",
	.smem_len	= FBMEM_SIZE,
	.type		= FB_TYPE_PACKED_PIXELS,
	.visual		= FB_VISUAL_TRUECOLOR,
	.line_length	= SCREEN_SIZE_X * SCREEN_BPP,
	.accel		= FB_ACCEL_NONE,
};

static struct fb_var_screeninfo lpc2478fb_var __initdata = {
	.xres		= 320,
	.yres		= 240,
	.xres_virtual	= 320,
	.yres_virtual	= 240,
	.bits_per_pixel	= 16,
	.red		= {10, 5, 0},
	.green		= {5,  5, 0},
	.blue		= {0,  5, 0},
	.activate	= FB_ACTIVATE_NOW,
	.pixclock 	= 3600000,
      	.vmode		= FB_VMODE_NONINTERLACED,
};


#if 0
static struct fb_ops lpc2478fb_ops = {
	.owner		= THIS_MODULE,
	.fb_read        = fb_sys_read,
	.fb_write       = fb_sys_write,
	.fb_fillrect	= sys_fillrect,
	.fb_copyarea	= sys_copyarea,
	.fb_imageblit	= sys_imageblit,
	//.fb_fillrect	= cfb_fillrect,
	//.fb_copyarea	= cfb_copyarea,
	//.fb_imageblit	= cfb_imageblit,
};
#else
static struct fb_ops lpc2478fb_ops = 
{
	.owner			= THIS_MODULE,
	//.fb_mmap 		= lpc2478_fb_mmap,
	.fb_fillrect		= cfb_fillrect,
	.fb_copyarea		= cfb_copyarea,
	.fb_imageblit		= cfb_imageblit,
};
#endif

/* this is the actual physical start address of our framebuffer */
static dma_addr_t	fb_phys;
static void * 		fb_log;
static uint32_t fb_smem_start;


static int lpc2478_fb_mmap(struct fb_info *info, struct vm_area_struct *vma)
{

	/* stolen from bf54x-lq043fb.c */

	//vma->vm_start = (unsigned long)(fbi->fb_buffer);
	vma->vm_start = fb_smem_start;

	vma->vm_end = vma->vm_start + info->fix.smem_len;
	/* For those who don't understand how mmap works, go read
	 *   Documentation/nommu-mmap.txt.
	 * For those that do, you will know that the VM_MAYSHARE flag
	 * must be set in the vma->vm_flags structure on noMMU
	 *   Other flags can be set, and are documented in
	 *   include/linux/mm.h
	 */
	vma->vm_flags |= VM_MAYSHARE;

	return 0;
}

static struct platform_driver lpc2478fb_driver = {
	.probe	= lpc2478fb_probe,
	.driver	= {
		.name	= "lpc2478fb",
	},
};

static struct platform_device lpc2478fb_device = {
	.name	= "lpc2478fb",
};

/* these two functions are taken from the ep93xx framebuffer driver */
static int lpc2478fb_alloc_videomem(void)
{
	//unsigned long test = 0;
    //unsigned long adr,size,pgsize,cntr;
    unsigned long adr,size;//,pgsize,cntr;
    unsigned short * ptr;
    //int order;
    int col, row;
    void *mem;
    
    size = FBMEM_SIZE;

    DPRINTK("lpc2478fb_alloc_videomem - enter \n");

    /*fb_log = NULL;
    lpc2478fb_fix.smem_len = PAGE_ALIGN( FBMEM_SIZE );
    order = get_order( lpc2478fb_fix.smem_len );
    fb_log = (void *)__get_free_pages( GFP_KERNEL, order );
    
    if (fb_log)
    {
	fb_phys = __virt_to_phys((int)fb_log);
	adr = (unsigned long)fb_log;
	size = lpc2478fb_fix.smem_len;
	pgsize = 1<<order;
	do
	{
		SetPageReserved(virt_to_page(adr));
		memset(adr, test, pgsize);
		test += 0x04;
		adr += pgsize;
	} while (size -= pgsize);
    }
    //memset(fb_log, 0x00000005, lpc2478fb_fix.smem_len);*/
	
	size = PAGE_ALIGN(size);
	mem = vmalloc_32(size);
	//mem = (void*)0xa1f00000;
	if (!mem)
		return -ENOMEM;

	memset(mem, 0, size); /* Clear the ram out, no junk to the user */
	adr = (unsigned long) mem;
	while (size > 0) {
		SetPageReserved(vmalloc_to_page((void *)adr));
		adr += PAGE_SIZE;
		size -= PAGE_SIZE;
	}
    fb_log = mem;
    fb_phys = (uint32_t)mem;
    lpc2478fb_fix.smem_start = fb_smem_start = (uint32_t)mem;
    lpc2478fb_fix.smem_len = PAGE_ALIGN(FBMEM_SIZE);
    
    size = 0;
    ptr = mem;
    for (row = 0; row < 240; row ++)
    {
	for ( col =0; col < 320; col++)
    	{
		if (col < 107) *ptr++ = (0x1f << 10);
		else if (col < 214) *ptr++ = (0x1f << 5);
		else *ptr++ = (0x1f << 0);
	}
    }
    
    /*for (ptr = mem; ptr < (PAGE_ALIGN(FBMEM_SIZE)+mem); ptr++)
    {
	*ptr = 0x000000ff;
	// *ptr = size;
	//size += 8;
	//for (cntr = 1000; cntr; cntr--);
    }*/
    
    DPRINTK("   fb_log_addres = 0x%x\n",(uint32_t)fb_log);
    DPRINTK("   fb_phys_address = 0x%x\n",(uint32_t)fb_phys);
    DPRINTK("   fb_size = %lu\n",(unsigned long)lpc2478fb_fix.smem_len);
    //DPRINTK("   fb_page_order = %d\n",order);
    DPRINTK("lpc2478fb_alloc_videomem - exit \n");
    return 0;       
}

#if 0
static void lpc2478fb_release_videomem(void)
{
    //unsigned long adr,size,psize;
    //int order;
    	
    DPRINTK("lpc2478fb_release_videomem - enter \n");
    DPRINTK("lpc2478fb_release_videomem not actually implemented for now!!! \n");
    DPRINTK("lpc2478fb_release_videomem - exit \n");
}
#endif

static void lpc2478fb_enable(int en)
{
    int i;
    if (en) {
	LCD_CTRL |= 1;
	for(i=0; i < 50000; i++) asm volatile ("nop");
	LCD_CTRL |= (1<<11);
    } else {
	LCD_CTRL |= ~(1<<11);
	for(i=0; i < 50000; i++) asm volatile ("nop");
	LCD_CTRL |= ~1;
    }
}

void lpc2478fb_hwinit(void)
{
	int i;

	// Assign pin:
	PINSEL0 &= BIN32(11111111,11110000,00000000,11111111);
	PINSEL0 |= BIN32(00000000,00000101,01010101,00000000); // P0.4(LCD0), P0.5(LCD1), P0.6(LCD8), P0.7(LCD9), P0.8(LCD16), P0.9(LCD17). 
	PINMODE0&= BIN32(00000000,00000000,00000000,00000000);
	//PINMODE0|= BIN32(00000000,00000000,00000000,00000000); // 00 Pull-up. 

	PINSEL3 &= BIN32(11110000,00000000,00000000,11111111);
	PINSEL3 |= BIN32(00000101,01010101,01010101,00000000); // P1.20(LCD10), P1.21(LCD11), P1.22(LCD12), P1.23(LCD13), P1.24(LCD14), P1.25(LCD15), P1.26(LCD20), P1.27(LCD21), P1.28(LCD22), P1.29(LCD23).
	PINMODE3&= BIN32(00000000,00000000,00000000,00000000);
	//PINMODE3|= BIN32(00000000,00000000,00000000,00000000); // 00 Pull-up.

	PINSEL4 &= BIN32(11110000,00110000,00000000,00000011); // P2.0(LCDPWR) - not used
	PINSEL4 |= BIN32(00000101,01001111,11111111,11111100); //               P2.1(LCDLE), P2.2(LCDDCP), P2.3(LCDFP), P2.4(LCDENAB), P2.5(LCDLP), P2.6(LCD4), P2.7(LCD5), P2.8(LCD6), P2.9(LCD7), P2.12(LCD18), P2.13(LCD19). 
	PINMODE4&= BIN32(00000000,00000000,00000000,00000000);
	//PINMODE4|= BIN32(00000000,00000000,00000000,00000000); // 00 Pull-up.

	PINSEL9 &= BIN32(11110000,11111111,11111111,11111111);
	PINSEL9 |= BIN32(00001010,00000000,00000000,00000000); // P4.28(LCD2), P4.29(LCD3).
	PINMODE9&= BIN32(00000000,00000000,00000000,00000000);
	//PINMODE9|= BIN32(00000000,00000000,00000000,00000000); // 00 Pull-up.

	PINSEL11&= BIN32(11111111,11111111,11111111,11110000);
	PINSEL11|= BIN32(00000000,00000000,00000000,00001101); // bit0=1 - LCD port is enabled.    bit1...3 = 110 TFT 16-bit. (1:5:5:5 mode) 
	//PINSEL11|= BIN32(00000000,00000000,00000000,00001011); // bit0=1 - LCD port is enabled.    bit1...3 = 101 TFT 16-bit. (5:6:5 mode)
	//PINSEL11|= BIN32(00000000,00000000,00000000,00001111); // bit0=1 - LCD port is enabled.    bit1...3 = 111 TFT 24-bit. (8:8:8 mode) 

	// SHUT, TPS61042.

	CONFIG_PINSEL(PINSEL7, 24, 0x00);//   PINSEL7_bit.P3_24 = 0x00;
	CONFIG_BIT(FIO3DIR, 24, 1);//  FIO3DIR_bit.P3_24 = 1;
	CONFIG_BIT(FIO3CLR, 24, 1);//  FIO3CLR_bit.P3_24 = 1;

	CONFIG_PINSEL(PINSEL1, 19, 0x00);//  PINSEL1_bit.P0_19 = 0x00;
	CONFIG_BIT(FIO0DIR, 19, 1);//  FIO0DIR_bit.P0_19  = 1;
	CONFIG_BIT(FIO0SET, 19, 1);//  FIO0SET_bit.P0_19  = 1;

	CONFIG_PINSEL(PINSEL4, 1, 0x00);//  PINSEL4_bit.P2_1  = 0x00;
	CONFIG_BIT(FIO2DIR, 1, 1);//  FIO2DIR_bit.P2_1  = 1;
	CONFIG_BIT(FIO2CLR, 1, 1);//  FIO2CLR_bit.P2_1  = 1;

	PCONP |= 0x00100000; // Power Control for CLCDC.
	CRSR_CTRL &= ~0x1;  // Disable cursor
	LCD_CTRL   = ((C_LCD_CTRL_WATERMARK << 16) | (C_LCD_CTRL_BEPO << 10) | (C_LCD_CTRL_BEBO << 9) | (C_LCD_CTRL_BGR << 8) | (C_LCD_CTRL_LcdTFT << 5) | (C_LCD_CTRL_LcdBpp << 1));
	LCD_CFG    = 1;
	LCD_POL    = ((C_LCD_POL_PCD_HI << 27) | (C_LCD_POL_BCD << 26) | (C_LCD_POL_CPL << 16) | (C_LCD_POL_IOE << 14) | (C_LCD_POL_IPC << 13)| (C_LCD_POL_IHS << 12) | (C_LCD_POL_IVS << 11)| (C_LCD_POL_ACB << 6) | (C_LCD_POL_CLKSEL << 5) | (C_LCD_POL_PCD_LO << 0));
	LCD_TIMH   = ((C_LCD_H_BACK_PORCH << 24) | (C_LCD_H_FRONT_PORCH << 16) | (C_LCD_H_PULSE <<  8) | (((C_LCD_H_SIZE / 16) - 1) << 2));
	LCD_TIMV   = ((C_LCD_V_BACK_PORCH << 24) | (C_LCD_V_FRONT_PORCH << 16) | (C_LCD_V_PULSE << 10) | C_LCD_V_SIZE);

	LCD_UPBASE = ((uint32_t)fb_phys);
	LCD_LPBASE = ((uint32_t)fb_phys); 

//    if (pallete)
//	LCD_SetPallete(pallete);
	for(i=0; i < 50000; i++) asm volatile ("nop");

	PINSEL11 = ( (6 << 1) | 1); // LCD 16 bit (1:5:5:5), LCD port is enabled
}

static int __init lpc2478fb_probe(struct platform_device *dev)
{
	uint32_t *cntr;
	struct fb_info *info;
	
	lpc2478fb_alloc_videomem();
	
	info = framebuffer_alloc(sizeof(u32) * 16, &dev->dev);
	if (!info)
		return -ENOMEM;

	info->device = &dev->dev;
	info->var = lpc2478fb_var;
	info->fix = lpc2478fb_fix;
	info->fbops = &lpc2478fb_ops;
	info->flags = FBINFO_DEFAULT;  /* not as module for now */
	info->pseudo_palette = info->par;
	info->par = NULL;
	info->screen_base = (char *) lpc2478fb_fix.smem_start;

	if (fb_alloc_cmap(&info->cmap, 256, 0) < 0) {
		framebuffer_release(info);
		return -ENOMEM;
	}

	/*master_outb(3, DISPLAY_CONTROL_REG);*/

	if (register_framebuffer(info) < 0) {
		printk(KERN_ERR "Unable to register lpc2478 frame buffer\n");
		fb_dealloc_cmap(&info->cmap);
		framebuffer_release(info);
		return -EINVAL;
	}
	
	lpc2478fb_hwinit();
	lpc2478fb_enable(1);

#if !defined(CONFIG_FRAMEBUFFER_CONSOLE) && defined(CONFIG_LOGO)
	if (fb_prepare_logo(info, FB_ROTATE_UR)) {
		/* Start display and show logo on boot */
		//fb_set_cmap(info->cmap, info);
		fb_show_logo(info, FB_ROTATE_UR);
	}
#endif

        printk(KERN_INFO "fb%d: lpc2478 framebuffer initialized\n",
	       info->node);
	
	cntr = (uint32_t*)0xffe08100;
	DPRINTK("   0x%x = 0x%x\n",(uint32_t)cntr, *cntr);
	
	DPRINTK("   lpc2478_fbmem:\n");
	cntr = (uint32_t*)0xe01fc1b8;
	DPRINTK("   0x%x = 0x%x\n",(uint32_t)cntr, *cntr);
	cntr = (uint32_t*)0xffe10000;
	for (;cntr < (uint32_t*)0xffe10034; cntr++)
	{
		DPRINTK("   0x%x = 0x%x\n",(uint32_t)cntr, *cntr);
	}

	
	return 0;
}

int __init lpc2478fb_init(void)
{
	int ret = 0;

	if (fb_get_options("lpc2478fb", NULL))
		return -ENODEV;

	ret = platform_driver_register(&lpc2478fb_driver);

	if (!ret) {
		struct platform_device *dev;

		dev = platform_device_alloc("lpc2478fb", 0);

#if 0
		ret = platform_device_register(&lpc2478fb_device);
		if (ret)
			platform_driver_unregister(&lpc2478fb_driver);
#else
		if (dev)
			ret = platform_device_add(dev);
		else
			ret = -ENOMEM;

		if (ret) {
			platform_device_put(dev);
			platform_driver_unregister(&lpc2478fb_driver);
		}
#endif

	}
	return ret;
}

module_init(lpc2478fb_init);
MODULE_LICENSE("GPL");
