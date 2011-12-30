/*
 * (C) Copyright 2006 Embedded Artists AB <www.embeddedartists.com>
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



flash_info_t flash_info[CFG_MAX_FLASH_BANKS];

//extern int lpc2468_copy_buffer_to_flash(flash_info_t *, ulong);
extern int lpc2468_flash_erase_philips(flash_info_t *, int, int);
extern int lpc2468_write_buff_philips(flash_info_t *, uchar *,	ulong, ulong);


/*-----------------------------------------------------------------------
 *
 */
int get_flash_sector(flash_info_t * info, ulong flash_addr)
{
  int i;

  for(i=1; i < (info->sector_count); i++) {
    if (flash_addr < (info->start[i]))
      break;
  }

  return (i-1);
}



/*-----------------------------------------------------------------------
 */

ulong flash_init (void)
{
  int j, k;
  ulong size = 0;
  ulong flashbase = 0;

  flash_info[0].flash_id = (PHILIPS_LPC2468 & FLASH_VENDMASK);
  flash_info[0].size = 0x007D000;	/* 512 - 12 KB */
  flash_info[0].sector_count = 27;
  memset (flash_info[0].protect, 0, 27);
  flashbase = 0x00000000;
  for (j = 0, k = 0; j < 8; j++, k++) {
    flash_info[0].start[k] = flashbase;
    flashbase += 0x00001000;
  }
  for (j = 0; j < 14; j++, k++) {
    flash_info[0].start[k] = flashbase;
    flashbase += 0x00008000;
  }
  for (j = 0; j < 5; j++, k++) {
    flash_info[0].start[k] = flashbase;
    flashbase += 0x00001000;
  }		
  size += flash_info[0].size;

  /* Protect monitor and environment sectors */
  flash_protect (FLAG_PROTECT_SET,
		 0x0,
		 0x0 + monitor_flash_len - 1,
		 &flash_info[0]);
  
#ifdef CFG_ENV_IS_IN_FLASH
  flash_protect (FLAG_PROTECT_SET,
		 CFG_ENV_ADDR,
		 CFG_ENV_ADDR + CFG_ENV_SIZE - 1, 
		 &flash_info[0]);
#endif 

  return size;
}

/*-----------------------------------------------------------------------
 */
void flash_print_info (flash_info_t * info)
{
  int i;
  int erased = 0;
  unsigned long j;
  unsigned long count;
  unsigned char *p;

  switch (info->flash_id & FLASH_VENDMASK) {
  case (SST_MANUFACT & FLASH_VENDMASK):
    printf("SST: ");
    break;
  case (PHILIPS_LPC2468 & FLASH_VENDMASK):
    printf("Philips: ");
    break;
  default:
    printf ("Unknown Vendor ");
    break;
  }
  
  printf ("  Size: %ld KB in %d Sectors\n",
	  info->size >> 10, info->sector_count);

  printf ("  Sector Start Addresses:");
  for (i = 0; i < info->sector_count; i++) {
    if ((i % 5) == 0) {
      printf ("\n   ");
    }
    if (i < (info->sector_count - 1)) {
      count = info->start[i+1] - info->start[i];
    }
    else {
      count = info->start[0] + info->size - info->start[i];
    }
    p = (unsigned char*)(info->start[i]);
    erased = 1;
    for (j = 0; j < count; j++) {
      if (*p != 0xFF) {
	erased = 0;
	break;
      }
      p++;
    }
    printf (" %08lX%s%s", info->start[i],
	    info->protect[i] ? " RO" : "   ",
	    erased ? " E" : "  ");
  }
  printf ("\n");
}

int flash_erase (flash_info_t * info, int s_first, int s_last)
{
  switch (info->flash_id & FLASH_VENDMASK) {
  case (PHILIPS_LPC2468 & FLASH_VENDMASK):
    return lpc2468_flash_erase_philips(info, s_first, s_last);  
  default:
    return ERR_PROTECTED;
  }
  return ERR_PROTECTED;
}

int write_buff (flash_info_t * info, uchar * src, ulong addr, ulong cnt)
{
  switch (info->flash_id & FLASH_VENDMASK) {
  case (PHILIPS_LPC2468 & FLASH_VENDMASK):
    return lpc2468_write_buff_philips(info, src, addr, cnt);  
  default:
    return ERR_PROG_ERROR;
  }
  return ERR_PROG_ERROR;
}
