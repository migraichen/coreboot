/* SPDX-License-Identifier: GPL-2.0-or-later */

#include <bootblock_common.h>
#include <southbridge/intel/bd82x6x/pch.h>
#include <superio/smsc/lpc47n217/lpc47n217.h>
#include <ec/hp/kbc1126/ec.h>

#define SERIAL_DEV PNP_DEV(0x4e, LPC47N217_SP1)

const struct southbridge_usb_port mainboard_usb_ports[] = {
	{ 1, 1, 0 }, /* left front */
	{ 1, 1, 0 }, /* left rear, debug */
	{ 1, 1, 1 }, /* eSATA */
	{ 1, 1, 1 }, /* webcam */
	{ 1, 0, 2 },
	{ 1, 0, 2 }, /* bluetooth */
	{ 0, 0, 3 },
	{ 0, 0, 3 },
	{ 1, 1, 4 }, /* fingerprint reader */
	{ 1, 1, 4 }, /* WWAN */
	{ 1, 0, 5 }, /* right */
	{ 1, 0, 5 },
	{ 1, 0, 6 },
	{ 1, 0, 6 },
};

void bootblock_mainboard_early_init(void)
{
	lpc47n217_enable_serial(SERIAL_DEV, CONFIG_TTYS0_BASE);
	kbc1126_enter_conf();
	kbc1126_mailbox_init();
	kbc1126_kbc_init();
	kbc1126_ec_init();
	kbc1126_pm1_init();
	kbc1126_exit_conf();
}
