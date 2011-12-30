/*
 * (C) Copyright 2006 Embedded Artists AB <www.embeddedartists.com>
 *
 * Modified to use the routines in cpu/arm720t/lpc2292/flash.c by
 * Gary Jennejohn <garyj@denx,de>
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

#include <common.h>
#include <asm/arch/hardware.h>

#define FLASH_BASEADDR 0x80000000

flash_info_t flash_info[CFG_MAX_FLASH_BANKS];

extern int lpc2292_copy_buffer_to_flash(flash_info_t *, ulong);
extern int lpc2292_flash_erase(flash_info_t *, int, int);
extern int lpc2292_write_buff (flash_info_t *, uchar *, ulong, ulong);

/*
 * (C) Copyright 2000
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
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
 *
 * Hacked for the Hymod board by Murray.Jensen@csiro.au, 20-Oct-00
 */

#include <common.h>
#include <mpc8260.h>
//#include <board/hymod/flash.h>
#include "lpc_e2294_flash.h"

flash_info_t flash_info[CFG_MAX_FLASH_BANKS];	/* info for FLASH chips */

extern int lpc2292_copy_buffer_to_flash(flash_info_t *, ulong);
extern int lpc2292_flash_erase(flash_info_t *, int, int);
extern int lpc2292_write_buff (flash_info_t *, uchar *, ulong, ulong);

/*-----------------------------------------------------------------------
 * Protection Flags:
 */
#define FLAG_PROTECT_SET	0x01
#define FLAG_PROTECT_CLEAR	0x02

/*-----------------------------------------------------------------------
 */

/*
 * probe for flash bank at address "base" and store info about it
 * in the flash_info entry "fip". Fatal error if nothing there.
 */
static void
bank_probe (flash_info_t *fip, volatile bank_addr_t base)
{
	volatile bank_addr_t addr;
	bank_word_t word;
	int i;

	/* reset the flash */
	*base = BANK_CMD_RST;

	/* put flash into read id mode */
	*base = BANK_CMD_RD_ID;

	/* check the manufacturer id - must be intel */
	word = *BANK_REG_MAN_CODE (base);
	if ((word&0xffff) != (INTEL_MANUFACT&0xffff))
		panic ("\nbad manufacturer's code (0x%08lx) at addr 0x%08lx",
			(unsigned long)word, (unsigned long)base);

	/* check the device id */
	//word = *BANK_REG_DEV_CODE (base);
	switch (word&0xffff0000) {

	case (INTEL_ID_28F320J5&0xffff0000):
		fip->flash_id = FLASH_MAN_INTEL | FLASH_28F320J5;
		fip->sector_count = 32;
		break;

	case (INTEL_ID_28F640J5&0xffff0000):
		fip->flash_id = FLASH_MAN_INTEL | FLASH_28F640J5;
		fip->sector_count = 64;
		break;

	case (INTEL_ID_28F320J3A&0xffff0000):
		fip->flash_id = FLASH_MAN_INTEL | FLASH_28F320J3A;
		fip->sector_count = 32;
		break;

	case (INTEL_ID_28F640J3A&0xffff0000):
		fip->flash_id = FLASH_MAN_INTEL | FLASH_28F640J3A;
		fip->sector_count = 64;
		break;

	case (INTEL_ID_28F128J3A&0xffff0000):
		fip->flash_id = FLASH_MAN_INTEL | FLASH_28F128J3A;
		fip->sector_count = 128;
		break;
		
	case (INTEL_ID_28F640C3B&0xffff0000):
		fip->flash_id = FLASH_MAN_INTEL | FLASH_28F640J3A;
		fip->sector_count = 64;
		break;

	default:
		panic ("\nbad device code (0x%08lx) at addr 0x%08lx",
			(unsigned long)word, (unsigned long)base);
	}

	if (fip->sector_count >= CFG_MAX_FLASH_SECT)
		panic ("\ntoo many sectors (%d) in flash at address 0x%08lx",
			fip->sector_count, (unsigned long)base);

	addr = base;
	for (i = 0; i < fip->sector_count; i++) {
		fip->start[i] = (unsigned long)addr;
		fip->protect[i] = 0;
		addr = BANK_ADDR_NEXT_BLK (addr);
	}

	fip->size = (bank_size_t)addr - (bank_size_t)base;

	/* reset the flash */
	*base = BANK_CMD_RST;
}

static void
bank_reset (flash_info_t *info, int sect)
{
	volatile bank_addr_t addr = (bank_addr_t)info->start[sect];

#ifdef FLASH_DEBUG
	printf ("writing reset cmd to addr 0x%08lx\n", (unsigned long)addr);
#endif

	*addr = BANK_CMD_RST;
}

static void
bank_erase_init (flash_info_t *info, int sect)
{
	volatile bank_addr_t addr = (bank_addr_t)info->start[sect];
	int flag;

#ifdef FLASH_DEBUG
	printf ("erasing sector %d, addr = 0x%08lx\n",
		sect, (unsigned long)addr);
#endif

	/* Disable intrs which might cause a timeout here */
	flag = disable_interrupts ();

#ifdef FLASH_DEBUG
	printf ("writing erase cmd to addr 0x%08lx\n", (unsigned long)addr);
#endif
	*addr = BANK_CMD_ERASE1;
	*addr = BANK_CMD_ERASE2;

	/* re-enable interrupts if necessary */
	if (flag)
		enable_interrupts ();
}

static int
bank_erase_poll (flash_info_t *info, int sect)
{
	volatile bank_addr_t addr = (bank_addr_t)info->start[sect];
	bank_word_t stat = *addr;

#ifdef FLASH_DEBUG
	printf ("checking status at addr 0x%08lx [0x%08lx]\n",
		(unsigned long)addr, (unsigned long)stat);
#endif

	if ((stat & BANK_STAT_RDY) == BANK_STAT_RDY) {
		if ((stat & BANK_STAT_ERR) != 0) {
			printf ("failed on sector %d [0x%08lx] at "
				"address 0x%08lx\n", sect,
				(unsigned long)stat, (unsigned long)addr);
			*addr = BANK_CMD_CLR_STAT;
			return (-1);
		}
		else
			return (1);
	}
	else
		return (0);
}

static int
bank_write_word (volatile bank_addr_t addr, bank_word_t value)
{
	bank_word_t stat;
	ulong start;
	int flag, retval;

	/* Disable interrupts which might cause a timeout here */
	flag = disable_interrupts ();

	*addr = BANK_CMD_PROG;

	*addr = value;

	/* re-enable interrupts if necessary */
	if (flag)
		enable_interrupts ();

	retval = 0;

	/* data polling for D7 */
	start = get_timer (0);
	do {
		if (get_timer (start) > CFG_FLASH_WRITE_TOUT) {
			retval = 1;
			goto done;
		}
		stat = *addr;
	} while ((stat & BANK_STAT_RDY) != BANK_STAT_RDY);

	if ((stat & BANK_STAT_ERR) != 0) {
		printf ("flash program failed [0x%08lx] at address 0x%08lx\n",
			(unsigned long)stat, (unsigned long)addr);
		*addr = BANK_CMD_CLR_STAT;
		retval = 3;
	}

done:
	/* reset to read mode */
	*addr = BANK_CMD_RST;

	return (retval);
}

/*-----------------------------------------------------------------------
 */

unsigned long
flash_init (void)
{
	int i, j, k;
	ulong size = 0;
	ulong flashbase = 0;

	/* Init: no FLASHes known */
	for (i=0; i<CFG_MAX_FLASH_BANKS; ++i) {
		flash_info[i].flash_id = FLASH_UNKNOWN;
	}
	
	flash_info[0].flash_id = (PHILIPS_LPC2294 & FLASH_VENDMASK);
	flash_info[0].size = 0x003E000;	/* 256 - 8 KB */
	flash_info[0].sector_count = 17;
	memset (flash_info[0].protect, 0, 17);
	flashbase = 0x00000000;
	for (j = 0, k = 0; j < 8; j++, k++) {
		flash_info[0].start[k] = flashbase;
		flashbase += 0x00002000;
	}
	for (j = 0; j < 2; j++, k++) {
		flash_info[0].start[k] = flashbase;
		flashbase += 0x00010000;
	}
	for (j = 0; j < 7; j++, k++) {
		flash_info[0].start[k] = flashbase;
		flashbase += 0x00002000;
	}
	size += flash_info[0].size;

	bank_probe (&flash_info[1], (bank_addr_t)CFG_FLASH_BASE);
	size += flash_info[1].size;
	
	/*
	 * protect monitor and environment sectors
	 */

#if CFG_MONITOR_BASE == CFG_FLASH_BASE
	(void)flash_protect (FLAG_PROTECT_SET,
		      CFG_MONITOR_BASE,
		      CFG_MONITOR_BASE+monitor_flash_len-1,
		      &flash_info[0]);
#endif

#if defined(CFG_FLASH_ENV_ADDR)
	(void)flash_protect (FLAG_PROTECT_SET,
		      CFG_FLASH_ENV_ADDR,
#if defined(CFG_FLASH_ENV_BUF)
		      CFG_FLASH_ENV_ADDR + CFG_FLASH_ENV_BUF - 1,
#else
		      CFG_FLASH_ENV_ADDR + CFG_FLASH_ENV_SIZE - 1,
#endif
		      &flash_info[0]);
#endif

	return size;
}

/*-----------------------------------------------------------------------
 */
void
flash_print_info (flash_info_t *info)
{
	int i;

	if (info->flash_id == FLASH_UNKNOWN) {
		printf ("missing or unknown FLASH type\n");
		return;
	}

	switch (info->flash_id & FLASH_VENDMASK) {
	case FLASH_MAN_INTEL:	printf ("INTEL ");		break;
	case (PHILIPS_LPC2292 & FLASH_VENDMASK):		printf("Philips: ");	break;
	default:		printf ("Unknown Vendor ");	break;
	}

	switch (info->flash_id & FLASH_TYPEMASK) {
	case FLASH_28F320J5:	printf ("28F320J5 (32 Mbit, 2 x 16bit)\n");
				break;
	case FLASH_28F640J5:	printf ("28F640J5 (64 Mbit, 2 x 16bit)\n");
				break;
	case FLASH_28F320J3A:	printf ("28F320J3A (32 Mbit, 2 x 16bit)\n");
				break;
	case FLASH_28F640J3A:	printf ("28F640J3A (64 Mbit, 2 x 16bit)\n");
				break;
	case FLASH_28F128J3A:	printf ("28F320J3A (128 Mbit, 2 x 16bit)\n");
				break;
	default:		printf ("Unknown Chip Type\n");
				break;
	}

	printf ("  Size: %ld MB in %d Sectors\n",
		info->size >> 20, info->sector_count);

	printf ("  Sector Start Addresses:");
	for (i=0; i<info->sector_count; ++i) {
		if ((i % 5) == 0)
			printf ("\n   ");
		printf (" %08lX%s",
			info->start[i],
			info->protect[i] ? " (RO)" : "     "
		);
	}
	printf ("\n");
	return;
}

/*
 * The following code cannot be run from FLASH!
 */

/*-----------------------------------------------------------------------
 */

int
flash_erase_intel (flash_info_t *info, int s_first, int s_last)
{
	int prot, sect, haderr;
	ulong start, now, last;
	int rcode = 0;

#ifdef FLASH_DEBUG
	printf ("\nflash_erase: erase %d sectors (%d to %d incl.) from\n"
		"  Bank # %d: ", s_last - s_first + 1, s_first, s_last,
		(info - flash_info) + 1);
	flash_print_info (info);
#endif

	if ((s_first < 0) || (s_first > s_last)) {
		if (info->flash_id == FLASH_UNKNOWN) {
			printf ("- missing\n");
		} else {
			printf ("- no sectors to erase\n");
		}
		return 1;
	}

	prot = 0;
	for (sect = s_first; sect <= s_last; ++sect) {
		if (info->protect[sect]) {
			prot++;
		}
	}

	if (prot) {
		printf ("- Warning: %d protected sector%s will not be erased\n",
			prot, (prot > 1 ? "s" : ""));
	}

	start = get_timer (0);
	last = 0;
	haderr = 0;

	for (sect = s_first; sect <= s_last; sect++) {
		if (info->protect[sect] == 0) {	/* not protected */
			ulong estart;
			int sectdone;

			bank_erase_init (info, sect);

			/* wait at least 80us - let's wait 1 ms */
			udelay (1000);

			estart = get_timer (start);

			do {
				now = get_timer (start);

				if (now - estart > CFG_FLASH_ERASE_TOUT) {
					printf ("Timeout (sect %d)\n", sect);
					haderr = 1;
					rcode = 1;
					break;
				}

#ifndef FLASH_DEBUG
				/* show that we're waiting */
				if ((now - last) > 1000) { /* every second */
					putc ('.');
					last = now;
				}
#endif

				sectdone = bank_erase_poll (info, sect);

				if (sectdone < 0) {
					haderr = 1;
					rcode = 1;
					break;
				}

			} while (!sectdone);

			if (haderr)
				break;
		}
	}

	if (haderr > 0)
		printf (" failed\n");
	else
		printf (" done\n");

	/* reset to read mode */
	for (sect = s_first; sect <= s_last; sect++) {
		if (info->protect[sect] == 0) {	/* not protected */
			bank_reset (info, sect);
		}
	}
	return rcode;
}

int flash_erase (flash_info_t * info, int s_first, int s_last)
{
	switch (info->flash_id & FLASH_VENDMASK) {
		case (FLASH_MAN_INTEL & FLASH_VENDMASK):
			return flash_erase_intel(info, s_first, s_last);
		case (PHILIPS_LPC2292 & FLASH_VENDMASK):
			return lpc2292_flash_erase(info, s_first, s_last);
		default:
			return ERR_PROTECTED;
	}
	return ERR_PROTECTED;
}

/*-----------------------------------------------------------------------
 * Write a word to Flash, returns:
 * 0 - OK
 * 1 - write timeout
 * 2 - Flash not erased
 * 3 - Program failed
 */
static int
write_word (flash_info_t *info, ulong dest, ulong data)
{
	/* Check if Flash is (sufficiently) erased */
	if ((*(ulong *)dest & data) != data)
		return (2);

	return (bank_write_word ((bank_addr_t)dest, (bank_word_t)data));
}

/*-----------------------------------------------------------------------
 * Copy memory to flash, returns:
 * 0 - OK
 * 1 - write timeout
 * 2 - Flash not erased
 * 3 - Program failed
 */

int
write_buff_intel (flash_info_t *info, uchar *src, ulong addr, ulong cnt)
{
	ulong cp, wp, data;
	int i, l, rc;

	wp = (addr & ~3);	/* get lower word aligned address */

	/*
	 * handle unaligned start bytes
	 */
	if ((l = addr - wp) != 0) {
		data = 0;
		for (i=0, cp=wp; i<l; ++i, ++cp) {
			data = (data << 8) | (*(uchar *)cp);
		}
		for (; i<4 && cnt>0; ++i) {
			data = (data << 8) | *src++;
			--cnt;
			++cp;
		}
		for (; cnt==0 && i<4; ++i, ++cp) {
			data = (data << 8) | (*(uchar *)cp);
		}

		if ((rc = write_word (info, wp, data)) != 0) {
			return (rc);
		}
		wp += 4;
	}

	/*
	 * handle word aligned part
	 */
	while (cnt >= 4) {
		data = 0;
		for (i=0; i<4; ++i) {
			data = (data << 8) | *src++;
		}
		if ((rc = write_word (info, wp, data)) != 0) {
			return (rc);
		}
		wp  += 4;
		cnt -= 4;
	}

	if (cnt == 0) {
		return (0);
	}

	/*
	 * handle unaligned tail bytes
	 */
	data = 0;
	for (i=0, cp=wp; i<4 && cnt>0; ++i, ++cp) {
		data = (data << 8) | *src++;
		--cnt;
	}
	for (; i<4; ++i, ++cp) {
		data = (data << 8) | (*(uchar *)cp);
	}

	return (write_word (info, wp, data));
}

int write_buff (flash_info_t * info, uchar * src, ulong addr, ulong cnt)
{
	switch (info->flash_id & FLASH_VENDMASK) {
		case (FLASH_MAN_INTEL & FLASH_VENDMASK):
			return write_buff_intel(info, src, addr, cnt);
		case (PHILIPS_LPC2292 & FLASH_VENDMASK):
			return lpc2292_write_buff(info, src, addr, cnt);
		default:
			return ERR_PROG_ERROR;
	}
	return ERR_PROG_ERROR;
}



