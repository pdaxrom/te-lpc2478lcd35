#include <config.h>
#include <common.h>
#include <mmc.h>
#include <asm/errno.h>
#include <asm/arch/hardware.h>
#include <part.h>
#include <fat.h>
#include "mci.h"

#ifdef CONFIG_MMC

static block_dev_desc_t mmc_dev;

block_dev_desc_t * mmc_get_dev(int dev)
{
  return (block_dev_desc_t *)(&mmc_dev);
}

unsigned long mmc_block_read(int dev, 
			     unsigned long start, 
			     lbaint_t blkcnt,
			     unsigned long *buffer)
{
    uint8_t *ptr = (uint8_t *) buffer;
    lbaint_t i = 0;

    fprintf(stderr, "mmc_block_read: start=%lu, blkcnt=%lu\n", start, (unsigned long)blkcnt);

    for (i = 0; i < blkcnt; i++) {
	if (mci_read_sect(start, ptr, 1) != TRUE)
	    return 0;
	ptr += mmc_dev.blksz;
	start++;
    }

  return blkcnt;
}

int mmc_init(int verbose)
{
    int ret = -ENODEV;
    int error = FALSE;
    int i;

    printf("mmc_init\n");

    if (mci_init()) {
	MMCFG cfg;
	if (!mci_read_config (&cfg)) {
	    mci_fini();
	    return ret;
	}

	mmc_dev.if_type = IF_TYPE_MMC;
	mmc_dev.part_type = PART_TYPE_DOS;
	mmc_dev.dev = 0;
	mmc_dev.lun = 0;
	mmc_dev.type = 0;
	mmc_dev.blksz = cfg.read_blen;
	mmc_dev.lba = cfg.blocknr;
	sprintf(mmc_dev.vendor, "Unknown vendor");
	sprintf(mmc_dev.product, "Unknown product");
	sprintf(mmc_dev.revision, "N/A");
	mmc_dev.removable = 0;	/* should be true??? */
	mmc_dev.block_read = mmc_block_read;

	fprintf(stderr, "\nReturn %d after fat_register_device\n", fat_register_device(&mmc_dev, 1));
	ret = 0;
    }

    return ret;
}

int mmc_write(uchar * src, ulong dst, int size)
{
  printf("mmc_write: src=%p, dst=%lu, size=%u\n", src, dst, size);
  /* Since mmc2info always returns 0 this function will never be called */
  return 0;
}

int mmc_read(ulong src, uchar * dst, int size)
{
  printf("mmc_read: src=%lu, dst=%p, size=%u\n", src, dst, size);
  /* Since mmc2info always returns 0 this function will never be called */
  return 0;
}

int mmc2info(ulong addr)
{
  /* This function is used by cmd_cp to determine if source or destination
     address resides on MMC-card or not. We do not support copy to and from
     MMC-card so we always return 0. */
  return 0;
}

#endif /* CONFIG_MMC */
