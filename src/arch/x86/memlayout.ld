/* SPDX-License-Identifier: GPL-2.0-only */

#include <memlayout.h>
#include <arch/header.ld>

/*
 * The bootblock linker script should be included before the Cache-As-RAM linker
 * script. Indeed, if it is included after and Cache-As-RAM .data section
 * support is enabled, the definition order of the sections makes the linker
 * create an image with an almost 4 GB hole.
 */
#if ENV_BOOTBLOCK
INCLUDE "bootblock/arch/x86/bootblock.ld"
#endif /* ENV_BOOTBLOCK */

SECTIONS
{
	/*
	 * It would be good to lay down RAMSTAGE, ROMSTAGE, etc consecutively
	 * like other architectures/chipsets it's not possible because of
	 * the linking games played during romstage creation by trying
	 * to find the final landing place in CBFS for XIP. Therefore,
	 * conditionalize with macros.
	 */
#if ENV_RAMSTAGE
	/* Relocated at runtime in cbmem so the address does not matter. */
	RAMSTAGE(64M, 8M)

#elif ENV_SEPARATE_ROMSTAGE
	/* The 1M size is not allocated. It's just for basic size checking.
	 * Link at 32MiB address and rely on cbfstool to relocate to XIP. */
	ROMSTAGE(CONFIG_ROMSTAGE_ADDR, 1M)

	INCLUDE "romstage/arch/x86/car.ld"
#elif ENV_SEPARATE_VERSTAGE
	/* The 1M size is not allocated. It's just for basic size checking.
	 * Link at 32MiB address and rely on cbfstool to relocate to XIP. */
	VERSTAGE(CONFIG_VERSTAGE_ADDR, 1M)

	INCLUDE "verstage/arch/x86/car.ld"
#elif ENV_BOOTBLOCK

	INCLUDE "bootblock/arch/x86/car.ld"

#elif ENV_POSTCAR
	POSTCAR(32M, 1M)
#endif
}
