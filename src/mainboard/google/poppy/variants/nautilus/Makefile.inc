## SPDX-License-Identifier: GPL-2.0-only

SPD_SOURCES  = samsung_dimm_K4E8E324EB-EGCF     # 0b0000
SPD_SOURCES += samsung_dimm_K4E6E304EB-EGCF     # 0b0001
SPD_SOURCES += samsung_dimm_K4EBE304EB-EGCG     # 0b0010

bootblock-y += gpio.c

romstage-y += memory.c
romstage-y += gpio.c
romstage-y += sku.c

ramstage-y += gpio.c
ramstage-y += nhlt.c
ramstage-y += mainboard.c
ramstage-y += sku.c

smm-y += smihandler.c
smm-y += sku.c
