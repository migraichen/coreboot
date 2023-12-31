/* SPDX-License-Identifier: GPL-2.0-only */

#include <acpi/acpi_gnvs.h>
#include <soc/nvs.h>
#include "thermal.h"

void mainboard_fill_gnvs(struct global_nvs *gnvs)
{
	gnvs->tmps = CTDP_SENSOR_ID;

	gnvs->f1of = CTDP_NOMINAL_THRESHOLD_OFF;
	gnvs->f1on = CTDP_NOMINAL_THRESHOLD_ON;

	gnvs->f0of = CTDP_DOWN_THRESHOLD_OFF;
	gnvs->f0on = CTDP_DOWN_THRESHOLD_ON;

	gnvs->tcrt = CRITICAL_TEMPERATURE;
	gnvs->tpsv = PASSIVE_TEMPERATURE;
	gnvs->tmax = MAX_TEMPERATURE;
	gnvs->flvl = 1;

	// the lid is open by default.
	gnvs->lids = 1;
}
