	.file	"./input/test5.c"

	.section	.rodata
.LC0:
	.string	" "
.LC1:
	.string	"\n"
.LC2:
	.string	"Merge Sort\n"
.LC3:
	.string	"Original array: \n"
.LC4:
	.string	"Sorted array: \n"

	.text
	.globl merge
	.type merge, @function
merge:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$316, %rsp
	movq    %rdi, -8(%rbp)
	movl    %esi, -12(%rbp)
	movl    %edx, -16(%rbp)
	movl    %ecx, -20(%rbp)
	movl	-16(%rbp), %eax
	subl	%eax, -12(%rbp)
	movl	%eax, -40(%rbp)
	movq	$1, -44(%rbp)
	movl	-40(%rbp), %eax
	addl	%eax, -44(%rbp)
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -36(%rbp)
	movl	-20(%rbp), %eax
	subl	%eax, -16(%rbp)
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -52(%rbp)
	movq	$6, -68(%rbp)
	movq	$6, -80(%rbp)
	movq	$0, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, -24(%rbp)
.L6:
	movl	-24(%rbp), %eax
	cmpl	%eax, -36(%rbp)
	jl	.L4
	jmp	.L5
.L7:
	movl	-24(%rbp), %eax
	movl	%eax, -136(%rbp)
	incl	-24(%rbp)
	jmp	.L6
.L4:
	movl	-24(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -140(%rbp)
	movl	-12(%rbp), %eax
	addl	%eax, -24(%rbp)
	movl	%eax, -144(%rbp)
	movl	-144(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -148(%rbp)
	movl    -148(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -152(%rbp)
	movl    -140(%rbp), %eax
	cltq    
	movl    -152(%rbp), %ebx
	movl    %ebx, -64(%rbp, %rax, 1)
	jmp	.L7
.L5:
	movq	$0, -160(%rbp)
	movl	-160(%rbp), %eax
	movl	%eax, -28(%rbp)
.L10:
	movl	-28(%rbp), %eax
	cmpl	%eax, -52(%rbp)
	jl	.L8
	jmp	.L9
.L11:
	movl	-28(%rbp), %eax
	movl	%eax, -168(%rbp)
	incl	-28(%rbp)
	jmp	.L10
.L8:
	movl	-16(%rbp), %eax
	addl	%eax, -28(%rbp)
	movl	%eax, -176(%rbp)
	movq	$1, -180(%rbp)
	movl	-176(%rbp), %eax
	addl	%eax, -180(%rbp)
	movl	%eax, -184(%rbp)
	movl	-184(%rbp), %eax
	movl	%eax, -172(%rbp)
	movl	-28(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -188(%rbp)
	movl	-172(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -192(%rbp)
	movl    -192(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -196(%rbp)
	movl    -188(%rbp), %eax
	cltq    
	movl    -196(%rbp), %ebx
	movl    %ebx, -76(%rbp, %rax, 1)
	jmp	.L11
.L9:
	movq	$0, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, -24(%rbp)
	movq	$0, -100(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -32(%rbp)
.L18:
	movl	-24(%rbp), %eax
	cmpl	%eax, -36(%rbp)
	jl	.L12
	jmp	.L13
.L12:
	movl	-28(%rbp), %eax
	cmpl	%eax, -52(%rbp)
	jl	.L14
	jmp	.L13
.L14:
	movl	-24(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -204(%rbp)
	movl    -204(%rbp), %eax
	cltq    
	movl    -64(%rbp, %rax, 1), %eax
	movl    %eax, -208(%rbp)
	movl	-28(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -212(%rbp)
	movl    -212(%rbp), %eax
	cltq    
	movl    -76(%rbp, %rax, 1), %eax
	movl    %eax, -216(%rbp)
	movl	-208(%rbp), %eax
	cmpl	%eax, -216(%rbp)
	jle	.L15
	jmp	.L16
	jmp	.L17
.L15:
	movl	-32(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -232(%rbp)
	movl	-24(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -236(%rbp)
	movl    -236(%rbp), %eax
	cltq    
	movl    -64(%rbp, %rax, 1), %eax
	movl    %eax, -240(%rbp)
	movl    -232(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    -240(%rbp), %ebx
	movl    %ebx, (%rax)
	movl	-24(%rbp), %eax
	movl	%eax, -248(%rbp)
	incl	-24(%rbp)
	jmp	.L17
.L16:
	movl	-32(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -252(%rbp)
	movl	-28(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -256(%rbp)
	movl    -256(%rbp), %eax
	cltq    
	movl    -76(%rbp, %rax, 1), %eax
	movl    %eax, -260(%rbp)
	movl    -252(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    -260(%rbp), %ebx
	movl    %ebx, (%rax)
	movl	-28(%rbp), %eax
	movl	%eax, -268(%rbp)
	incl	-28(%rbp)
.L17:
	movl	-32(%rbp), %eax
	movl	%eax, -228(%rbp)
	incl	-32(%rbp)
	jmp	.L18
.L13:
	movl	-24(%rbp), %eax
	cmpl	%eax, -36(%rbp)
	jl	.L19
	jmp	.L20
.L19:
	movl	-32(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -272(%rbp)
	movl	-24(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -276(%rbp)
	movl    -276(%rbp), %eax
	cltq    
	movl    -64(%rbp, %rax, 1), %eax
	movl    %eax, -280(%rbp)
	movl    -272(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    -280(%rbp), %ebx
	movl    %ebx, (%rax)
	movl	-24(%rbp), %eax
	movl	%eax, -288(%rbp)
	incl	-24(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -292(%rbp)
	incl	-32(%rbp)
	jmp	.L13
.L20:
	movl	-28(%rbp), %eax
	cmpl	%eax, -52(%rbp)
	jl	.L21
	jmp	.L22
.L21:
	movl	-32(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -296(%rbp)
	movl	-28(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -300(%rbp)
	movl    -300(%rbp), %eax
	cltq    
	movl    -76(%rbp, %rax, 1), %eax
	movl    %eax, -304(%rbp)
	movl    -296(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    -304(%rbp), %ebx
	movl    %ebx, (%rax)
	movl	-28(%rbp), %eax
	movl	%eax, -312(%rbp)
	incl	-28(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -316(%rbp)
	incl	-32(%rbp)
	jmp	.L20
.L22:
	movq	$0, -124(%rbp)
	movl	-124(%rbp), %eax
	jmp	.LFE0
.LFE0:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	merge, .-merge
	.text
	.globl mergeSort
	.type mergeSort, @function
mergeSort:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq    %rdi, -8(%rbp)
	movl    %esi, -12(%rbp)
	movl    %edx, -16(%rbp)
	movl	-12(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jl	.L23
	jmp	.LFE1
	jmp	.LFE1
.L23:
	movl	-12(%rbp), %eax
	addl	%eax, -16(%rbp)
	movl	%eax, -28(%rbp)
	movq	$2, -32(%rbp)
	movl	-28(%rbp), %eax
	cdq
	idivl	-32(%rbp)
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl    -24(%rbp), %edx
	movl    -12(%rbp), %esi
	leaq    -8(%rbp), %rdi
	call	mergeSort
	movq	$1, -40(%rbp)
	movl	-24(%rbp), %eax
	addl	%eax, -40(%rbp)
	movl	%eax, -44(%rbp)
	movl    -16(%rbp), %edx
	movl    -44(%rbp), %esi
	leaq    -8(%rbp), %rdi
	call	mergeSort
	movl    -16(%rbp), %ecx
	movl    -24(%rbp), %edx
	movl    -12(%rbp), %esi
	leaq    -8(%rbp), %rdi
	call	merge
	movl	%eax, -48(%rbp)
	jmp	.LFE1
.LFE1:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	mergeSort, .-mergeSort
	.text
	.globl printArray
	.type printArray, @function
printArray:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$68, %rsp
	movq    %rdi, -8(%rbp)
	movl    %esi, -12(%rbp)
	movq	$0, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -16(%rbp)
.L26:
	movl	-16(%rbp), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L24
	jmp	.L25
.L27:
	movl	-16(%rbp), %eax
	movl	%eax, -44(%rbp)
	incl	-16(%rbp)
	jmp	.L26
.L24:
	movl	-16(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -48(%rbp)
	movl    -48(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -52(%rbp)
	movl    -52(%rbp), %edi
	call	printInt
	movl	%eax, -56(%rbp)
	movl	$.LC0, %eax
	movl	%eax, -64(%rbp)
	movq    -64(%rbp), %rdi
	call	printStr
	movl	%eax, -68(%rbp)
	jmp	.L27
.L25:
	movl	$.LC1, %eax
	movl	%eax, -28(%rbp)
	movq    -28(%rbp), %rdi
	call	printStr
	movl	%eax, -32(%rbp)
.LFE2:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	printArray, .-printArray
	.text
	.globl main
	.type main, @function
main:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$168, %rsp
	movl	$.LC2, %eax
	movl	%eax, -8(%rbp)
	movq    -8(%rbp), %rdi
	call	printStr
	movl	%eax, -12(%rbp)
	movq	$6, -24(%rbp)
	movq	$0, -28(%rbp)
	movl	-28(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -32(%rbp)
	movq	$64, -36(%rbp)
	movl    -32(%rbp), %eax
	cltq    
	movl    -36(%rbp), %ebx
	movl    %ebx, -20(%rbp, %rax, 1)
	movq	$1, -44(%rbp)
	movl	-44(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -48(%rbp)
	movq	$21, -52(%rbp)
	movl    -48(%rbp), %eax
	cltq    
	movl    -52(%rbp), %ebx
	movl    %ebx, -20(%rbp, %rax, 1)
	movq	$2, -60(%rbp)
	movl	-60(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -64(%rbp)
	movq	$11, -68(%rbp)
	movl    -64(%rbp), %eax
	cltq    
	movl    -68(%rbp), %ebx
	movl    %ebx, -20(%rbp, %rax, 1)
	movq	$3, -76(%rbp)
	movl	-76(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -80(%rbp)
	movq	$15, -84(%rbp)
	movl    -80(%rbp), %eax
	cltq    
	movl    -84(%rbp), %ebx
	movl    %ebx, -20(%rbp, %rax, 1)
	movq	$4, -92(%rbp)
	movl	-92(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -96(%rbp)
	movq	$28, -100(%rbp)
	movl    -96(%rbp), %eax
	cltq    
	movl    -100(%rbp), %ebx
	movl    %ebx, -20(%rbp, %rax, 1)
	movq	$5, -108(%rbp)
	movl	-108(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -112(%rbp)
	movq	$9, -116(%rbp)
	movl    -112(%rbp), %eax
	cltq    
	movl    -116(%rbp), %ebx
	movl    %ebx, -20(%rbp, %rax, 1)
	movq	$6, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, -124(%rbp)
	movl	$.LC3, %eax
	movl	%eax, -136(%rbp)
	movq    -136(%rbp), %rdi
	call	printStr
	movl	%eax, -140(%rbp)
	movl    -124(%rbp), %esi
	leaq    -20(%rbp), %rdi
	call	printArray
	movq	$0, -144(%rbp)
	movq	$1, -148(%rbp)
	movl	-124(%rbp), %eax
	subl	%eax, -148(%rbp)
	movl	%eax, -152(%rbp)
	movl    -152(%rbp), %edx
	movl    -144(%rbp), %esi
	leaq    -20(%rbp), %rdi
	call	mergeSort
	movl	$.LC4, %eax
	movl	%eax, -160(%rbp)
	movq    -160(%rbp), %rdi
	call	printStr
	movl	%eax, -164(%rbp)
	movl    -124(%rbp), %esi
	leaq    -20(%rbp), %rdi
	call	printArray
	movq	$0, -168(%rbp)
	movl	-168(%rbp), %eax
	jmp	.LFE3
.LFE3:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
