	.file	"./input/test3.c"

	.section	.rodata
.LC0:
	.string	"Enter x: "
.LC1:
	.string	"Enter y: "
.LC2:
	.string	"i = x + y = "
.LC3:
	.string	"\n"
.LC4:
	.string	"j = x - y = "
.LC5:
	.string	"\n"
.LC6:
	.string	"k = x * y = "
.LC7:
	.string	"\n"
.LC8:
	.string	"l = x / y = "
.LC9:
	.string	"\n"
.LC10:
	.string	"m = x % y = "
.LC11:
	.string	"\n"

	.globl  a
	.data   
	.align  4
	.type   a, @object
	.size   a, 4
a:
	.long   0
	.text
	.globl main
	.type main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$254, %rsp
	movl	$.LC0, %eax
	movl	%eax, -20(%rbp)
	movq    -20(%rbp), %rdi
	call	printStr
	movl	%eax, -24(%rbp)
	leaq	-12(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq    -32(%rbp), %rdi
	call	readInt
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC1, %eax
	movl	%eax, -48(%rbp)
	movq    -48(%rbp), %rdi
	call	printStr
	movl	%eax, -52(%rbp)
	leaq	-12(%rbp), %rax
	movq	%rax, -60(%rbp)
	movq    -60(%rbp), %rdi
	call	readInt
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -8(%rbp)
	movb$99, -70(%rbp)
	movb	-70(%rbp), %al
	movb	%al, -69(%rbp)
	movl	-4(%rbp), %eax
	addl	%eax, -8(%rbp)
	movl	%eax, -74(%rbp)
	movl	-74(%rbp), %eax
	movl	%eax, i
	movl	$.LC2, %eax
	movl	%eax, -86(%rbp)
	movq    -86(%rbp), %rdi
	call	printStr
	movl	%eax, -90(%rbp)
	movl    i, %edi
	call	printInt
	movl	%eax, -94(%rbp)
	movl	$.LC3, %eax
	movl	%eax, -102(%rbp)
	movq    -102(%rbp), %rdi
	call	printStr
	movl	%eax, -106(%rbp)
	movl	-4(%rbp), %eax
	subl	%eax, -8(%rbp)
	movl	%eax, -110(%rbp)
	movl	-110(%rbp), %eax
	movl	%eax, j
	movl	$.LC4, %eax
	movl	%eax, -122(%rbp)
	movq    -122(%rbp), %rdi
	call	printStr
	movl	%eax, -126(%rbp)
	movl    j, %edi
	call	printInt
	movl	%eax, -130(%rbp)
	movl	$.LC5, %eax
	movl	%eax, -138(%rbp)
	movq    -138(%rbp), %rdi
	call	printStr
	movl	%eax, -142(%rbp)
	movl	-4(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -146(%rbp)
	movl	-146(%rbp), %eax
	movl	%eax, k
	movl	$.LC6, %eax
	movl	%eax, -158(%rbp)
	movq    -158(%rbp), %rdi
	call	printStr
	movl	%eax, -162(%rbp)
	movl    k, %edi
	call	printInt
	movl	%eax, -166(%rbp)
	movl	$.LC7, %eax
	movl	%eax, -174(%rbp)
	movq    -174(%rbp), %rdi
	call	printStr
	movl	%eax, -178(%rbp)
	movl	-4(%rbp), %eax
	cdq
	idivl	-8(%rbp)
	movl	%eax, -182(%rbp)
	movl	-182(%rbp), %eax
	movl	%eax, l
	movl	$.LC8, %eax
	movl	%eax, -194(%rbp)
	movq    -194(%rbp), %rdi
	call	printStr
	movl	%eax, -198(%rbp)
	movl    l, %edi
	call	printInt
	movl	%eax, -202(%rbp)
	movl	$.LC9, %eax
	movl	%eax, -210(%rbp)
	movq    -210(%rbp), %rdi
	call	printStr
	movl	%eax, -214(%rbp)
	movl	-4(%rbp), %eax
	cdq
	idivl	-8(%rbp)
	movl	%edx, -218(%rbp)
	movl	-218(%rbp), %eax
	movl	%eax, m
	movl	$.LC10, %eax
	movl	%eax, -230(%rbp)
	movq    -230(%rbp), %rdi
	call	printStr
	movl	%eax, -234(%rbp)
	movl    m, %edi
	call	printInt
	movl	%eax, -238(%rbp)
	movl	$.LC11, %eax
	movl	%eax, -246(%rbp)
	movq    -246(%rbp), %rdi
	call	printStr
	movl	%eax, -250(%rbp)
	movq	$0, -254(%rbp)
	movl	-254(%rbp), %eax
	jmp	.LFE0
.LFE0:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
