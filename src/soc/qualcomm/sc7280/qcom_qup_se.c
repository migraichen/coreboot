/* SPDX-License-Identifier: GPL-2.0-only */

#include <soc/qcom_qup_se.h>

struct qup qup[QUPV3_SE_MAX] = {
	[QUPV3_0_SE0] = { .regs = (void *)QUP_SERIAL0_BASE,
		.pin = { GPIO(0), GPIO(1), GPIO(2), GPIO(3) },
		.func = { GPIO0_FUNC_QUP0_L0, GPIO1_FUNC_QUP0_L1,
			GPIO2_FUNC_QUP0_L2, GPIO3_FUNC_QUP0_L3 }
		},
	[QUPV3_0_SE1] = { .regs = (void *)QUP_SERIAL1_BASE,
		.pin = { GPIO(4), GPIO(5), GPIO(6), GPIO(7) },
		.func = { GPIO4_FUNC_QUP0_L0, GPIO5_FUNC_QUP0_L1,
			GPIO6_FUNC_QUP0_L2, GPIO7_FUNC_QUP0_L3 }
		},
	[QUPV3_0_SE2] = { .regs = (void *)QUP_SERIAL2_BASE,
		.pin = { GPIO(8), GPIO(9), GPIO(10), GPIO(11) },
		.func = { GPIO8_FUNC_QUP0_L0, GPIO9_FUNC_QUP0_L1,
			GPIO10_FUNC_QUP0_L2, GPIO11_FUNC_QUP0_L3 }
		},
	[QUPV3_0_SE3] = { .regs = (void *)QUP_SERIAL3_BASE,
		.pin = { GPIO(12), GPIO(13), GPIO(14), GPIO(15) },
		.func = { GPIO12_FUNC_QUP0_L0, GPIO13_FUNC_QUP0_L1,
			GPIO14_FUNC_QUP0_L2, GPIO15_FUNC_QUP0_L3 }
		},
	[QUPV3_0_SE4] = { .regs = (void *)QUP_SERIAL4_BASE,
		.pin = { GPIO(16), GPIO(17), GPIO(18), GPIO(19) },
		.func = { GPIO16_FUNC_QUP0_L0, GPIO17_FUNC_QUP0_L1,
			GPIO18_FUNC_QUP0_L2, GPIO19_FUNC_QUP0_L3 }
		},
	[QUPV3_0_SE5] = { .regs = (void *)QUP_SERIAL5_BASE,
		.pin = { GPIO(20), GPIO(21), GPIO(22), GPIO(23) },
		.func = { GPIO20_FUNC_QUP0_L0, GPIO21_FUNC_QUP0_L1,
			GPIO22_FUNC_QUP0_L2, GPIO23_FUNC_QUP0_L3 }
		},
	[QUPV3_0_SE6] = { .regs = (void *)QUP_SERIAL6_BASE,
		.pin = { GPIO(24), GPIO(25), GPIO(26), GPIO(27) },
		.func = { GPIO24_FUNC_QUP0_L0, GPIO25_FUNC_QUP0_L1,
			GPIO26_FUNC_QUP0_L2, GPIO27_FUNC_QUP0_L3 }
		},
	[QUPV3_0_SE7] = { .regs = (void *)QUP_SERIAL7_BASE,
		.pin = { GPIO(28), GPIO(29), GPIO(30), GPIO(31) },
		.func = { GPIO28_FUNC_QUP0_L0, GPIO29_FUNC_QUP0_L1,
			GPIO30_FUNC_QUP0_L2, GPIO31_FUNC_QUP0_L3 }
		},
	[QUPV3_1_SE0] = { .regs = (void *)QUP_SERIAL8_BASE,
		.pin = { GPIO(32), GPIO(33), GPIO(34), GPIO(35) },
		.func = { GPIO32_FUNC_QUP1_L0, GPIO33_FUNC_QUP1_L1,
			GPIO34_FUNC_QUP1_L2, GPIO35_FUNC_QUP1_L3 }
		},
	[QUPV3_1_SE1] = { .regs = (void *)QUP_SERIAL9_BASE,
		.pin = { GPIO(36), GPIO(37), GPIO(38), GPIO(39) },
		.func = { GPIO36_FUNC_QUP1_L0, GPIO37_FUNC_QUP1_L1,
			GPIO38_FUNC_QUP1_L2, GPIO39_FUNC_QUP1_L3 }
		},
	[QUPV3_1_SE2] = { .regs = (void *)QUP_SERIAL10_BASE,
		.pin = { GPIO(40), GPIO(41), GPIO(42), GPIO(43) },
		.func = { GPIO40_FUNC_QUP1_L0, GPIO41_FUNC_QUP1_L1,
			GPIO42_FUNC_QUP1_L2, GPIO43_FUNC_QUP1_L3 }
		},
	[QUPV3_1_SE3] = { .regs = (void *)QUP_SERIAL11_BASE,
		.pin = { GPIO(44), GPIO(45), GPIO(46), GPIO(47) },
		.func = { GPIO44_FUNC_QUP1_L0, GPIO45_FUNC_QUP1_L1,
			GPIO46_FUNC_QUP1_L2, GPIO47_FUNC_QUP1_L3 }
		},
	[QUPV3_1_SE4] = { .regs = (void *)QUP_SERIAL12_BASE,
		.pin = { GPIO(48), GPIO(49), GPIO(50), GPIO(51) },
		.func = { GPIO48_FUNC_QUP1_L0, GPIO49_FUNC_QUP1_L1,
			GPIO50_FUNC_QUP1_L2, GPIO51_FUNC_QUP1_L3 }
		},
	[QUPV3_1_SE5] = { .regs = (void *)QUP_SERIAL13_BASE,
		.pin = { GPIO(52), GPIO(53), GPIO(54), GPIO(55) },
		.func = { GPIO52_FUNC_QUP1_L0, GPIO53_FUNC_QUP1_L1,
			GPIO54_FUNC_QUP1_L2, GPIO55_FUNC_QUP1_L3 }
		},
	[QUPV3_1_SE6] = { .regs = (void *)QUP_SERIAL14_BASE,
		.pin = { GPIO(56), GPIO(57), GPIO(58), GPIO(59) },
		.func = { GPIO56_FUNC_QUP1_L0, GPIO57_FUNC_QUP1_L1,
			GPIO58_FUNC_QUP1_L2, GPIO59_FUNC_QUP1_L3 }
		},
	[QUPV3_1_SE7] = { .regs = (void *)QUP_SERIAL15_BASE,
		.pin = { GPIO(60), GPIO(61), GPIO(62), GPIO(63) },
		.func = { GPIO60_FUNC_QUP1_L0, GPIO61_FUNC_QUP1_L1,
			GPIO62_FUNC_QUP1_L2, GPIO63_FUNC_QUP1_L3 }
		},
};
