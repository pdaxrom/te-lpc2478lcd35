/*
 * (C) Copyright 2000
 * Wolfgang Denk,	DENX Software Engineering, wd@denx.de.
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
#include <config.h>
#include <common.h>
#include <command.h>
#ifdef	CONFIG_NEW_DF_PARTITION
#include <dataflash.h>
#endif

/*
 * Macros to transform values
 * into environment strings.
 */
#define XMK_STR(x)	#x
#define MK_STR(x)	XMK_STR(x)

#if	1
int do_defenv (cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{
  /*	int	i;*/
  /*	DECLARE_GLOBAL_DATA_PTR;*/
	
#ifndef	CONFIG_ETHADDR
#define	CONFIG_ETHADDR		04:25:fe:ed:00:18
#endif
	setenv("ethaddr",	MK_STR(CONFIG_ETHADDR));

#ifndef	CONFIG_HOSTNAME
#define	CONFIG_HOSTNAME		at91sam9260dfc
#endif
	setenv("hostname",	MK_STR(CONFIG_HOSTNAME));
#ifndef	CONFIG_IPADDR
#define	CONFIG_IPADDR		10.175.196.18
#endif
	setenv("ipaddr",	MK_STR(CONFIG_IPADDR));

#ifndef	CONFIG_SERVERIP
#define	CONFIG_SERVERIP		10.175.196.221
#endif
	setenv("serverip",	MK_STR(CONFIG_SERVERIP));

#ifndef	CONFIG_GATEWAY
#define	CONFIG_GATEWAY		10.175.196.1
#endif
	setenv("gatewayip",	MK_STR(CONFIG_GATEWAY));


#ifndef	CONFIG_NETMASK
#define	CONFIG_NETMASK		255.255.255.0
#endif
	setenv("netmask",	MK_STR(CONFIG_NETMASK));

	setenv("kernel",	"21000000");
	setenv("ramdisk",	"2114A000"); /* 5 * 256 pages of 1056 bytes*/
	setenv("OS",		"C0042000");
	setenv("FS",		"C018C000");
	setenv("endflash",	"c083ffff");
	/* By updating the "fs-date" environment variable and running "fs"
	   You set "rd-1" and "rd-2"
	*/ 
	setenv("rd-1",		"rootfs.arm-2007-04-19.ext2");
	setenv("rd-2",		"rootfs.arm-2007-04-19.jffs2");
	setenv("rd-3",		"rootfs.arm-linux.ext2");
	setenv("rd-4",		"rootfs.arm-linux.jffs2");
	setenv("ver",		"1");


	setenv("config",	"tftp  ${ramdisk} autoscript.${hostname} ; autoscr ${ramdisk} ");

	setenv("kernel-version","2.6.20.4");
	setenv("kernel-date",	"2007-04-18");
	setenv("fs-date",	"2007-04-18");

	setenv("rd",		"rootfs.arm-2007-04-19.ext2");
#if	defined(CONFIG_AT91RM9200DF)
	setenv("linux",		"at91sam9260dfc-linux-2.6.20.4-2007-04-19.gz");
#elif	defined(CONFIG_AT91RM9200DK)
	setenv("linux",		"at91sam9260dfc-linux-2.6.20.4-2007-04-19.gz");
#elif	defined(CONFIG_AT91RM9200EK)
	setenv("linux",		"at91sam9260dfc-linux-2.6.20.4-2007-04-19.gz");
#elif	defined(CONFIG_AT91SAM9260DFC)
	setenv("linux",		"at91sam9260dfc-linux-2.6.20.4-2007-04-19.gz");
#elif	defined(CONFIG_AT91SAM9260EK)
	setenv("linux",		"at91sam9260ek-linux-2.6.20.4-2007-04-19.gz");
#elif	defined(CONFIG_AT91SAM9261EK)
	setenv("linux",		"at91sam9261ek-linux-2.6.20.4-2007-04-19.gz");
#elif	defined(CONFIG_AT91SAM9263EK)
	setenv("linux",		"at91sam9263ek-linux-2.6.20.4-2007-04-19.gz");
#elif	defined(CONFIG_AT91SAM9XEEK)
	setenv("linux",		"at91sam9xeek-linux-2.6.20.4-2007-04-19.gz");
#endif

	setenv("get-ramdisk",	"tftp	${ramdisk}	${rd};		setenv rd-size	${filesize}");
	setenv("store-ramdisk",	"cp.b	${ramdisk}	${FS}		${rd-size}");
	setenv("load-ramdisk",	"cp.b	${FS}		${ramdisk}	${rd-size}");
	setenv("flash-ramdisk",	"run	get-ramdisk;	run		store-ramdisk");

	setenv("get-kernel",	"tftp	${kernel}	${linux};	setenv	kernel-size	${filesize}");
	setenv("store-kernel",	"cp.b	${kernel}	${OS}		${kernel-size};		saveenv");
	setenv("load-kernel",	"cp.b	${OS}		${kernel}	${kernel-size};		saveenv");
	setenv("flash-kernel",	"run	get-kernel;	run		store-kernel");

	setenv("get",		"run get-kernel		; run get-ramdisk");
	setenv("flash",		"run flash-kernel	; run flash-ramdisk ; saveenv");
	setenv("load",		"run load-kernel	; run load-ramdisk");

	setenv("bootcmd",	"run load ; bootm 21000000");

	setenv("fstype",	"ram");
	setenv("flashfs",	"/dev/mtdblock2");
	setenv("ramfs",		"/dev/ram");

	setenv("rootfstype",	"jffs2");
	setenv("access",	"rw");
	setenv("initrd",	"0x2114A000,6000000");
	setenv("ramdisk_size",	"15360");
	setenv("console",	"ttyS0,115200");
#if	defined(CONFIG_AT91RM9200DF) || defined(CONFIG_AT91RM9200EK) || defined(CONFIG_AT91RM9200DK) 
	setenv("mem",		"32M");
#elif	defined(CONFIG_AT91SAM9260EK) || defined(CONFIG_AT91SAM9260DFC) || \
	defined(CONFIG_AT91SAM9261EK) || defined(CONFIG_AT91SAM9263EK) || \
	defined(CONFIG_SAM9_L9260)
	setenv("mem",		"64M");
#else
	setenv("mem",		"32M");
#endif
	setenv("bootargs",	"root=/dev/ram rw initrd=0x2114A000,6000000 ramdisk_size=15360   ip=10.175.196.18:10.175.196.221:10.175.196.1:255.255.255.0  console=ttyS0,115200,mem=64M");
	setenv("update",	"os; fs; setargs");
	setenv("cmpk",		"run flash-kernel; cp.b ${OS} ${ramdisk} ${kernel-size}; cmp ${kernel} ${ramdisk} ${kernel-size}"); 
#ifdef	CONFIG_AT91RM9200
	setenv("machid24",	"0x0fb");
	setenv("machid26",	"0x2c1");
	setenv("machid",	"0x2c1");
	setenv("k24",		"setenv machid ${machid24}; setenv kernel-version 2.4.27-vrs1; os");
	setenv("k26",		"setenv machid ${machid26}; setenv kernel-version 2.6.20.4; os");
#endif

#ifdef	CONFIG_NEW_DF_PARTITION
	AT91F_DataflashSetEnv ();
#endif
	return (saveenv() ? 1 : 0);
}



U_BOOT_CMD(
	defenv,	1,	1,	do_defenv,
	"defenv\t- Create a default environment\n",
	"\n"
);


int do_setargs (cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{

	char cmd[512];
	char *fstype;


	fstype = getenv("fstype");
	if(fstype != NULL) {
		if(fstype[0] == 'f') {
	
			sprintf(cmd,"root=%s rootfstype=%s ip=%s:%s:%s:%s console=%s,mem=%s",
				getenv("flashfs"),
				getenv("rootfstype"),
				getenv("ipaddr"),
				getenv("serverip"),
				getenv("gatewayip"),
				getenv("netmask"),
				getenv("console"),
				getenv("mem")
			);
			cmd[511] = '\0';
			printf("len=%d: %s\n",strlen(cmd),cmd);
			if(strlen(cmd) > 500) {
				printf("Error: Environment too large during 'setargs'\n");
			} else {
				setenv("bootargs",cmd);
				setenv("bootcmd",	"run load-kernel ; bootm 21000000");
			}
		} else if(cmd[0] == 'r') {
			sprintf(cmd,"root=%s %s initrd=%s ramdisk_size=%s ip=%s:%s:%s:%s console=%s,mem=%s",
				getenv("ramfs"),
				getenv("access"),
				getenv("initrd"),
				getenv("ramdisk_size"),
				getenv("ipaddr"),
				getenv("serverip"),
				getenv("gatewayip"),
				getenv("netmask"),
				getenv("console"),
				getenv("mem")
			);
			printf("len=%d: %s\n",strlen(cmd),cmd);
			cmd[511] = '\0';
			if(strlen(cmd) > 500) {
				printf("Error: Environment too large during 'setargs'\n");
			} else {
				setenv("bootargs",cmd);
				setenv("bootcmd",	"run load ; bootm 21000000");
			}
		}
	}
	return 0;
}

U_BOOT_CMD(
	setargs,	1,	1,	do_setargs,
	"setargs\t- Create a bootargs from:"
	"fstype=flash:	(${flash} ${access} ${initrd} ${ramdisk_size}) "
	"fstype=ram:	(${ram}   ${access} ${initrd} ${ramdisk_size}) "
	"${ipaddr} ${serverip} ${gatewayip} ${netmask} "
	"${console} ${mem}\n"
	,	"\n"
);

int do_os (cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{
	char *kchip;
	char *kdate;
	char *kver;
	char cmd[512];
	kchip = getenv("hostname");
	kdate = getenv("kernel-date");
	kver = getenv("kernel-version");
	if((strlen(kdate) + strlen(kver) + 32) >  500) {
		printf("Error: Environment too large during 'os': ");
		printf("len=%d\n", strlen(kdate) + strlen(kver) + 32);
	} else if(kver != NULL) {
		if(kdate != NULL) {
			sprintf(cmd,"%s-linux-%s-%s.gz",kchip,kver,kdate);
		} else {
			sprintf(cmd,"%s-linux-%s.gz",kchip,kver);
		}
		printf("Setting kernel to %s\n",cmd);
		setenv("linux",cmd);
		return 0;
	}
	return 1;
}

U_BOOT_CMD(
	os,	1,	1,	do_os,
	"os\t- Select linux version  ${hostname}-linux-${kernel-name}-${kernel-date}\n"
	,	"\n"
);


int do_fs (cmd_tbl_t *cmdtp, int flag, int argc, char *argv[])
{
	char *ver;
	char *fsdate;
	char *hostname;
	char cmd[512];
	fsdate		= getenv("fs-date");
	hostname	= getenv("hostname");

	if(fsdate != NULL) {
		sprintf(cmd,"rootfs.arm-%s.ext2",fsdate);
		setenv("rd-1",cmd);
		sprintf(cmd,"rootfs.arm-%s.jffs2",fsdate);
		setenv("rd-2",cmd);
	}
	ver = getenv("ver");		/* Find out which version we are using*/
	if(cmd==NULL) {
		setenv("ver","1");
	}
	ver = getenv("ver");		/* Find out which version we are using*/
	sprintf(cmd,"rd-%s",ver);	/* create rd${ver}*/
	ver=getenv(cmd);
	sprintf(cmd,"%s",ver);
	printf("Setting ramdisk to %s\n",cmd);
	setenv("rd",cmd);
	return 0;
}


U_BOOT_CMD(
	fs,	1,	1,	do_fs,
	"fs\t- Select ramdisk version == rd-${ver}\n"
	,	"\n"
);

#endif	/* CONFIG_DEFENV */
