/* SPDX-License-Identifier: GPL-2.0-only */

#include <acpi/acpi.h>
#include <acpi/acpi_gnvs.h>
#include <soc/nvs.h>
#include <soc/device_nvs.h>

void mainboard_fill_gnvs(struct global_nvs *gnvs)
{
	/* PMIC is configured in I2C1, hide it for the OS */
	struct device_nvs *dev_nvs = acpi_get_device_nvs();
	dev_nvs->lpss_en[LPSS_NVS_I2C2] = 0;
}

void mainboard_fill_fadt(acpi_fadt_t *fadt)
{
	fadt->preferred_pm_profile = PM_MOBILE;
	fadt->iapc_boot_arch &= ~ACPI_FADT_8042;
}
