## SPDX-License-Identifier: GPL-2.0-only
ifeq ($(CONFIG_SOC_AMD_COMMON_BLOCK_PCI),y)

ramstage-y += amd_pci_util.c
ramstage-y += pci_routing_info.c
ramstage-$(CONFIG_HAVE_ACPI_TABLES) += acpi_prt.c
ramstage-$(CONFIG_SOC_AMD_COMMON_BLOCK_PCIE_GPP_DRIVER) += pcie_gpp.c

endif # CONFIG_SOC_AMD_COMMON_BLOCK_PCI

ifeq ($(CONFIG_SOC_AMD_COMMON_BLOCK_PCI_MMCONF),y)

all_x86-y += amd_pci_mmconf.c

endif # CONFIG_SOC_AMD_COMMON_BLOCK_PCI_MMCONF
