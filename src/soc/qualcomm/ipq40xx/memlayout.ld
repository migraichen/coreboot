/* SPDX-License-Identifier: GPL-2.0-only */

#include <memlayout.h>

#include <arch/header.ld>

SECTIONS
{
	REGION(oc_imem, 0x08600000, 32K, 0)

	/* ==vvv== OC_IMEM_1_START	0x08600000 ==vvv== */
/*	DDR(0x08600000, 32K) */
	/* ==^^^== OC_IMEM_1_END	0x08608000 ==^^^== */

	/* ==vvv== WIFI_IMEM_0_START	0x0A0C0000 ==vvv== */
	REGION_START(wifi_imem_0, 0x0A0C0000)
	/* This includes bootblock image, can be reused after bootblock starts */
/*	UBER_SBL(0x0A0C0000, 48K) */

	PRERAM_CBFS_CACHE(0x0A0C0000, 84K)
	CBFS_MCACHE(0x0A0ED800, 8K)
	FMAP_CACHE(0x0A0EF800, 2K)

	TTB(0x0A0F0000, 16K)
	TTB_SUBTABLES(0x0A0F4000, 4K)
	REGION_END(wifi_imem_0, 0x0A100000)
	/* ==^^^== WIFI_IMEM_0_END	0x0A100000 ==^^^== */


	/* ==vvv== WIFI_IMEM_1_START	0x0A8C0000 ==vvv== */
	REGION_START(wifi_imem_1, 0x0A8C0000)
	BOOTBLOCK(0x0A8C0000, 24K)
	OVERLAP_VERSTAGE_ROMSTAGE(0x0A8C6000, 64K)
	VBOOT2_WORK(0x0A8D6000, 12K)
	PRERAM_CBMEM_CONSOLE(0x0A8DA000, 32K)
	TIMESTAMP(0x0A8E2000, 1K)

/*	0x0A8E2400..0x0A8FC000  103 KB free */

	STACK(0x0A8FC000, 16K)
	REGION_END(wifi_imem_1, 0x0A900000)
	/* ==^^^== WIFI_IMEM_1_END	0x0A900000 ==^^^== */

	DRAM_START(0x80000000)
	SYMBOL(memlayout_cbmem_top, 0x87280000)
	POSTRAM_CBFS_CACHE(0x87280000, 512K)
	RAMSTAGE(0x87300000, 2M)
	DMA_COHERENT(0x87500000, 2M)
}
