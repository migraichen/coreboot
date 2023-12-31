/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef PSP_POST_CODE_H
#define PSP_POST_CODE_H

#define POSTCODE_ENTERED_PSP_VERSTAGE			0x00
#define POSTCODE_CONSOLE_INIT				0x01
#define POSTCODE_EARLY_INIT				0x02
#define POSTCODE_LATE_INIT				0x03
#define POSTCODE_VERSTAGE_MAIN				0x04
#define POSTCODE_VERSTAGE_S0I3_RESUME			0x05

#define POSTCODE_SAVE_BUFFERS				0x0E
#define POSTCODE_UPDATE_BOOT_REGION			0x0F

#define POSTCODE_DEFAULT_BUFFER_SIZE_NOTICE		0xC0
#define POSTCODE_WORKBUF_RESIZE_WARNING			0xC1
#define POSTCODE_WORKBUF_SAVE_ERROR			0xC2
#define POSTCODE_WORKBUF_BUFFER_SIZE_ERROR		0xC3
#define POSTCODE_ROMSIG_MISMATCH_ERROR			0xC4
#define POSTCODE_PSP_COOKIE_MISMATCH_ERROR		0xC5
#define POSTCODE_BHD_COOKIE_MISMATCH_ERROR		0xC6
#define POSTCODE_UPDATE_PSP_BIOS_DIR_ERROR		0xC7
#define POSTCODE_FMAP_REGION_MISSING			0xC8
#define POSTCODE_AMD_FW_MISSING				0xC9
#define POSTCODE_CMOS_RECOVERY				0xCA
#define POSTCODE_EARLY_INIT_ERROR			0xCB
#define POSTCODE_INIT_TPM_FAILED			0xCC
#define POSTCODE_MAP_SPI_ROM_FAILED			0xCD

#define POSTCODE_UNMAP_SPI_ROM				0xF0
#define POSTCODE_UNMAP_FCH_DEVICES			0xF1
#define POSTCODE_LEAVING_VERSTAGE			0xF2

#endif
