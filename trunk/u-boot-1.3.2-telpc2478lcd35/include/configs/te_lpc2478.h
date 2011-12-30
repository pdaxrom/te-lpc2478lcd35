/*
 * (C) Copyright 2007
 * Embedded Artists AB, Sweden <www.EmbeddedArtists.com>
 * Ivan Vasilev, Olimex Ltd, 2008
 *
 * Configuation settings for the lpc_e2468 Board.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
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

#ifndef __CONFIG_H
#define __CONFIG_H

/*
 * If we are developing, we might want to start armboot from ram
 * so we MUST NOT initialize critical regs like mem-timing ...
 */
#undef CONFIG_INIT_CRITICAL		/* undef for developing */

/*
 * High Level Configuration Options
 * (easy to change)
 */
#define CONFIG_ARM7		1	/* This is a ARM7 CPU	*/
#define CONFIG_ARM_THUMB	1	/* this is an ARM720TDMI */
#define CONFIG_LPC2468
#undef  CONFIG_ARM7_REVD	 	/* disable ARM720 REV.D Workarounds */

#define CONFIG_USE_IRQ			/* use irq for mci interface */

/*
 * Size of malloc() pool
 */
#define CFG_MALLOC_LEN		(CFG_ENV_SIZE + 128*1024)
#define CFG_GBL_DATA_SIZE	128	/* size in bytes reserved for initial data */

/*
 * Hardware drivers
 */

/*
 * select serial console configuration
 */
#define CONFIG_SERIAL1		1	/* we use Serial line 1 */

/* allow to overwrite serial and ethaddr */
#define CONFIG_ENV_OVERWRITE

//#define CONFIG_BAUDRATE			230400
#define CONFIG_BAUDRATE		115200
//#define CONFIG_BAUDRATE		38400
/*
 * BOOTP options
 */
//#define CONFIG_BOOTP_SUBNETMASK
//#define CONFIG_BOOTP_GATEWAY
//#define CONFIG_BOOTP_HOSTNAME
//#define CONFIG_BOOTP_BOOTPATH
//#define CONFIG_BOOTP_BOOTFILESIZE


/*
 * Command line configuration.
 */
#include <config_cmd_default.h>

//#undef CONFIG_CMD_NET
#undef CONFIG_CMD_NFS
#undef CONFIG_CMD_FPGA
#undef CONFIG_CMD_BOOTD
//#define CONFIG_CMD_DHCP
#define CONFIG_CMD_FAT
#define CONFIG_CMD_MMC
//#define CONFIG_CMD_NET
//#define CONFIG_CMD_PING
/*#define	CONFIG_CMD_NAND*/


#define CONFIG_BOOTDELAY	  3
#define CONFIG_BOOTARGS    	"root=/dev/ram initrd=0xa0800000,4000k console=ttyS0,115200N8"
/*#define CONFIG_BOOTARGS     "root=/dev/ram0 initrd=0xa0800000 console=ttyS0,1152000N8"*/
#define CONFIG_BOOTCOMMAND	"run usb_boot"
/*#define CONFIG_BOOTCOMMAND	"echo ;echo Booting from NAND FLASH (may take some seconds);" \
                            "echo First loads 'linux.bin' and then 'romfs.bin';" \
                            "run nand_boot"*/

/*
 * Miscellaneous configurable options
 */
#define	CFG_LONGHELP				/* undef to save memory		*/
#define	CFG_PROMPT		"te-lpc2478 # " /* Monitor Command Prompt	*/
#define	CFG_CBSIZE		256		/* Console I/O Buffer Size	*/
#define	CFG_PBSIZE (CFG_CBSIZE+sizeof(CFG_PROMPT)+16) /* Print Buffer Size */
#define	CFG_MAXARGS		16		/* max number of command args	*/
#define CFG_BARGSIZE		CFG_CBSIZE	/* Boot Argument Buffer Size	*/

#define CFG_MEMTEST_START	0xA0000000	/* memtest works on	*/
#define CFG_MEMTEST_END		0xA1F80000	/* 31.5 MB in DRAM	*/
#define CFG_ALT_MEMTEST

#define	CONFIG_DOS_PARTITION

#undef  CFG_CLKS_IN_HZ		/* everything, incl board info, in Hz */

#define	CFG_LOAD_ADDR		0xA0008000	/* default load address	for kernel img is here*/

#define CFG_SYS_CLK_FREQ	57600000	/* Hz */
#define	CFG_HZ			200000		/* decrementer freq in Hz */

						/* valid baudrates */
#define CFG_BAUDRATE_TABLE	{ 9600, 19200, 38400, 57600, 115200 }

/*-----------------------------------------------------------------------
 * Stack sizes
 *
 * The stack sizes are set up in start.S using the settings below
 */
#define CONFIG_STACKSIZE	(128*1024)	/* regular stack */
#ifdef CONFIG_USE_IRQ
#define CONFIG_STACKSIZE_IRQ	(8*1024)	/* IRQ stack */
#define CONFIG_STACKSIZE_FIQ	(8*1024)	/* FIQ stack */
#endif

/*-----------------------------------------------------------------------
 * Physical Memory Map
 */
#define CONFIG_NR_DRAM_BANKS	4	   /* we have 4 banks of DRAM */
#define PHYS_SDRAM_1		0xA0000000 /* SDRAM Bank #1 */
#define PHYS_SDRAM_1_SIZE	0x02000000 /* 32 MB SDRAM */

//#define PHYS_FLASH_1		0x00000000 /* Flash Bank #1 */
//#define PHYS_FLASH_SIZE		0x00400000 /* 4 MB */

//#define CFG_FLASH_BASE		PHYS_FLASH_1

/*-----------------------------------------------------------------------
 * FLASH and environment organization
 */
#define CFG_MAX_FLASH_BANKS	1	/* max number of memory banks		*/

#define CFG_MAX_FLASH_SECT	1024	/* max number of sectors on one chip	*/

/* timeout values are in ticks */
#define CFG_FLASH_ERASE_TOUT	(2*CFG_HZ) /* Timeout for Flash Erase */
#define CFG_FLASH_WRITE_TOUT	(2*CFG_HZ) /* Timeout for Flash Write */


/*
 * Control where environment is stored
 */
#define	CFG_ENV_IS_IN_FLASH	1
#define CFG_ENV_ADDR		(0x0 + 0x7C000)	/* Addr of Environment Sector	*/
#define CFG_ENV_SIZE		0x1000 /* Total Size of Environment Sector(4k) */

#define CONFIG_CMDLINE_TAG
#define CONFIG_SETUP_MEMORY_TAGS
#define CONFIG_INITRD_TAG

#define CONFIG_MMC 1
#define CONFIG_DISPLAY_CPUINFO


/*
 * NAND Flash
 */
#define CFG_MAX_NAND_DEVICE	0
#define NAND_MAX_CHIPS		0
#define CFG_NAND_BASE	0x81000000
#define CFG_NAND_LEGACY


#define CONFIG_CMD_USB
#define CONFIG_USB_STORAGE

#define CONFIG_USB_OHCI_NEW
#define	CFG_USB_OHCI_BOARD_INIT // PINSEL here ? 
/*#define	CFG_USB_OHCI_CPU_INIT // usb clock here ? */
#define CFG_USB_OHCI_REGS_BASE	0xffe0c000
#define	CFG_USB_OHCI_SLOT_NAME	"te-lpc2478"
#define	CFG_USB_OHCI_MAX_ROOT_PORTS	15 // ??? 
#define CFG_USB_OHCI_HCCA_BASE	0x7fd00000 /* the USB bus master has to use this specific memory region */
#define NEW_INIT_SEQ /* try the alternate USB enumeration scheme */
#define LITTLEENDIAN	/* XXX :( */


#define	CONFIG_VIDEO_LPC2478
//#define	CONFIG_CFB_CONSOLE
#define CONFIG_VIDEO_LOGO
//#define	DEBUG_CFB_CONSOLE

#ifdef CONFIG_CFB_CONSOLE
    #define VIDEO_KBD_INIT_FCT		0		/* no KBD dev on MHPC - use serial */
    #define VIDEO_TSTC_FCT		serial_tstc
    #define VIDEO_GETC_FCT		serial_getc
#endif
//#define CONFIG_NO_VIDEO_CONSOLE

//#define DEBUG			1


/*
 * Default environment settings
 */
#define CONFIG_EXTRA_ENV_SETTINGS \
          "tftp_boot=tftpboot a0008000 linux.bin;tftpboot a1800000 romfs.bin;go a0008000\0" \
          "nand_boot=nand read 0xa0008000 0x0 0x220000;nand read 0xa0800000 0x400000 0x220000;go a0008000\0" \
          "usb_boot=usb start;fatload usb 0 0xa0800000 romfs_5.img;fatload usb 0 0xa0008000 vmlinux.bin;go a0008000\0" \
          "mmc_boot=mmc;fatload mmc 0 a0008000 linux.bin;fatload mmc 0 a1800000 romfs.bin;go a0008000\0" \
          "update_uboot=tftpboot a1000000 u-boot.bin;protect off 0 2ffff;erase 0 2ffff;cp.b a1000000 0 $(filesize)\0" \
          "update_nand=nand erase;tftpboot a1000000 linux.bin;nand write a1000000 0 200000;tftpboot a1000000 romfs.bin;nand write a1000000 200000 400000\0" \
          "ipaddr=192.168.0.158\0" \
          "netmask=255.255.255.0\0" \
          "serverip=192.168.0.240\0" \
          "ethaddr=00:de:ad:b0:05:03\0" \
	  "console=serial\0"


#endif	/* __CONFIG_H */
