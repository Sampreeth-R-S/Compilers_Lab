	.file	"test.c"
	.text
	.section	.rodata
.LC0:
	.string	"Value passed to function = "
	.text
	.globl	testIncDec
	.type	testIncDec, @function
testIncDec:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movss	%xmm0, -4(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm1, %xmm1
	cvtss2sd	-4(%rbp), %xmm1
	movq	%xmm1, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	testIncDec, .-testIncDec
	.section	.rodata
	.align 8
.LC1:
	.string	"\n#### TEST 1 (Arithmetic operators) ####"
.LC6:
	.string	"\nn1 = "
.LC7:
	.string	"\nn2 = "
.LC8:
	.string	"\nn3 = "
.LC9:
	.string	"\nn4 = "
.LC11:
	.string	"\nn1 + n2 = "
.LC12:
	.string	"\nn1 - n2 = "
.LC13:
	.string	"\nn1 * n2 = "
.LC14:
	.string	"\nn1 / n2 = "
.LC15:
	.string	"\nn1 % n2 = "
.LC19:
	.string	"\n-n1 + n2 - n3 + n4 + 10 = "
.LC20:
	.string	"\nn1 * n2 / n3 + n4 - 10 = "
.LC21:
	.string	"\nn1 + n2 * n3 / n4 - 0 = "
	.align 8
.LC22:
	.string	"\n(n1 + n2) * (n3 / n4) - 15 = "
.LC23:
	.string	"\n-n3 = "
.LC24:
	.string	"\n-n4 = "
.LC25:
	.string	"\nTest pre increment: "
.LC27:
	.string	", Value after call = "
.LC28:
	.string	"\nTest post increment: "
.LC29:
	.string	"\nTest pre decrement: "
.LC30:
	.string	"\nTest post decrement: "
.LC31:
	.string	"\n\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	movss	.LC2(%rip), %xmm0
	movss	%xmm0, -52(%rbp)
	movss	.LC3(%rip), %xmm0
	movss	%xmm0, -48(%rbp)
	movss	.LC4(%rip), %xmm0
	movss	%xmm0, -44(%rbp)
	movss	.LC5(%rip), %xmm0
	movss	%xmm0, -40(%rbp)
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm3, %xmm3
	cvtss2sd	-52(%rbp), %xmm3
	movq	%xmm3, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm4, %xmm4
	cvtss2sd	-48(%rbp), %xmm4
	movq	%xmm4, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm5, %xmm5
	cvtss2sd	-44(%rbp), %xmm5
	movq	%xmm5, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm6, %xmm6
	cvtss2sd	-40(%rbp), %xmm6
	movq	%xmm6, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	movss	-52(%rbp), %xmm0
	addss	-48(%rbp), %xmm0
	movss	%xmm0, -36(%rbp)
	movss	-52(%rbp), %xmm0
	subss	-48(%rbp), %xmm0
	movss	%xmm0, -32(%rbp)
	movss	-52(%rbp), %xmm0
	mulss	-48(%rbp), %xmm0
	movss	%xmm0, -28(%rbp)
	movss	-52(%rbp), %xmm0
	divss	-48(%rbp), %xmm0
	movss	%xmm0, -24(%rbp)
	pxor	%xmm0, %xmm0
	movss	%xmm0, -20(%rbp)
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm7, %xmm7
	cvtss2sd	-36(%rbp), %xmm7
	movq	%xmm7, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm2, %xmm2
	cvtss2sd	-32(%rbp), %xmm2
	movq	%xmm2, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm3, %xmm3
	cvtss2sd	-28(%rbp), %xmm3
	movq	%xmm3, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm4, %xmm4
	cvtss2sd	-24(%rbp), %xmm4
	movq	%xmm4, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm5, %xmm5
	cvtss2sd	-20(%rbp), %xmm5
	movq	%xmm5, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	movss	-48(%rbp), %xmm0
	subss	-52(%rbp), %xmm0
	subss	-44(%rbp), %xmm0
	movaps	%xmm0, %xmm1
	addss	-40(%rbp), %xmm1
	movss	.LC16(%rip), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -16(%rbp)
	movss	-52(%rbp), %xmm0
	mulss	-48(%rbp), %xmm0
	divss	-44(%rbp), %xmm0
	addss	-40(%rbp), %xmm0
	movss	.LC16(%rip), %xmm1
	subss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	movss	-48(%rbp), %xmm0
	mulss	-44(%rbp), %xmm0
	divss	-40(%rbp), %xmm0
	movss	-52(%rbp), %xmm1
	addss	%xmm1, %xmm0
	movss	%xmm0, -8(%rbp)
	movss	-52(%rbp), %xmm0
	movaps	%xmm0, %xmm1
	addss	-48(%rbp), %xmm1
	movss	-44(%rbp), %xmm0
	movss	.LC17(%rip), %xmm2
	xorps	%xmm2, %xmm0
	divss	-40(%rbp), %xmm0
	mulss	%xmm1, %xmm0
	movss	.LC18(%rip), %xmm1
	subss	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm6, %xmm6
	cvtss2sd	-16(%rbp), %xmm6
	movq	%xmm6, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm7, %xmm7
	cvtss2sd	-12(%rbp), %xmm7
	movq	%xmm7, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm2, %xmm2
	cvtss2sd	-8(%rbp), %xmm2
	movq	%xmm2, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm3, %xmm3
	cvtss2sd	-4(%rbp), %xmm3
	movq	%xmm3, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	movss	-44(%rbp), %xmm0
	movss	.LC17(%rip), %xmm1
	xorps	%xmm1, %xmm0
	pxor	%xmm4, %xmm4
	cvtss2sd	%xmm0, %xmm4
	movq	%xmm4, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC24(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	movss	-40(%rbp), %xmm0
	movss	.LC17(%rip), %xmm1
	xorps	%xmm1, %xmm0
	pxor	%xmm5, %xmm5
	cvtss2sd	%xmm0, %xmm5
	movq	%xmm5, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC25(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	movss	-52(%rbp), %xmm1
	movss	.LC26(%rip), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -52(%rbp)
	movl	-52(%rbp), %eax
	movd	%eax, %xmm0
	call	testIncDec
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm6, %xmm6
	cvtss2sd	-52(%rbp), %xmm6
	movq	%xmm6, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	movl	-52(%rbp), %eax
	movss	.LC26(%rip), %xmm0
	movd	%eax, %xmm7
	addss	%xmm7, %xmm0
	movss	%xmm0, -52(%rbp)
	movd	%eax, %xmm0
	call	testIncDec
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm2, %xmm2
	cvtss2sd	-52(%rbp), %xmm2
	movq	%xmm2, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	movss	-52(%rbp), %xmm0
	movss	.LC26(%rip), %xmm1
	subss	%xmm1, %xmm0
	movss	%xmm0, -52(%rbp)
	movl	-52(%rbp), %eax
	movd	%eax, %xmm0
	call	testIncDec
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm3, %xmm3
	cvtss2sd	-52(%rbp), %xmm3
	movq	%xmm3, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	movl	-52(%rbp), %eax
	movss	.LC26(%rip), %xmm1
	movd	%eax, %xmm0
	subss	%xmm1, %xmm0
	movss	%xmm0, -52(%rbp)
	movd	%eax, %xmm0
	call	testIncDec
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	pxor	%xmm4, %xmm4
	cvtss2sd	-52(%rbp), %xmm4
	movq	%xmm4, %rax
	movq	%rax, %xmm0
	movl	$1, %eax
	call	printInt@PLT
	leaq	.LC31(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printStr@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC2:
	.long	1106247680
	.align 4
.LC3:
	.long	1098907648
	.align 4
.LC4:
	.long	1088421888
	.align 4
.LC5:
	.long	-1045430272
	.align 4
.LC16:
	.long	1092616192
	.align 16
.LC17:
	.long	-2147483648
	.long	0
	.long	0
	.long	0
	.align 4
.LC18:
	.long	1097859072
	.align 4
.LC26:
	.long	1065353216
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
