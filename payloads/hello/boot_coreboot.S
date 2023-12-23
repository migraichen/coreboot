/* Hello Demo */

	.att_syntax

	.file "boot_coreboot.S"
	.code32

	.section .boot_code, "ax"

	.globl real_start
	.type real_start, @function
real_start:

	sti		/* we're safe again */

	/* set up the REAL stack */
	mov	$boot_stack, %esp

	movl	$notification_string, %esi
	call	output_message

	cli

loop:
	nop
	jmp	loop

/*
 * Use Serialport to write character out
 *	%al = character
 */

1:
	mov	$0x3f8,%dx
	out	%al,(%dx)

output_message:
	lodsb
	cmpb	$0, %al
	jne	1b	/* if not end of string, next char */
	ret

/* ---------------------------------------------------------------------- */

	.section .boot_data

notification_string:	.asciz "Hello World! \n\n\n"
