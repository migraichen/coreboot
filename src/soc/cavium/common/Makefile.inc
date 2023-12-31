## SPDX-License-Identifier: GPL-2.0-only

ifeq ($(CONFIG_SOC_CAVIUM_COMMON),y)

subdirs-y += pci

# -Wstack-usage doesn't recognize hexadecimal numbers.
ifeq ($(CONFIG_COMPILER_GCC),y)
CFLAGS_arm64   += -Wstack-usage=$(shell printf "%d" $(CONFIG_STACK_SIZE))
endif

bootblock-$(CONFIG_BOOTBLOCK_CUSTOM) += bootblock.c

################################################################################
# romstage

romstage-y += bdk-coreboot.c
romstage-y += ecam.c

################################################################################
# ramstage

ramstage-y += bdk-coreboot.c
ramstage-y += ecam.c

CPPFLAGS_common += -Isrc/soc/cavium/common/include

ROM_HEADER_BIN := $(objgenerated)/rom_header.bin
ROM_HEADER_SOURCES += rom_clib_s_nbl1fw
ROM_HEADER_SOURCES += rom_csib_s_nbl1fw

ROM_HEADER_DEPS := $(foreach f, $(ROM_HEADER_SOURCES), src/soc/cavium/common/$(f).bin.hex)

# Include ROM header
$(ROM_HEADER_BIN): $(ROM_HEADER_DEPS)
	for f in $+; \
		do for c in $$(cat $$f | grep -v ^#); \
			do printf $$(printf '\%o' 0x$$c); \
		done; \
	done > $@

$(objcbfs)/bootblock.bin: $(objcbfs)/bootblock.raw.bin $(ROM_HEADER_BIN)
	@printf "    GEN        $(subst $(obj)/,,$(@))\n"
	dd if=/dev/zero ibs=1 count=$$(($(shell stat --printf="%s" $(objcbfs)/bootblock.raw.bin) + 0x10000)) of=$@ status=none
	# Insert CLIB at 0x0 and CSIB at 0x100
	dd if=$(ROM_HEADER_BIN) of=$@ bs=1 seek=0 conv=notrunc status=none
	# Insert bootblock at 0x10000
	dd if=$(objcbfs)/bootblock.raw.bin of=$@ bs=1 seek=$$((0x10000)) conv=notrunc status=none

endif
