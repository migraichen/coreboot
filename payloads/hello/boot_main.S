/* Hello Demo */

	.att_syntax

	.file "boot_main.S"
	.code32

	.extern real_start

	.section .boot_start, "ax"

	.globl _start
	.type _start, @function
_start:

	cli		/* we're not safe here! */
	jmp real_start

