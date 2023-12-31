/* SPDX-License-Identifier: GPL-2.0-only */

#include <bootblock_common.h>
#include <northbridge/intel/sandybridge/raminit.h>
#include <southbridge/intel/bd82x6x/pch.h>
#include <ec/hp/kbc1126/ec.h>

const struct southbridge_usb_port mainboard_usb_ports[] = {
	{ 1, 1, 0 },
	{ 1, 0, 0 },
	{ 1, 1, 1 },
	{ 0, 1, 1 },
	{ 0, 0, 2 },
	{ 1, 0, 2 },
	{ 0, 0, 3 },
	{ 0, 0, 3 },
	{ 1, 0, 4 }, /* B1P1: Digitizer */
	{ 1, 0, 4 }, /* B1P2: wlan USB, EHCI debug */
	{ 1, 1, 5 }, /* B1P3: Camera */
	{ 0, 0, 5 }, /* B1P4 */
	{ 1, 0, 6 }, /* B1P5: wwan USB */
	{ 0, 0, 6 }, /* B1P6 */
};

void bootblock_mainboard_early_init(void)
{
	kbc1126_enter_conf();
	kbc1126_mailbox_init();
	kbc1126_kbc_init();
	kbc1126_ec_init();
	kbc1126_pm1_init();
	kbc1126_exit_conf();
}

void mb_get_spd_map(struct spd_info *spdi)
{
	spdi->addresses[0] = 0x50;
	/* C1S0 is a soldered RAM with no real SPD. Use stored SPD.  */
	spdi->addresses[2] = SPD_MEMORY_DOWN;
	spdi->spd_index = 0;
}
