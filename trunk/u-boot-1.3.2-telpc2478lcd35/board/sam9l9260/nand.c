/*
 * (C) Copyright 2006 ATMEL Rousset, Lacressonniere Nicolas
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

#include <common.h>
#include <asm/arch/hardware.h>

#if defined(CONFIG_CMD_NAND)

#include <nand.h>

static uint8_t scan_ff_pattern[] = { 0xff, 0xff };

static struct nand_bbt_descr at91sam9260ek_largepage_memorybased = {
	.options = 0,
	.offs = 5,
	.len = 1,
	.pattern = scan_ff_pattern
};

/*
 *	hardware specific access to control-lines
 */ 
#define	MASK_ALE	(1 << 21)	/* our ALE is AD21 */
#define	MASK_CLE	(1 << 22)	/* our CLE is AD22 */

/*
 * Disk On Chip (NAND) Millenium initialization.
 * The NAND lives in the CS3 space
 */
void at91sam9260ek_nand_init (struct nand_chip *nand)
{
  /* Setup Smart Media, first enable the address range of CS3 in HMATRIX user interface */
  AT91C_BASE_CCFG->CCFG_EBICSA |= AT91C_EBI_CS3A_SM;
    
  /* Configure SMC CS3 */
  AT91C_BASE_SMC->SMC_SETUP3 = (AT91C_SM_NWE_SETUP | AT91C_SM_NCS_WR_SETUP |
				AT91C_SM_NRD_SETUP | AT91C_SM_NCS_RD_SETUP);
  
  AT91C_BASE_SMC->SMC_PULSE3 = (AT91C_SM_NWE_PULSE | AT91C_SM_NCS_WR_PULSE | AT91C_SM_NRD_PULSE | AT91C_SM_NCS_RD_PULSE);
  
  AT91C_BASE_SMC->SMC_CYCLE3 = (AT91C_SM_NWE_CYCLE | AT91C_SM_NRD_CYCLE);
  
  if ((nand->options & NAND_BUSWIDTH_16) == NAND_BUSWIDTH_16)
  {
  	AT91C_BASE_SMC->SMC_CTRL3 = (AT91C_SMC_READMODE | AT91C_SMC_WRITEMODE | AT91C_SMC_NWAITM_NWAIT_DISABLE |
				       AT91C_SMC_DBW_WIDTH_SIXTEEN_BITS | AT91C_SM_TDF);
  } else {
    	AT91C_BASE_SMC->SMC_CTRL3 = (AT91C_SMC_READMODE | AT91C_SMC_WRITEMODE | AT91C_SMC_NWAITM_NWAIT_DISABLE |
				       AT91C_SMC_DBW_WIDTH_EIGTH_BITS | AT91C_SM_TDF);
  }				       

  /* Configure RDY/BSY input signal */
  AT91C_BASE_PMC->PMC_PCER = 1 << AT91C_ID_PIOC;
  
  AT91C_BASE_PIOC->PIO_ODR  = AT91C_PIO_PC13;
  AT91C_BASE_PIOC->PIO_PER  = AT91C_PIO_PC13;

  AT91C_BASE_PIOC->PIO_PPUER = AT91C_PIO_PC13;   /* Enable pull-up */
    
  /* Enable NandFlash */
  AT91C_BASE_PIOC->PIO_PER = AT91C_PIO_PC14;
  AT91C_BASE_PIOC->PIO_OER = AT91C_PIO_PC14;

  /* Configure ECC for 2048 page size */
  if ((nand->eccmode & NAND_ECC_HW12_2048) == NAND_ECC_HW12_2048)
  	*AT91C_HECC_MR = (2 & AT91C_ECC_PAGE_SIZE);

}

static void at91sam9260ek_nand_hwcontrol(struct mtd_info *mtd, int cmd)
{
	struct nand_chip *this = mtd->priv;
	ulong IO_ADDR_W = (ulong) this->IO_ADDR_W;

	IO_ADDR_W &= ~(MASK_ALE|MASK_CLE);
	switch (cmd) {
		case NAND_CTL_SETCLE: IO_ADDR_W |= MASK_CLE; break;
		case NAND_CTL_SETALE: IO_ADDR_W |= MASK_ALE; break;
		case NAND_CTL_CLRNCE: *AT91C_PIOC_SODR = AT91C_PIO_PC14; break;
		case NAND_CTL_SETNCE: *AT91C_PIOC_CODR = AT91C_PIO_PC14; break;
	}
	this->IO_ADDR_W = (void *) IO_ADDR_W;
}

/*
 *	chip R/B detection
 */
static int at91sam9260ek_nand_ready(struct mtd_info *mtd)
{
	return (*AT91C_PIOC_PDSR & AT91C_PIO_PC13);
}

/*
 *	Nand Enable Hardware ECC
 */
static void at91sam9260ek_nand_enable_hwecc(struct mtd_info *mtd, int mode)
{
	if (!(mode & NAND_ECC_READSYN))
		*AT91C_HECC_CR = AT91C_ECC_RST;
}

/*
 *	Nand Calculate Hardware ECC
 */
static int at91sam9260ek_nand_calculate_ecc(struct mtd_info *mtd, const u_char *dat, u_char *ecc_code)
{
	unsigned int ecc_value;

	ecc_value = *AT91C_HECC_PR & 0xFFFF;

	ecc_code[0] = ecc_value & 0xFF;
	ecc_code[1] = (ecc_value >> 8) & 0xFF;
	
	ecc_value = *AT91C_HECC_NPR & 0xFFFF;

	ecc_code[2] = ecc_value & 0xFF;
	ecc_code[3] = (ecc_value >> 8) & 0xFF;
}

/*
 *	Nand Hardware ECC Correction
 */
static int at91sam9260ek_nand_correct_data(struct mtd_info *mtd, u_char *dat, u_char *read_ecc, u_char
*calc_ecc)
{
	unsigned int ecc_status = *AT91C_HECC_SR;
	struct nand_chip *this = mtd->priv;
	
	if (ecc_status & AT91C_ECC_RECERR)
	{
		/* Multiple errors -> exit */
		if (ecc_status & AT91C_ECC_MULERR)
			return -1;

		/* Single bit error -> correct */
		if (ecc_status & AT91C_ECC_ECCERR)
		{
			unsigned int ecc_word, ecc_bit;
			
			ecc_status = *AT91C_HECC_PR & 0xFFFF;
			ecc_bit = ecc_status & 0xFF;
			ecc_word = (ecc_status & 0xFF) >> 4;
			
			if (this->options & NAND_BUSWIDTH_16)
			{
				unsigned short *pDat = (unsigned short *)dat;
				pDat[ecc_word] ^= (1 << ecc_bit);
			}
			else
			{
				dat[ecc_word] ^= (1 << ecc_bit);
			}
		}
	}
	
	return 0;
}

/**
 * nand_at91sam9260ek_bbt - [NAND Interface] Select at91sam9260ek_largepage_memorybased bad block table for the device
 * @mtd:	MTD device structure
 *
 * This function selects the at91sam9260ek_largepage_memorybased bad block table
 * support for the device and calls the nand_scan_bbt function
 * 
 * BadBlock information is stored in byte 5
 *
 * see drivers/nand/nand_bbt.c for more informations
*/
int nand_at91sam9260ek_bbt (struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;

	this->bbt_td = NULL;
	this->bbt_md = NULL;
	if (!this->badblock_pattern) {
		this->badblock_pattern = &at91sam9260ek_largepage_memorybased;
	}

	return nand_scan_bbt (mtd, this->badblock_pattern);
}

int board_nand_init(struct nand_chip *nand)
{
	/* Init due to switch 8/16 bits mode */
	if (nand->write_byte)
		nand->write_byte = NULL;
	if (nand->read_byte)
		nand->read_byte = NULL;
	if (nand->write_buf)
		nand->write_buf = NULL;
	if (nand->read_buf)
		nand->read_buf = NULL;
	if (nand->verify_buf)
		nand->verify_buf = NULL;

	nand->options |= NAND_HWECC_SYNDROME; /*NAND_BUSWIDTH_16;*/
	nand->eccmode = NAND_ECC_HW12_2048; /* NAND_ECC_SOFT;*/
	nand->enable_hwecc = at91sam9260ek_nand_enable_hwecc;
	nand->calculate_ecc = at91sam9260ek_nand_calculate_ecc;
	nand->correct_data = at91sam9260ek_nand_correct_data;
	nand->hwcontrol = at91sam9260ek_nand_hwcontrol;
	nand->scan_bbt = nand_at91sam9260ek_bbt;
	nand->dev_ready = at91sam9260ek_nand_ready;
	nand->chip_delay = 18;
		
	at91sam9260ek_nand_init(nand);
	
	return 0;
}
#endif
