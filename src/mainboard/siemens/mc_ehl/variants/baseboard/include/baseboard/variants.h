/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef __BASEBOARD_VARIANTS_H__
#define __BASEBOARD_VARIANTS_H__

#include <soc/gpio.h>
#include <soc/meminit.h>
#include <stdint.h>

/* The following 2 functions return the gpio table and fill in the number
 * of entries for each table. */
const struct pad_config *variant_gpio_table(size_t *num);
const struct pad_config *variant_early_gpio_table(size_t *num);

/* This function returns SPD related FSP-M mainboard configs */
const struct mb_cfg *variant_memcfg_config(void);

/* This function can select half-populate DRAM */
bool half_populated(void);

/* The following function performs board specific things. */
void variant_mainboard_final(void);

#endif /*__BASEBOARD_VARIANTS_H__ */
