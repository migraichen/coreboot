ASM       = /opt/OSELAS.Toolchain/i586-unknown-linux-gnu/bin/i586-unknown-linux-gnu-gcc
LD        = /opt/OSELAS.Toolchain/i586-unknown-linux-gnu/bin/i586-unknown-linux-gnu-gcc
OBJCOPY   = objcopy

CFLAGS    = -m32 -g
LDFLAGS   = -nostdlib -nostdinc -march=i686				\
		-Wl,--defsym=CONFIG_LP_BASE_ADDRESS=0x00100000	\
		-Wl,--defsym=CONFIG_LP_HEAP_SIZE=131072		\
		-Wl,--defsym=CONFIG_LP_STACK_SIZE=16384		\
		-Wl,--defsym=INDIRECT_AREA=0xffe00

OBJECTS   = boot_main.o boot_coreboot.o
TARGET    = hello
MEMLAYOUT = xMemLayout.map

.PHONY: all clean

all: $(TARGET).elf

clean:
	rm -f -v *.o $(TARGET).elf $(TARGET).rom $(MEMLAYOUT) $(VHDL_FILE)

%.o: %.S Makefile
	$(ASM) -c -o $*.o $(CFLAGS) $<

$(TARGET).elf: $(OBJECTS) $(TARGET).ld
	$(LD) $(LDFLAGS) -Wl,-T,$(TARGET).ld -o $@ $(OBJECTS)

