OUTPUT_FORMAT(elf32-i386)
OUTPUT_ARCH(i386)

ENTRY(_start)

SECTIONS
{
	.ramlayout : {
		boot_stack = INDIRECT_AREA;
		indirect_area = INDIRECT_AREA;
	}

	. = CONFIG_LP_BASE_ADDRESS;
	. = ALIGN(32);

	.bootsector : {
		*(.boot_start)
		. = 0x024;
		*(.boot_code)
		*(.boot_data)
	}

	.text : {
		*(.text._entry)
		*(.text)
		*(.text.*)
	}

	.rodata : {
		*(.rodata)
		*(.rodata.*)
	}

	.data : {
		*(.data)
		*(.data.*)
	}

	_edata = .;

	.bss : {
		*(.sbss)
		*(.sbss.*)
		*(.bss)
		*(.bss.*)
		*(COMMON)

		/* Stack and heap */

		. = ALIGN(16);
		_heap = .;
		. += CONFIG_LP_HEAP_SIZE;
		. = ALIGN(16);
		_eheap = .;

		_estack = .;
		. += CONFIG_LP_STACK_SIZE;
		. = ALIGN(16);
		_stack = .;
	}

	_end = .;

	/DISCARD/ : {
		*(.comment)
		*(.note*)
	}
}

