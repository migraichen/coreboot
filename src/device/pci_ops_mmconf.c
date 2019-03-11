/*
 * This file is part of the coreboot project.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <device/mmio.h>
#include <device/pci.h>
#include <device/pci_ops.h>
#include <device/pci_mmio_cfg.h>

#if (CONFIG_MMCONF_BASE_ADDRESS == 0)
#error "CONFIG_MMCONF_BASE_ADDRESS needs to be non-zero!"
#endif

/*
 * Functions for accessing PCI configuration space with mmconf accesses
 */

static const struct pci_bus_operations pci_ops_mmconf = {
	.read8 = pci_mmio_read_config8,
	.read16 = pci_mmio_read_config16,
	.read32 = pci_mmio_read_config32,
	.write8 = pci_mmio_write_config8,
	.write16 = pci_mmio_write_config16,
	.write32 = pci_mmio_write_config32,
};

const struct pci_bus_operations *pci_bus_default_ops(void)
{
	return &pci_ops_mmconf;
}
