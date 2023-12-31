/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef CPU_INTEL_CAR_POST_CODES_H
#define CPU_INTEL_CAR_POST_CODES_H

#define POSTCODE_SOC_SET_DEF_MTRR_TYPE			0x21
#define POSTCODE_SOC_CLEAR_FIXED_MTRRS			0x22	// Intentional Duplicate
#define POSTCODE_SOC_DETERMINE_CPU_ADDR_BITS		0x22
#define POSTCODE_SOC_BSP_INIT				0x23
#define POSTCODE_SOC_COUNT_CORES			0x24
#define POSTCODE_SOC_CPU_HYPER_THREADING		0x25
#define POSTCODE_SOC_CPU_SIBLING_DELAY			0x26
#define POSTCODE_SOC_CPU_AP_INIT			0x27
#define POSTCODE_SOC_SET_MTRR_BASE			0x28
#define POSTCODE_SOC_SET_MTRR_MASK			0x29	// Intentional Duplicate
#define POSTCODE_SOC_AP_HALT				0x29
#define POSTCODE_SOC_SET_CAR_BASE			0x2a
#define POSTCODE_SOC_ENABLE_MTRRS			0x2b
#define POSTCODE_SOC_ENABLE_CACHE			0x2c
#define POSTCODE_SOC_DISABLE_CACHE			0x2d
#define POSTCODE_SOC_FILL_CACHE				0x2e
#define POSTCODE_BOOTBLOCK_BEFORE_C_ENTRY		0x2f

#define POSTCODE_POSTCAR_DISABLE_CACHE			0x30
#define POSTCODE_POSTCAR_DISABLE_DEF_MTRR		0x31
#define POSTCODE_POSTCAR_TEARDOWN_DONE			0x32

#endif
