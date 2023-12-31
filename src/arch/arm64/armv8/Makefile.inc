## SPDX-License-Identifier: GPL-2.0-only

ifeq ($(CONFIG_ARCH_ARMV8_EXTENSION),0)
march = armv8-a
else
march = armv8.$(CONFIG_ARCH_ARMV8_EXTENSION)-a
endif

armv8_flags = -march=$(march) -I$(src)/arch/arm64/include/armv8/ -D__COREBOOT_ARM_ARCH__=8

################################################################################
## bootblock
################################################################################
ifeq ($(CONFIG_ARCH_BOOTBLOCK_ARMV8_64),y)

ifeq ($(CONFIG_COMPILER_LLVM_CLANG),y)
decompressor-ld-ccopts += -target arm64-elf
bootblock-ld-ccopts += -target arm64-elf
endif

ifneq ($(CONFIG_BOOTBLOCK_CUSTOM),y)
decompressor-y += bootblock.S
ifneq ($(CONFIG_COMPRESS_BOOTBLOCK),y)
bootblock-y += bootblock.S
endif
endif
decompressor-y += cpu.S
bootblock-y += cpu.S
decompressor-y += cache.c
bootblock-y += cache.c
decompressor-y += mmu.c
bootblock-y += mmu.c

bootblock-$(CONFIG_BOOTBLOCK_CONSOLE) += exception.c

decompressor-generic-ccopts += $(armv8_flags)
bootblock-generic-ccopts += $(armv8_flags)

# Required to access unaligned timestamp struct members before MMU is active
# (TODO: Maybe use explicit unaligned accesses in timestamp code instead, or
# evaluate redesigning timestamp data structures to avoid misaligned members.)
decompressor-c-ccopts += -mstrict-align
bootblock-c-ccopts += -mstrict-align

endif

################################################################################
## verstage
################################################################################
ifeq ($(CONFIG_ARCH_VERSTAGE_ARMV8_64),y)

ifeq ($(CONFIG_COMPILER_LLVM_CLANG),y)
verstage-ld-ccopts += -target arm64-elf
endif

verstage-y += cache.c
verstage-y += cpu.S
verstage-y += exception.c

verstage-generic-ccopts += $(armv8_flags)

endif

################################################################################
## romstage
################################################################################
ifeq ($(CONFIG_ARCH_ROMSTAGE_ARMV8_64),y)

ifeq ($(CONFIG_COMPILER_LLVM_CLANG),y)
romstage-ld-ccopts += -target arm64-elf
endif

romstage-y += cache.c
romstage-y += cpu.S
romstage-y += exception.c
romstage-y += mmu.c

romstage-generic-ccopts += $(armv8_flags)

rmodules_arm64-generic-ccopts += $(armv8_flags)

endif

################################################################################
## ramstage
################################################################################
ifeq ($(CONFIG_ARCH_RAMSTAGE_ARMV8_64),y)

ifeq ($(CONFIG_COMPILER_LLVM_CLANG),y)
ramstage-ld-ccopts += -target arm64-elf
endif

ramstage-y += cache.c
ramstage-y += cpu.S
ramstage-y += exception.c
ramstage-y += mmu.c

ramstage-generic-ccopts += $(armv8_flags)

rmodules_arm64-generic-ccopts += $(armv8_flags)

endif
