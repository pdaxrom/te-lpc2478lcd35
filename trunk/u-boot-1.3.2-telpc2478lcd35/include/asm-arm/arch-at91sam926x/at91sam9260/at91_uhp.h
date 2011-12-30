/*
 * (C) Copyright 2006
 * M Amine SAYA ATMEL Rousset, France.
 *
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

#ifndef AT91SAM9260_AT91_UHP_H
#define AT91SAM9260_AT91_UHP_H

/* ***************************************************************************** */
/*              SOFTWARE API DEFINITION  FOR USB Host Interface */
/* ***************************************************************************** */
typedef struct _AT91S_UHP {
	AT91_REG	 UHP_HcRevision; 	/* Revision */
	AT91_REG	 UHP_HcControl; 	/* Operating modes for the Host Controller */
	AT91_REG	 UHP_HcCommandStatus; 	/* Command & status Register */
	AT91_REG	 UHP_HcInterruptStatus; 	/* Interrupt Status Register */
	AT91_REG	 UHP_HcInterruptEnable; 	/* Interrupt Enable Register */
	AT91_REG	 UHP_HcInterruptDisable; 	/* Interrupt Disable Register */
	AT91_REG	 UHP_HcHCCA; 	/* Pointer to the Host Controller Communication Area */
	AT91_REG	 UHP_HcPeriodCurrentED; 	/* Current Isochronous or Interrupt Endpoint Descriptor */
	AT91_REG	 UHP_HcControlHeadED; 	/* First Endpoint Descriptor of the Control list */
	AT91_REG	 UHP_HcControlCurrentED; 	/* Endpoint Control and Status Register */
	AT91_REG	 UHP_HcBulkHeadED; 	/* First endpoint register of the Bulk list */
	AT91_REG	 UHP_HcBulkCurrentED; 	/* Current endpoint of the Bulk list */
	AT91_REG	 UHP_HcBulkDoneHead; 	/* Last completed transfer descriptor */
	AT91_REG	 UHP_HcFmInterval; 	/* Bit time between 2 consecutive SOFs */
	AT91_REG	 UHP_HcFmRemaining; 	/* Bit time remaining in the current Frame */
	AT91_REG	 UHP_HcFmNumber; 	/* Frame number */
	AT91_REG	 UHP_HcPeriodicStart; 	/* Periodic Start */
	AT91_REG	 UHP_HcLSThreshold; 	/* LS Threshold */
	AT91_REG	 UHP_HcRhDescriptorA; 	/* Root Hub characteristics A */
	AT91_REG	 UHP_HcRhDescriptorB; 	/* Root Hub characteristics B */
	AT91_REG	 UHP_HcRhStatus; 	/* Root Hub Status register */
	AT91_REG	 UHP_HcRhPortStatus[2]; 	/* Root Hub Port Status Register */
} AT91S_UHP, *AT91PS_UHP;

/* ========== Register definition for UHP peripheral ==========  */
#define AT91C_UHP_HcRhPortStatus ((AT91_REG *) 	0x00500054) /* (UHP) Root Hub Port Status Register */
#define AT91C_UHP_HcRhDescriptorB ((AT91_REG *) 	0x0050004C) /* (UHP) Root Hub characteristics B */
#define AT91C_UHP_HcLSThreshold ((AT91_REG *) 	0x00500044) /* (UHP) LS Threshold */
#define AT91C_UHP_HcFmNumber ((AT91_REG *) 	0x0050003C) /* (UHP) Frame number */
#define AT91C_UHP_HcFmInterval ((AT91_REG *) 	0x00500034) /* (UHP) Bit time between 2 consecutive SOFs */
#define AT91C_UHP_HcBulkCurrentED ((AT91_REG *) 	0x0050002C) /* (UHP) Current endpoint of the Bulk list */
#define AT91C_UHP_HcControlCurrentED ((AT91_REG *) 	0x00500024) /* (UHP) Endpoint Control and Status Register */
#define AT91C_UHP_HcPeriodCurrentED ((AT91_REG *) 	0x0050001C) /* (UHP) Current Isochronous or Interrupt Endpoint Descriptor */
#define AT91C_UHP_HcInterruptDisable ((AT91_REG *) 	0x00500014) /* (UHP) Interrupt Disable Register */
#define AT91C_UHP_HcInterruptStatus ((AT91_REG *) 	0x0050000C) /* (UHP) Interrupt Status Register */
#define AT91C_UHP_HcControl ((AT91_REG *) 	0x00500004) /* (UHP) Operating modes for the Host Controller */
#define AT91C_UHP_HcRhStatus ((AT91_REG *) 	0x00500050) /* (UHP) Root Hub Status register */
#define AT91C_UHP_HcRhDescriptorA ((AT91_REG *) 	0x00500048) /* (UHP) Root Hub characteristics A */
#define AT91C_UHP_HcPeriodicStart ((AT91_REG *) 	0x00500040) /* (UHP) Periodic Start */
#define AT91C_UHP_HcFmRemaining ((AT91_REG *) 	0x00500038) /* (UHP) Bit time remaining in the current Frame */
#define AT91C_UHP_HcBulkDoneHead ((AT91_REG *) 	0x00500030) /* (UHP) Last completed transfer descriptor */
#define AT91C_UHP_HcBulkHeadED ((AT91_REG *) 	0x00500028) /* (UHP) First endpoint register of the Bulk list */
#define AT91C_UHP_HcControlHeadED ((AT91_REG *) 	0x00500020) /* (UHP) First Endpoint Descriptor of the Control list */
#define AT91C_UHP_HcHCCA ((AT91_REG *) 	0x00500018) /* (UHP) Pointer to the Host Controller Communication Area */
#define AT91C_UHP_HcInterruptEnable ((AT91_REG *) 	0x00500010) /* (UHP) Interrupt Enable Register */
#define AT91C_UHP_HcCommandStatus ((AT91_REG *) 	0x00500008) /* (UHP) Command & status Register */
#define AT91C_UHP_HcRevision ((AT91_REG *) 	0x00500000) /* (UHP) Revision */

#endif
