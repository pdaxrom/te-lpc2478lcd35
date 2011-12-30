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
 */

/*
 * FLASH support
 */
#include <common.h>
#include <command.h>

#include <dataflash.h>

#if defined(CONFIG_CMD_DATAFLASH)

#if defined(CONFIG_CMD_JFFS2) && defined(CONFIG_JFFS2_CMDLINE)
#include <jffs2/jffs2.h>

/* partition handling routines */
int mtdparts_init(void);
int id_parse(const char *id, const char **ret_id, u8 *dev_type, u8 *dev_num);
int find_dev_and_part(const char *id, struct mtd_device **dev,
		u8 *part_num, struct part_info **part);
#endif


int do_dflinfo ( cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{
	ulong bank;
	dataflash_print_info();
	return 0;
}

int do_dflerase (cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{
	return 0;
}


int do_dflprotect (cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{
	ulong addr_first, addr_last;
	int p;

#if defined(CONFIG_CMD_JFFS2) && defined(CONFIG_JFFS2_CMDLINE)
	struct mtd_device *dev;
	struct part_info *part;
	u8 dev_type, dev_num, pnum;
#endif
	int rcode = 0;
	int status;

	if (argc < 3) {
		printf ("Usage:\n%s\n", cmdtp->usage);
		return 1;
	}

	if (strcmp(argv[1], "off") == 0) {
		p = 0;
	} else if (strcmp(argv[1], "on") == 0) {
		p = 1;
	} else {
		printf ("Usage:\n%s\n", cmdtp->usage);
		return 1;
	}

	if ((strcmp(argv[2], "all") != 0) && (strcmp(argv[2], "bank") != 0)) {
		addr_first = simple_strtoul(argv[2], NULL, 16);
		addr_last  = simple_strtoul(argv[3], NULL, 16);

		if (addr_dataflash(addr_first) && addr_dataflash(addr_last)) {
			status = dataflash_real_protect(p,addr_first,addr_last);
			if (status < 0){
				puts ("Bad DataFlash sector specification\n");
				return 1;
			}
			printf("%sProtect %d DataFlash Sectors\n",
				p ? "" : "Un-", status);
			return 0;
		}
	}
	return rcode;
}

/**************************************************/
#if defined(CONFIG_CMD_JFFS2) && defined(CONFIG_JFFS2_CMDLINE)
# define TMP_ERASE	"erase <part-id>\n    - erase partition\n"
# define TMP_PROT_ON	"protect on <part-id>\n    - protect partition\n"
# define TMP_PROT_OFF	"protect off <part-id>\n    - make partition writable\n"
#else
# define TMP_ERASE	/* empty */
# define TMP_PROT_ON	/* empty */
# define TMP_PROT_OFF	/* empty */
#endif

U_BOOT_CMD(
	flinfo,    2,    1,    do_dflinfo,
	"flinfo  - print FLASH memory information\n",
	"\n    - print information for all FLASH memory banks\n"
	"flinfo N\n    - print information for FLASH memory bank # N\n"
);

U_BOOT_CMD(
	erase,   3,   1,  do_dflerase,
	"erase   - erase FLASH memory\n",
	"start end\n"
	"    - erase FLASH from addr 'start' to addr 'end'\n"
	"erase start +len\n"
	"    - erase FLASH from addr 'start' to the end of sect "
	"w/addr 'start'+'len'-1\n"
	"erase N:SF[-SL]\n    - erase sectors SF-SL in FLASH bank # N\n"
	"erase bank N\n    - erase FLASH bank # N\n"
	TMP_ERASE
	"erase all\n    - erase all FLASH banks\n"
);

U_BOOT_CMD(
	protect,  4,  1,   do_dflprotect,
	"protect - enable or disable FLASH write protection\n",
	"on  start end\n"
	"    - protect FLASH from addr 'start' to addr 'end'\n"
	"protect on start +len\n"
	"    - protect FLASH from addr 'start' to end of sect "
	"w/addr 'start'+'len'-1\n"
	"protect on  N:SF[-SL]\n"
	"    - protect sectors SF-SL in FLASH bank # N\n"
	"protect on  bank N\n    - protect FLASH bank # N\n"
	TMP_PROT_ON
	"protect on  all\n    - protect all FLASH banks\n"
	"protect off start end\n"
	"    - make FLASH from addr 'start' to addr 'end' writable\n"
	"protect off start +len\n"
	"    - make FLASH from addr 'start' to end of sect "
	"w/addr 'start'+'len'-1 wrtable\n"
	"protect off N:SF[-SL]\n"
	"    - make sectors SF-SL writable in FLASH bank # N\n"
	"protect off bank N\n    - make FLASH bank # N writable\n"
	TMP_PROT_OFF
	"protect off all\n    - make all FLASH banks writable\n"
);

#undef	TMP_ERASE
#undef	TMP_PROT_ON
#undef	TMP_PROT_OFF

#endif	/* CONFIG_CMD_FLASH */
