	.file	"./input/test4.c"

	.section	.rodata
.LC0:
	.string	"Maximum contiguous sum is "
.LC1:
	.string	"\n"

	.text
	.globl maxSubArrSum
	.type maxSubArrSum, @function
maxSubArrSum:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$92, %rsp
	movq    %rdi, -8(%rbp)
	movl    %esi, -12(%rbp)
	movq	$1000, -20(%rbp)
	movl	-20(%rbp), %eax
	negl	%eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -16(%rbp)
	movq	$0, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -28(%rbp)
	movq	$0, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -36(%rbp)
.L4:
	movl	-36(%rbp), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L2
	jmp	.L3
.L8:
	movl	-36(%rbp), %eax
	movl	%eax, -52(%rbp)
	incl	-36(%rbp)
	jmp	.L4
.L2:
	movl	-36(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -56(%rbp)
	movl    -56(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -60(%rbp)
	movl	-28(%rbp), %eax
	addl	%eax, -60(%rbp)
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-16(%rbp), %eax
	cmpl	%eax, -28(%rbp)
	jl	.L5
	jmp	.L6
	jmp	.L6
.L5:
	movl	-28(%rbp), %eax
	movl	%eax, -16(%rbp)
	jmp	.L6
.L6:
	movq	$0, -76(%rbp)
	movl	-28(%rbp), %eax
	cmpl	%eax, -76(%rbp)
	jl	.L7
	jmp	.L8
	jmp	.L9
.L7:
	movq	$0, -88(%rbp)
	movl	-88(%rbp), %eax
	movl	%eax, -28(%rbp)
	jmp	.L9
.L9:
	jmp	.L8
.L3:
	movl	-16(%rbp), %eax
	jmp	.LFE0
.LFE0:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	maxSubArrSum, .-maxSubArrSum
	.text
	.globl main
	.type main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$204, %rsp
	movq	$8, -12(%rbp)
	movq	$0, -16(%rbp)
	movl	-16(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -20(%rbp)
	movq	$20, -24(%rbp)
	movl	-24(%rbp), %eax
	negl	%eax
	movl	%eax, -28(%rbp)
	movl    -20(%rbp), %eax
	cltq    
	movl    -28(%rbp), %ebx
	movl    %ebx, -8(%rbp, %rax, 1)
	movq	$1, -36(%rbp)
	movl	-36(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -40(%rbp)
	movq	$30, -44(%rbp)
	movl	-44(%rbp), %eax
	negl	%eax
	movl	%eax, -48(%rbp)
	movl    -40(%rbp), %eax
	cltq    
	movl    -48(%rbp), %ebx
	movl    %ebx, -8(%rbp, %rax, 1)
	movq	$2, -56(%rbp)
	movl	-56(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -60(%rbp)
	movq	$40, -64(%rbp)
	movl    -60(%rbp), %eax
	cltq    
	movl    -64(%rbp), %ebx
	movl    %ebx, -8(%rbp, %rax, 1)
	movq	$3, -72(%rbp)
	movl	-72(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -76(%rbp)
	movq	$10, -80(%rbp)
	movl	-80(%rbp), %eax
	negl	%eax
	movl	%eax, -84(%rbp)
	movl    -76(%rbp), %eax
	cltq    
	movl    -84(%rbp), %ebx
	movl    %ebx, -8(%rbp, %rax, 1)
	movq	$4, -92(%rbp)
	movl	-92(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -96(%rbp)
	movq	$20, -100(%rbp)
	movl	-100(%rbp), %eax
	negl	%eax
	movl	%eax, -104(%rbp)
	movl    -96(%rbp), %eax
	cltq    
	movl    -104(%rbp), %ebx
	movl    %ebx, -8(%rbp, %rax, 1)
	movq	$5, -112(%rbp)
	movl	-112(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -116(%rbp)
	movq	$10, -120(%rbp)
	movl    -116(%rbp), %eax
	cltq    
	movl    -120(%rbp), %ebx
	movl    %ebx, -8(%rbp, %rax, 1)
	movq	$6, -128(%rbp)
	movl	-128(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -132(%rbp)
	movq	$50, -136(%rbp)
	movl    -132(%rbp), %eax
	cltq    
	movl    -136(%rbp), %ebx
	movl    %ebx, -8(%rbp, %rax, 1)
	movq	$7, -144(%rbp)
	movl	-144(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -148(%rbp)
	movq	$370, -152(%rbp)
	movl	-152(%rbp), %eax
	negl	%eax
	movl	%eax, -156(%rbp)
	movl    -148(%rbp), %eax
	cltq    
	movl    -156(%rbp), %ebx
	movl    %ebx, -8(%rbp, %rax, 1)
	movq	$8, -168(%rbp)
	movl    -168(%rbp), %esi
	leaq    -8(%rbp), %rdi
	call	maxSubArrSum
	movl	%eax, -172(%rbp)
	movl	-172(%rbp), %eax
	movl	%eax, -164(%rbp)
	movl	$.LC0, %eax
	movl	%eax, -180(%rbp)
	movq    -180(%rbp), %rdi
	call	printStr
	movl	%eax, -184(%rbp)
	movl    -164(%rbp), %edi
	call	printInt
	movl	%eax, -188(%rbp)
	movl	$.LC1, %eax
	movl	%eax, -196(%rbp)
	movq    -196(%rbp), %rdi
	call	printStr
	movl	%eax, -200(%rbp)
	movq	$0, -204(%rbp)
	movl	-204(%rbp), %eax
	jmp	.LFE1
.LFE1:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
