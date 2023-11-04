	.file	"./input/test2.c"

	.section	.rodata
.LC0:
	.string	"Enter n (n < 20): "
.LC1:
	.string	"fib["
.LC2:
	.string	"] = "
.LC3:
	.string	"\n"

	.globl  global_var
	.data   
	.align  4
	.type   global_var, @object
	.size   global_var, 4
global_var:
	.long   0
	.globl  counter
	.data   
	.align  4
	.type   counter, @object
	.size   counter, 4
counter:
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
	subq	$184, %rsp
	movl	counter, %eax
	movl	%eax, -4(%rbp)
	incl	counter
	movl	counter, %eax
	movl	%eax, global_var
	movl	$.LC0, %eax
	movl	%eax, -24(%rbp)
	movq    -24(%rbp), %rdi
	call	printStr
	movl	%eax, -28(%rbp)
	leaq	-16(%rbp), %rax
	movq	%rax, -36(%rbp)
	movq    -36(%rbp), %rdi
	call	readInt
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	$100, -60(%rbp)
	movq	$0, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -48(%rbp)
.L4:
	movl	-48(%rbp), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L2
	jmp	.L3
.L5:
	movl	-48(%rbp), %eax
	movl	%eax, -84(%rbp)
	incl	-48(%rbp)
	jmp	.L4
.L2:
	movl	-48(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -88(%rbp)
	movq	$1, -92(%rbp)
	movl	-48(%rbp), %eax
	addl	%eax, -92(%rbp)
	movl	%eax, -96(%rbp)
	movl    -96(%rbp), %edi
	call	fibn
	movl	%eax, -100(%rbp)
	movl    -88(%rbp), %eax
	cltq    
	movl    -100(%rbp), %ebx
	movl    %ebx, -56(%rbp, %rax, 1)
	movl	counter, %eax
	movl	%eax, -108(%rbp)
	incl	counter
	movl	counter, %eax
	movl	%eax, global_var
	jmp	.L5
.L3:
	movq	$0, -116(%rbp)
	movl	-116(%rbp), %eax
	movl	%eax, -48(%rbp)
.L8:
	movl	-48(%rbp), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L6
	jmp	.L7
.L9:
	movl	-48(%rbp), %eax
	movl	%eax, -124(%rbp)
	incl	-48(%rbp)
	jmp	.L8
.L6:
	movl	$.LC1, %eax
	movl	%eax, -132(%rbp)
	movq    -132(%rbp), %rdi
	call	printStr
	movl	%eax, -136(%rbp)
	movq	$1, -140(%rbp)
	movl	-48(%rbp), %eax
	addl	%eax, -140(%rbp)
	movl	%eax, -144(%rbp)
	movl    -144(%rbp), %edi
	call	printInt
	movl	%eax, -148(%rbp)
	movl	$.LC2, %eax
	movl	%eax, -156(%rbp)
	movq    -156(%rbp), %rdi
	call	printStr
	movl	%eax, -160(%rbp)
	movl	-48(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -164(%rbp)
	movl    -164(%rbp), %eax
	cltq    
	movl    -56(%rbp, %rax, 1), %eax
	movl    %eax, -168(%rbp)
	movl    -168(%rbp), %edi
	call	printInt
	movl	%eax, -172(%rbp)
	movl	$.LC3, %eax
	movl	%eax, -180(%rbp)
	movq    -180(%rbp), %rdi
	call	printStr
	movl	%eax, -184(%rbp)
	jmp	.L9
.L7:
	movq	$0, -72(%rbp)
	movl	-72(%rbp), %eax
	jmp	.LFE0
.LFE0:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
	.text
	.globl fibn__36
	.type fibn__36, @function
fibn__36:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$72, %rsp
	movl    %edi, -4(%rbp)
	movl	counter, %eax
	movl	%eax, -8(%rbp)
	incl	counter
	movl	counter, %eax
	movl	%eax, global_var
	movq	$0, -16(%rbp)
	movl	-4(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	je	.L10
	jmp	.L11
	jmp	.LFE1
.L10:
	movq	$0, -40(%rbp)
	movl	-40(%rbp), %eax
	jmp	.LFE1
	jmp	.LFE1
.L11:
	movq	$1, -24(%rbp)
	movl	-4(%rbp), %eax
	cmpl	%eax, -24(%rbp)
	je	.L12
	jmp	.L13
.L13:
	movq	$2, -28(%rbp)
	movl	-4(%rbp), %eax
	cmpl	%eax, -28(%rbp)
	je	.L12
	jmp	.L14
	jmp	.LFE1
.L12:
	movq	$1, -44(%rbp)
	movl	-44(%rbp), %eax
	jmp	.LFE1
	jmp	.LFE1
.L14:
	movq	$1, -48(%rbp)
	movl	-4(%rbp), %eax
	subl	%eax, -48(%rbp)
	movl	%eax, -52(%rbp)
	movl    -52(%rbp), %edi
	call	fibn
	movl	%eax, -56(%rbp)
	movq	$2, -60(%rbp)
	movl	-4(%rbp), %eax
	subl	%eax, -60(%rbp)
	movl	%eax, -64(%rbp)
	movl    -64(%rbp), %edi
	call	fibn
	movl	%eax, -68(%rbp)
	movl	-56(%rbp), %eax
	addl	%eax, -68(%rbp)
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	jmp	.LFE1
.LFE1:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	fibn__36, .-fibn__36
