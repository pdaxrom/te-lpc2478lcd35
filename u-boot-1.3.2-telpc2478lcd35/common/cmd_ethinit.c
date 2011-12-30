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
 * Boot support
 */
#include <common.h>
#include <command.h>
#include <net.h>
#ifdef CONFIG_ETHINIT
extern int eth_init (bd_t * bd);

static void	delay(void)
{
}

int do_ethinit (cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{
	int	i;
	DECLARE_GLOBAL_DATA_PTR;
	while(eth_init (gd->bd) == 0) {
		for(i = 0; i < 10000000; i ++) {
			delay();
		}
	}
	return 0;
}

U_BOOT_CMD(
	ethinit,	1,	1,	do_ethinit,
	"ethinit\t- Initialize Ethernet controller\n",
	"\n"
);

#endif	/* CONFIG_ETHINIT */
