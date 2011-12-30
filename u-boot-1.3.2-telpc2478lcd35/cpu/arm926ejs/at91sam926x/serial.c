/*
 * (C) Copyright 2005
 * M. Amine SAYA ATMEL Rousset, France.
 * Added AT91SAM9261's serial port support.
 * Added NADIA2's serial port support.
 *
 * (C) Copyright 2002
 * Lineo, Inc <www.lineo.com>
 * Bernhard Kuhn <bkuhn@lineo.com>
 *
 * (C) Copyright 2002
 * Sysgo Real-Time Solutions, GmbH <www.elinos.com>
 * Marius Groeger <mgroeger@sysgo.de>
 *
 * (C) Copyright 2002
 * Sysgo Real-Time Solutions, GmbH <www.elinos.com>
 * Alex Zuepke <azu@sysgo.de>
 *
 * Copyright (C) 1999 2000 2001 Erik Mouw (J.A.K.Mouw@its.tudelft.nl)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include <common.h>
#include <asm/io.h>
#include <asm/arch/hardware.h>

#if !defined(CONFIG_DBGU) && !defined(CONFIG_USART0) && !defined(CONFIG_USART1) && !defined(CONFIG_USART2)
#error must define one of CONFIG_DBGU or CONFIG_USART0 or CONFIG_USART1 or CONFIG_USART2
#endif

/* Serial ports for SAM926x */
#ifdef CONFIG_DBGU
AT91PS_USART us = (AT91PS_USART) AT91C_BASE_DBGU;
#endif

#ifdef CONFIG_USART0
AT91PS_USART us = (AT91PS_USART) AT91C_BASE_US0;
#endif

#ifdef CONFIG_USART1
AT91PS_USART us = (AT91PS_USART) AT91C_BASE_US1;
#endif

#ifdef CONFIG_USART2
AT91PS_USART us = (AT91PS_USART) AT91C_BASE_US2;
#endif

extern int AT91F_Serial_Hardware_Init(void);


void serial_setbrg (void)
{
  DECLARE_GLOBAL_DATA_PTR;
  int baudrate;
  
  if ((baudrate = gd->baudrate) <= 0)
    baudrate = CONFIG_BAUDRATE;
  if (baudrate == 0 || baudrate == CONFIG_BAUDRATE)
    us->US_BRGR = AT91C_MASTER_CLOCK/(baudrate * 16);
}

int serial_init (void)
{
  /* make any port initializations specific to this port */
  AT91F_Serial_Hardware_Init();
  
  serial_setbrg ();
  
  us->US_CR = AT91C_US_RSTRX | AT91C_US_RSTTX;
  us->US_CR = AT91C_US_RXEN | AT91C_US_TXEN;
  us->US_MR =
    (AT91C_US_CLKS_CLOCK | AT91C_US_CHRL_8_BITS |
     AT91C_US_PAR_NONE | AT91C_US_NBSTOP_1_BIT);
  us->US_IMR = ~0ul;
  return (0);
}

void serial_putc (const char c)
{
  if (c == '\n')
    serial_putc ('\r');
  while ((us->US_CSR & AT91C_US_TXRDY) == 0);
  us->US_THR = c;
}

void serial_puts (const char *s)
{
  while (*s) {
    serial_putc (*s++);
  }
}

int serial_getc (void)
{
  while ((us->US_CSR & AT91C_US_RXRDY) == 0);
  return us->US_RHR;
}

int serial_tstc (void)
{
  return ((us->US_CSR & AT91C_US_RXRDY) == AT91C_US_RXRDY);
}
