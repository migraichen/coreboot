/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef __DRIVERS_TPM_CR50_H__
#define __DRIVERS_TPM_CR50_H__

#include <types.h>

/* Structure describing the elements of GSC firmware version. */
struct cr50_firmware_version {
	int epoch;
	int major;
	int minor;
};

/* Indicates whether Cr50 ready pulses are guaranteed to be at least 100us. */
bool cr50_is_long_interrupt_pulse_enabled(void);

/* Get the GSC firmware version information. */
enum cb_err cr50_get_firmware_version(struct cr50_firmware_version *version);

/* Set the BOARD_CFG register depending on Cr50 Kconfigs */
enum cb_err cr50_set_board_cfg(void);

/* Wait for IRQ to indicate the TPM is ready */
enum cb_err cr50_wait_tpm_ready(void);

/* Check TPM IRQ and clear it, returns 1 when IRQ pending or 0 when not */
int cr50_plat_irq_status(void);

#endif /* __DRIVERS_TPM_CR50_H__ */
