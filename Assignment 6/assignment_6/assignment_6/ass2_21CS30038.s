	.file	"ass2_21CS30038.c"
	.text
	.globl	INT_MAX
	.data
	.align 8
	.type	INT_MAX, @object
	.size	INT_MAX, 8
INT_MAX:
	.quad	2147483647
	.globl	INT_MIN
	.align 8
	.type	INT_MIN, @object
	.size	INT_MIN, 8
INT_MIN:
	.quad	-2147483648
	.globl	max_float
	.align 8
	.type	max_float, @object
	.size	max_float, 8
max_float:
	.long	-537890762
	.long	1206910975
	.globl	min_float
	.align 8
	.type	min_float, @object
	.size	min_float, 8
min_float:
	.long	-537890762
	.long	-940572673
	.text
	.globl	printStr
	.type	printStr, @function
printStr:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L3
	addl	$1, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	-4(%rbp), %edx
	movq	%rax, %rsi
#APP
# 12 "ass2_21CS30038.c" 1
	movl $1, %eax 
	movq $1, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	-4(%rbp), %eax
	subl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	printStr, .-printStr
	.globl	printInt
	.type	printInt, @function
printInt:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$160, %rsp
	movl	%edi, -148(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -128(%rbp)
.L9:
	cmpl	$0, -148(%rbp)
	jns	.L6
	movl	-128(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -128(%rbp)
	cltq
	movb	$45, -112(%rbp,%rax)
	negl	-148(%rbp)
	jmp	.L9
.L6:
	movl	-148(%rbp), %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	sarl	$2, %eax
	movl	%edx, %esi
	sarl	$31, %esi
	subl	%esi, %eax
	movl	%eax, %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	%ecx, %eax
	leal	48(%rax), %ecx
	movl	-128(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -128(%rbp)
	movl	%ecx, %edx
	cltq
	movb	%dl, -112(%rbp,%rax)
	movl	-148(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	movl	%eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	movl	%eax, -148(%rbp)
	cmpl	$0, -148(%rbp)
	je	.L16
	jmp	.L9
.L16:
	nop
	movl	$0, -124(%rbp)
	movl	-128(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -120(%rbp)
	movzbl	-112(%rbp), %eax
	cmpb	$45, %al
	jne	.L11
	movl	$1, -124(%rbp)
	jmp	.L11
.L12:
	movl	-124(%rbp), %eax
	cltq
	movzbl	-112(%rbp,%rax), %eax
	movb	%al, -129(%rbp)
	movl	-120(%rbp), %eax
	cltq
	movzbl	-112(%rbp,%rax), %edx
	movl	-124(%rbp), %eax
	cltq
	movb	%dl, -112(%rbp,%rax)
	movl	-120(%rbp), %eax
	cltq
	movzbl	-129(%rbp), %edx
	movb	%dl, -112(%rbp,%rax)
	addl	$1, -124(%rbp)
	subl	$1, -120(%rbp)
.L11:
	movl	-124(%rbp), %eax
	cmpl	-120(%rbp), %eax
	jl	.L12
	movl	-128(%rbp), %eax
	cltq
	movb	$0, -112(%rbp,%rax)
	movl	-128(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -116(%rbp)
	leaq	-112(%rbp), %rax
	movl	-116(%rbp), %edx
	movq	%rax, %rsi
#APP
# 52 "ass2_21CS30038.c" 1
	movl $1, %eax 
	movq $1, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	-116(%rbp), %eax
	subl	$1, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L14
	call	__stack_chk_fail@PLT
.L14:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	printInt, .-printInt
	.globl	printFlt
	.type	printFlt, @function
printFlt:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$176, %rsp
	movss	%xmm0, -164(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -156(%rbp)
	movss	-164(%rbp), %xmm0
	cvttss2siq	%xmm0, %rax
	movq	%rax, -128(%rbp)
.L22:
	pxor	%xmm0, %xmm0
	comiss	-164(%rbp), %xmm0
	jbe	.L38
	movl	-156(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -156(%rbp)
	cltq
	movb	$45, -112(%rbp,%rax)
	movss	-164(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	xorps	%xmm1, %xmm0
	movss	%xmm0, -164(%rbp)
	negq	-128(%rbp)
	jmp	.L22
.L38:
	movq	-128(%rbp), %rcx
	movabsq	$7378697629483820647, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	movq	%rdx, %rax
	sarq	$2, %rax
	movq	%rcx, %rsi
	sarq	$63, %rsi
	subq	%rsi, %rax
	movq	%rax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	subq	%rax, %rcx
	movq	%rcx, %rdx
	movl	%edx, %eax
	leal	48(%rax), %ecx
	movl	-156(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -156(%rbp)
	movl	%ecx, %edx
	cltq
	movb	%dl, -112(%rbp,%rax)
	movq	-128(%rbp), %rcx
	movabsq	$7378697629483820647, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	movq	%rdx, %rax
	sarq	$2, %rax
	sarq	$63, %rcx
	movq	%rcx, %rdx
	subq	%rdx, %rax
	movq	%rax, -128(%rbp)
	cmpq	$0, -128(%rbp)
	je	.L40
	jmp	.L22
.L40:
	nop
	movl	$0, -152(%rbp)
	movl	-156(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -148(%rbp)
	movzbl	-112(%rbp), %eax
	cmpb	$45, %al
	jne	.L24
	movl	$1, -152(%rbp)
	jmp	.L24
.L25:
	movl	-152(%rbp), %eax
	cltq
	movzbl	-112(%rbp,%rax), %eax
	movb	%al, -157(%rbp)
	movl	-148(%rbp), %eax
	cltq
	movzbl	-112(%rbp,%rax), %edx
	movl	-152(%rbp), %eax
	cltq
	movb	%dl, -112(%rbp,%rax)
	movl	-148(%rbp), %eax
	cltq
	movzbl	-157(%rbp), %edx
	movb	%dl, -112(%rbp,%rax)
	addl	$1, -152(%rbp)
	subl	$1, -148(%rbp)
.L24:
	movl	-152(%rbp), %eax
	cmpl	-148(%rbp), %eax
	jl	.L25
	pxor	%xmm0, %xmm0
	comiss	-164(%rbp), %xmm0
	jbe	.L26
	movss	-164(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	xorps	%xmm1, %xmm0
	movss	%xmm0, -164(%rbp)
.L26:
	movss	-164(%rbp), %xmm0
	cvttss2sil	%xmm0, %eax
	pxor	%xmm1, %xmm1
	cvtsi2ssl	%eax, %xmm1
	movss	-164(%rbp), %xmm0
	subss	%xmm1, %xmm0
	movss	%xmm0, -140(%rbp)
	movss	-140(%rbp), %xmm1
	movss	.LC2(%rip), %xmm0
	mulss	%xmm1, %xmm0
	cvttss2siq	%xmm0, %rax
	movq	%rax, -120(%rbp)
	movq	-120(%rbp), %rax
	movq	%rax, -128(%rbp)
	cmpq	$0, -128(%rbp)
	jle	.L28
	movl	-156(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -156(%rbp)
	cltq
	movb	$46, -112(%rbp,%rax)
.L28:
	cmpq	$0, -128(%rbp)
	setg	%al
	movzbl	%al, %eax
	movl	%eax, -136(%rbp)
	movl	-156(%rbp), %eax
	movl	%eax, -152(%rbp)
	movl	$8, -144(%rbp)
	jmp	.L29
.L31:
	movq	-128(%rbp), %rcx
	movabsq	$7378697629483820647, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	movq	%rdx, %rax
	sarq	$2, %rax
	movq	%rcx, %rsi
	sarq	$63, %rsi
	subq	%rsi, %rax
	movq	%rax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	subq	%rax, %rcx
	movq	%rcx, %rdx
	movl	%edx, %eax
	leal	48(%rax), %ecx
	movl	-156(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -156(%rbp)
	movl	%ecx, %edx
	cltq
	movb	%dl, -112(%rbp,%rax)
	movq	-128(%rbp), %rcx
	movabsq	$7378697629483820647, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	movq	%rdx, %rax
	sarq	$2, %rax
	sarq	$63, %rcx
	movq	%rcx, %rdx
	subq	%rdx, %rax
	movq	%rax, -128(%rbp)
	subl	$1, -144(%rbp)
.L29:
	cmpl	$0, -144(%rbp)
	je	.L30
	cmpl	$0, -136(%rbp)
	jne	.L31
.L30:
	movl	-156(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -148(%rbp)
	jmp	.L32
.L33:
	movl	-152(%rbp), %eax
	cltq
	movzbl	-112(%rbp,%rax), %eax
	movb	%al, -158(%rbp)
	movl	-148(%rbp), %eax
	cltq
	movzbl	-112(%rbp,%rax), %edx
	movl	-152(%rbp), %eax
	cltq
	movb	%dl, -112(%rbp,%rax)
	movl	-148(%rbp), %eax
	cltq
	movzbl	-158(%rbp), %edx
	movb	%dl, -112(%rbp,%rax)
	addl	$1, -152(%rbp)
	subl	$1, -148(%rbp)
.L32:
	movl	-152(%rbp), %eax
	cmpl	-148(%rbp), %eax
	jl	.L33
	movl	-156(%rbp), %eax
	cltq
	movb	$0, -112(%rbp,%rax)
	movl	-156(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -132(%rbp)
	leaq	-112(%rbp), %rax
	movl	-132(%rbp), %edx
	movq	%rax, %rsi
#APP
# 119 "ass2_21CS30038.c" 1
	movl $1, %eax 
	movq $1, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	-132(%rbp), %eax
	subl	$1, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L35
	call	__stack_chk_fail@PLT
.L35:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	printFlt, .-printFlt
	.section	.rodata
.LC3:
	.string	"Overflow detected\n"
	.text
	.globl	readInt
	.type	readInt, @function
readInt:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1, -28(%rbp)
	leaq	-9(%rbp), %rax
	movl	-28(%rbp), %edx
	movq	%rax, %rsi
#APP
# 171 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -36(%rbp)
	movzbl	-9(%rbp), %eax
	cmpb	$45, %al
	je	.L42
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L43
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jle	.L42
.L43:
	movzbl	-9(%rbp), %eax
	cmpb	$43, %al
	jne	.L44
.L42:
	cmpl	$0, -36(%rbp)
	jg	.L45
.L44:
	movl	$0, %eax
	jmp	.L64
.L45:
	movl	$0, -32(%rbp)
	movzbl	-9(%rbp), %eax
	cmpb	$45, %al
	jne	.L47
	movl	$1, -32(%rbp)
	leaq	-9(%rbp), %rax
	movl	-28(%rbp), %edx
	movq	%rax, %rsi
#APP
# 183 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -36(%rbp)
	jmp	.L48
.L47:
	movzbl	-9(%rbp), %eax
	cmpb	$43, %al
	jne	.L48
	movl	$0, -32(%rbp)
	leaq	-9(%rbp), %rax
	movl	-28(%rbp), %edx
	movq	%rax, %rsi
#APP
# 194 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -36(%rbp)
.L48:
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L49
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jg	.L49
	cmpl	$0, -36(%rbp)
	jg	.L50
.L49:
	movl	$0, %eax
	jmp	.L64
.L50:
	movq	$0, -24(%rbp)
	jmp	.L51
.L61:
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L52
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jle	.L53
.L52:
	movl	$0, %eax
	jmp	.L64
.L53:
	movq	-24(%rbp), %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	movzbl	-9(%rbp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	cltq
	addq	%rdx, %rax
	movq	%rax, -24(%rbp)
	movq	INT_MAX(%rip), %rax
	addq	$10, %rax
	cmpq	%rax, -24(%rbp)
	jle	.L54
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	printStr
	movl	$0, %eax
	jmp	.L64
.L54:
	leaq	-9(%rbp), %rax
	movl	-28(%rbp), %edx
	movq	%rax, %rsi
#APP
# 213 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -36(%rbp)
	cmpl	$0, -36(%rbp)
	jle	.L51
	movzbl	-9(%rbp), %eax
	cmpb	$46, %al
	jne	.L51
	leaq	-9(%rbp), %rax
	movl	-28(%rbp), %edx
	movq	%rax, %rsi
#APP
# 222 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -36(%rbp)
	jmp	.L55
.L59:
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L56
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jle	.L57
.L56:
	movl	$0, %eax
	jmp	.L64
.L57:
	leaq	-9(%rbp), %rax
	movl	-28(%rbp), %edx
	movq	%rax, %rsi
#APP
# 232 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -36(%rbp)
.L55:
	movzbl	-9(%rbp), %eax
	cmpb	$10, %al
	je	.L66
	movzbl	-9(%rbp), %eax
	cmpb	$9, %al
	je	.L66
	movzbl	-9(%rbp), %eax
	cmpb	$32, %al
	je	.L66
	movzbl	-9(%rbp), %eax
	testb	%al, %al
	je	.L66
	cmpl	$0, -36(%rbp)
	jg	.L59
	jmp	.L66
.L51:
	movzbl	-9(%rbp), %eax
	cmpb	$10, %al
	je	.L60
	movzbl	-9(%rbp), %eax
	cmpb	$9, %al
	je	.L60
	movzbl	-9(%rbp), %eax
	cmpb	$32, %al
	je	.L60
	movzbl	-9(%rbp), %eax
	testb	%al, %al
	je	.L60
	cmpl	$0, -36(%rbp)
	jg	.L61
	jmp	.L60
.L66:
	nop
.L60:
	cmpl	$0, -32(%rbp)
	je	.L62
	negq	-24(%rbp)
	movq	INT_MIN(%rip), %rax
	cmpq	%rax, -24(%rbp)
	jge	.L63
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	printStr
	movl	$0, %eax
	jmp	.L64
.L62:
	movq	INT_MAX(%rip), %rax
	cmpq	%rax, -24(%rbp)
	jle	.L63
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	printStr
	movl	$0, %eax
	jmp	.L64
.L63:
	movq	-24(%rbp), %rax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movl	%edx, (%rax)
	movl	$1, %eax
.L64:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L65
	call	__stack_chk_fail@PLT
.L65:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	readInt, .-readInt
	.globl	readFlt
	.type	readFlt, @function
readFlt:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movq	%rdi, -120(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1, -68(%rbp)
	leaq	-9(%rbp), %rax
	movl	-68(%rbp), %edx
	movq	%rax, %rsi
#APP
# 261 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -112(%rbp)
	movzbl	-9(%rbp), %eax
	cmpb	$45, %al
	je	.L68
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L69
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jle	.L68
.L69:
	movzbl	-9(%rbp), %eax
	cmpb	$43, %al
	jne	.L70
.L68:
	cmpl	$0, -112(%rbp)
	jg	.L71
.L70:
	movl	$0, %eax
	jmp	.L122
.L71:
	movl	$0, -108(%rbp)
	movzbl	-9(%rbp), %eax
	cmpb	$45, %al
	jne	.L73
	movl	$1, -108(%rbp)
	leaq	-9(%rbp), %rax
	movl	-68(%rbp), %edx
	movq	%rax, %rsi
#APP
# 273 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -112(%rbp)
	jmp	.L74
.L73:
	movzbl	-9(%rbp), %eax
	cmpb	$43, %al
	jne	.L74
	movl	$0, -108(%rbp)
	leaq	-9(%rbp), %rax
	movl	-68(%rbp), %edx
	movq	%rax, %rsi
#APP
# 284 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -112(%rbp)
.L74:
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L75
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jg	.L75
	cmpl	$0, -112(%rbp)
	jg	.L76
.L75:
	movl	$0, %eax
	jmp	.L122
.L76:
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -64(%rbp)
	movl	$0, -104(%rbp)
	movl	$0, -100(%rbp)
.L85:
	movsd	-64(%rbp), %xmm1
	movsd	.LC5(%rip), %xmm0
	mulsd	%xmm0, %xmm1
	movzbl	-9(%rbp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	pxor	%xmm0, %xmm0
	cvtsi2sdl	%eax, %xmm0
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -64(%rbp)
	leaq	-9(%rbp), %rax
	movl	-68(%rbp), %edx
	movq	%rax, %rsi
#APP
# 298 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -112(%rbp)
	movzbl	-9(%rbp), %eax
	cmpb	$10, %al
	je	.L77
	movzbl	-9(%rbp), %eax
	cmpb	$9, %al
	je	.L77
	movzbl	-9(%rbp), %eax
	cmpb	$32, %al
	je	.L77
	cmpl	$0, -112(%rbp)
	jle	.L77
	movzbl	-9(%rbp), %eax
	cmpb	$46, %al
	jne	.L78
	movl	$1, -104(%rbp)
	jmp	.L77
.L78:
	movzbl	-9(%rbp), %eax
	cmpb	$69, %al
	je	.L79
	movzbl	-9(%rbp), %eax
	cmpb	$101, %al
	jne	.L80
.L79:
	movl	$1, -100(%rbp)
	jmp	.L77
.L80:
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L81
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jle	.L82
.L81:
	movl	$0, %eax
	jmp	.L122
.L82:
	movsd	max_float(%rip), %xmm1
	movsd	.LC5(%rip), %xmm0
	addsd	%xmm0, %xmm1
	movsd	-64(%rbp), %xmm0
	comisd	%xmm1, %xmm0
	jbe	.L125
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	printStr
	movl	$0, %eax
	jmp	.L122
.L125:
	jmp	.L85
.L77:
	movsd	.LC6(%rip), %xmm0
	movsd	%xmm0, -56(%rbp)
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -48(%rbp)
	movl	$0, -96(%rbp)
	jmp	.L86
.L92:
	leaq	-9(%rbp), %rax
	movl	-68(%rbp), %edx
	movq	%rax, %rsi
#APP
# 327 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -112(%rbp)
	movzbl	-9(%rbp), %eax
	cmpb	$10, %al
	je	.L87
	movzbl	-9(%rbp), %eax
	cmpb	$9, %al
	je	.L87
	movzbl	-9(%rbp), %eax
	cmpb	$32, %al
	je	.L87
	cmpl	$0, -112(%rbp)
	jle	.L87
	movzbl	-9(%rbp), %eax
	cmpb	$69, %al
	je	.L88
	movzbl	-9(%rbp), %eax
	cmpb	$101, %al
	jne	.L89
.L88:
	movl	$1, -100(%rbp)
	jmp	.L87
.L89:
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L90
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jle	.L91
.L90:
	movl	$0, %eax
	jmp	.L122
.L91:
	movzbl	-9(%rbp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	pxor	%xmm0, %xmm0
	cvtsi2sdl	%eax, %xmm0
	mulsd	-56(%rbp), %xmm0
	movsd	-48(%rbp), %xmm1
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -48(%rbp)
	movsd	-56(%rbp), %xmm0
	movsd	.LC5(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -56(%rbp)
	addl	$1, -96(%rbp)
.L86:
	cmpl	$0, -104(%rbp)
	jne	.L92
.L87:
	cmpl	$0, -104(%rbp)
	je	.L93
	cmpl	$0, -96(%rbp)
	jne	.L93
	movl	$0, %eax
	jmp	.L122
.L93:
	movl	$0, -92(%rbp)
	movl	$0, -88(%rbp)
	cmpl	$0, -100(%rbp)
	je	.L94
	leaq	-9(%rbp), %rax
	movl	-68(%rbp), %edx
	movq	%rax, %rsi
#APP
# 353 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -112(%rbp)
	movzbl	-9(%rbp), %eax
	cmpb	$45, %al
	je	.L95
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L96
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jle	.L95
.L96:
	movzbl	-9(%rbp), %eax
	cmpb	$43, %al
	jne	.L97
.L95:
	cmpl	$0, -112(%rbp)
	jg	.L98
.L97:
	movl	$0, %eax
	jmp	.L122
.L98:
	movzbl	-9(%rbp), %eax
	cmpb	$45, %al
	jne	.L99
	movl	$1, -88(%rbp)
	leaq	-9(%rbp), %rax
	movl	-68(%rbp), %edx
	movq	%rax, %rsi
#APP
# 364 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -112(%rbp)
	jmp	.L100
.L99:
	movzbl	-9(%rbp), %eax
	cmpb	$43, %al
	jne	.L100
	movl	$0, -88(%rbp)
	leaq	-9(%rbp), %rax
	movl	-68(%rbp), %edx
	movq	%rax, %rsi
#APP
# 375 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -112(%rbp)
.L100:
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L101
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jg	.L101
	cmpl	$0, -112(%rbp)
	jg	.L102
.L101:
	movl	$0, %eax
	jmp	.L122
.L102:
	movl	$0, -84(%rbp)
.L107:
	movl	-92(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movzbl	-9(%rbp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	addl	%edx, %eax
	movl	%eax, -92(%rbp)
	leaq	-9(%rbp), %rax
	movl	-68(%rbp), %edx
	movq	%rax, %rsi
#APP
# 388 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -112(%rbp)
	movzbl	-9(%rbp), %eax
	cmpb	$10, %al
	je	.L103
	movzbl	-9(%rbp), %eax
	cmpb	$9, %al
	je	.L103
	movzbl	-9(%rbp), %eax
	cmpb	$32, %al
	je	.L103
	movzbl	-9(%rbp), %eax
	cmpb	$46, %al
	jne	.L104
	movl	$1, -84(%rbp)
	jmp	.L103
.L104:
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L105
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jle	.L107
.L105:
	movl	$0, %eax
	jmp	.L122
.L103:
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -40(%rbp)
	movsd	.LC6(%rip), %xmm0
	movsd	%xmm0, -32(%rbp)
	movl	$0, -80(%rbp)
	jmp	.L108
.L112:
	leaq	-9(%rbp), %rax
	movl	-68(%rbp), %edx
	movq	%rax, %rsi
#APP
# 407 "ass2_21CS30038.c" 1
	movl $0, %eax 
	movq $0, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	%eax, -112(%rbp)
	movzbl	-9(%rbp), %eax
	cmpb	$10, %al
	je	.L109
	movzbl	-9(%rbp), %eax
	cmpb	$9, %al
	je	.L109
	movzbl	-9(%rbp), %eax
	cmpb	$32, %al
	je	.L109
	cmpl	$0, -112(%rbp)
	jle	.L109
	movzbl	-9(%rbp), %eax
	cmpb	$47, %al
	jle	.L110
	movzbl	-9(%rbp), %eax
	cmpb	$57, %al
	jle	.L111
.L110:
	movl	$0, %eax
	jmp	.L122
.L111:
	movzbl	-9(%rbp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	pxor	%xmm0, %xmm0
	cvtsi2sdl	%eax, %xmm0
	mulsd	-56(%rbp), %xmm0
	movsd	-40(%rbp), %xmm1
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -40(%rbp)
	movsd	-32(%rbp), %xmm0
	movsd	.LC5(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -32(%rbp)
	addl	$1, -80(%rbp)
.L108:
	cmpl	$0, -84(%rbp)
	jne	.L112
.L109:
	cmpl	$0, -84(%rbp)
	je	.L113
	cmpl	$0, -80(%rbp)
	jne	.L113
	movl	$0, %eax
	jmp	.L122
.L113:
	pxor	%xmm0, %xmm0
	cvtsi2sdl	-92(%rbp), %xmm0
	addsd	-40(%rbp), %xmm0
	cvttsd2sil	%xmm0, %eax
	movl	%eax, -92(%rbp)
.L94:
	movsd	.LC7(%rip), %xmm0
	movsd	%xmm0, -24(%rbp)
	movl	$0, -76(%rbp)
	jmp	.L114
.L115:
	movsd	-24(%rbp), %xmm1
	movsd	.LC5(%rip), %xmm0
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -24(%rbp)
	addl	$1, -76(%rbp)
.L114:
	movl	-76(%rbp), %eax
	cmpl	-92(%rbp), %eax
	jl	.L115
	movsd	-64(%rbp), %xmm0
	addsd	-48(%rbp), %xmm0
	movsd	%xmm0, -64(%rbp)
	cmpl	$0, -88(%rbp)
	je	.L116
	movsd	-64(%rbp), %xmm0
	divsd	-24(%rbp), %xmm0
	movsd	%xmm0, -64(%rbp)
	jmp	.L117
.L116:
	movsd	-64(%rbp), %xmm0
	mulsd	-24(%rbp), %xmm0
	movsd	%xmm0, -64(%rbp)
.L117:
	pxor	%xmm0, %xmm0
	cvtsd2ss	-64(%rbp), %xmm0
	movss	%xmm0, -72(%rbp)
	cmpl	$0, -108(%rbp)
	je	.L118
	movss	-72(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	xorps	%xmm1, %xmm0
	movss	%xmm0, -72(%rbp)
.L118:
	pxor	%xmm0, %xmm0
	cvtss2sd	-72(%rbp), %xmm0
	movsd	max_float(%rip), %xmm1
	comisd	%xmm1, %xmm0
	ja	.L119
	pxor	%xmm1, %xmm1
	cvtss2sd	-72(%rbp), %xmm1
	movsd	min_float(%rip), %xmm0
	comisd	%xmm1, %xmm0
	jbe	.L126
.L119:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	printStr
	movl	$0, %eax
	jmp	.L122
.L126:
	movq	-120(%rbp), %rax
	movss	-72(%rbp), %xmm0
	movss	%xmm0, (%rax)
	movl	$1, %eax
.L122:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L123
	call	__stack_chk_fail@PLT
.L123:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	readFlt, .-readFlt
	.section	.rodata
	.align 16
.LC1:
	.long	-2147483648
	.long	0
	.long	0
	.long	0
	.align 4
.LC2:
	.long	1287568416
	.align 8
.LC5:
	.long	0
	.long	1076101120
	.align 8
.LC6:
	.long	-1717986918
	.long	1069128089
	.align 8
.LC7:
	.long	0
	.long	1072693248
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
