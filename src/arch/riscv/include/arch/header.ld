/* SPDX-License-Identifier: GPL-2.0-only */

/* We use ELF as output format. So that we can debug the code in some form. */
OUTPUT_ARCH(riscv)

PHDRS
{
	to_load PT_LOAD;
}

ENTRY(_start)
