	.file	"./input/test2.c"

#	Allocation of function variables and temporaries on the stack:

#	printStr
#	s: -8
#	readInt
#	eP: -8
#	printInt
#	n: -4
#	fillFib
#	fib: -8
#	fillFib_FOR_0: -20
#	fillFib_FOR_0_FOR_1: -40
#	fillFib_FOR_0_FOR_2: -48
#	fillFib_FOR_0_FOR_3: -52
#	i: -16
#	n__0: -12
#	t1: -24
#	t10: -72
#	t11: -76
#	t12: -80
#	t13: -84
#	t14: -88
#	t15: -92
#	t16: -96
#	t17: -100
#	t18: -104
#	t19: -108
#	t2: -28
#	t20: -112
#	t21: -116
#	t22: -120
#	t3: -32
#	t4: -36
#	t5: -56
#	t6: -60
#	t7: -64
#	t8: -44
#	t9: -68
#	main
#	fib__25: -72
#	i__29: -84
#	main_FOR_0: -100
#	main_FOR_1: -175
#	t23: -8
#	t24: -12
#	t26: -76
#	t27: -80
#	t30: -92
#	t31: -96
#	t32: -195
#	t33: -199
#	t34: -203
#	t35: -207
#	t36: -211
#	t37: -215
#	t38: -219
#	t39: -227
#	t40: -231
#	t41: -109
#	t42: -113
#	t43: -117
#	t44: -118
#	t45: -119
#	t46: -123
#	t47: -127
#	t48: -128
#	t49: -129
#	t50: -133
#	t51: -137
#	t52: -138
#	t53: -139
#	t54: -143
#	t55: -147
#	t56: -148
#	t57: -149
#	t58: -153
#	t59: -157
#	t60: -158
#	t61: -159
#	t62: -167
#	t63: -171
#	t64: -235
#	t65: -239
#	t66: -243
#	t67: -247
#	t68: -251
#	t69: -252
#	t70: -256
#	t71: -264
#	t72: -268
#	t73: -183
#	t74: -187
#	t75: -191
#	vowels: -105

	.section	.rodata
.LC0:
	.string	"\n#### TEST 2 (1-D Arrays) ####"
.LC1:
	.string	"\nFibonacci Series: "
.LC2:
	.string	" "
.LC3:
	.string	"\nAscii values of vowels: "
.LC4:
	.string	" "
.LC5:
	.string	"\n\n"

.data
	f__:
	.float	0.0
	.text
	.globl fillFib
	.type fillFib, @function
fillFib:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$120, %rsp
	movq    %rdi, -8(%rbp)
	movl    %esi, -12(%rbp)
	movl	$0, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -16(%rbp)
.L3:
	movl	-12(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jl	.L2
	jmp	.LFE0
.L7:
	movl	-16(%rbp), %eax
	movl	%eax, -32(%rbp)
	incl	-16(%rbp)
	jmp	.L3
.L2:
	movl	$0, -36(%rbp)
	movl	-36(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	je	.L4
	jmp	.L5
	jmp	.L6
.L4:
	movl	-16(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -56(%rbp)
	movl	$0, -60(%rbp)
	movl    -56(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    -60(%rbp), %ebx
	movl    %ebx, (%rax)
	jmp	.L7
.L5:
	movl	$1, -44(%rbp)
	movl	-44(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	je	.L8
	jmp	.L9
	jmp	.L6
.L8:
	movl	-16(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -68(%rbp)
	movl	$1, -72(%rbp)
	movl    -68(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    -72(%rbp), %ebx
	movl    %ebx, (%rax)
	jmp	.L7
.L9:
	movl	-16(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -80(%rbp)
	movl	$1, -84(%rbp)
	movl    -16(%rbp), %eax
	subl    -84(%rbp), %eax
	movl    %eax, -88(%rbp)
	movl	-88(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -92(%rbp)
	movl    -92(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -96(%rbp)
	movl	$2, -100(%rbp)
	movl    -16(%rbp), %eax
	subl    -100(%rbp), %eax
	movl    %eax, -104(%rbp)
	movl	-104(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -108(%rbp)
	movl    -108(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -112(%rbp)
	movl    -96(%rbp), %eax
	addl    -112(%rbp), %eax
	movl    %eax, -116(%rbp)
	movl    -80(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    -116(%rbp), %ebx
	movl    %ebx, (%rax)
.L6:
	jmp	.L7
.LFE0:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	fillFib, .-fillFib
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
	subq	$268, %rsp
	movq	$.LC0, -8(%rbp)
	movq    -8(%rbp), %rdi
	call	printStr
	movl	%eax, -12(%rbp)
	movl	$15, -76(%rbp)
	movl	$15, -80(%rbp)
	movl    -80(%rbp), %esi
	leaq    -72(%rbp), %rdi
	call	fillFib
	movq	$.LC1, -92(%rbp)
	movq    -92(%rbp), %rdi
	call	printStr
	movl	%eax, -96(%rbp)
	movl	$0, -195(%rbp)
	movl	-195(%rbp), %eax
	movl	%eax, -84(%rbp)
.L12:
	movl	$15, -203(%rbp)
	movl	-203(%rbp), %eax
	cmpl	%eax, -84(%rbp)
	jl	.L10
	jmp	.L11
.L13:
	movl	-84(%rbp), %eax
	movl	%eax, -207(%rbp)
	incl	-84(%rbp)
	jmp	.L12
.L10:
	movl	-84(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -211(%rbp)
	movl    -211(%rbp), %eax
	cltq    
	movl    -72(%rbp, %rax, 1), %eax
	movl    %eax, -215(%rbp)
	movl    -215(%rbp), %edi
	call	printInt
	movl	%eax, -219(%rbp)
	movq	$.LC2, -227(%rbp)
	movq    -227(%rbp), %rdi
	call	printStr
	movl	%eax, -231(%rbp)
	jmp	.L13
.L11:
	movl	$5, -109(%rbp)
	movl	$0, -113(%rbp)
	movl	-113(%rbp), %eax
	imull	$1, %eax
	movl	%eax, -117(%rbp)
	movb	$97, -118(%rbp)
	movl    -117(%rbp), %eax
	cltq    
	movl    -118(%rbp), %ebx
	movl    %ebx, -105(%rbp, %rax, 1)
	movl	$1, -123(%rbp)
	movl	-123(%rbp), %eax
	imull	$1, %eax
	movl	%eax, -127(%rbp)
	movb	$101, -128(%rbp)
	movl    -127(%rbp), %eax
	cltq    
	movl    -128(%rbp), %ebx
	movl    %ebx, -105(%rbp, %rax, 1)
	movl	$2, -133(%rbp)
	movl	-133(%rbp), %eax
	imull	$1, %eax
	movl	%eax, -137(%rbp)
	movb	$105, -138(%rbp)
	movl    -137(%rbp), %eax
	cltq    
	movl    -138(%rbp), %ebx
	movl    %ebx, -105(%rbp, %rax, 1)
	movl	$3, -143(%rbp)
	movl	-143(%rbp), %eax
	imull	$1, %eax
	movl	%eax, -147(%rbp)
	movb	$111, -148(%rbp)
	movl    -147(%rbp), %eax
	cltq    
	movl    -148(%rbp), %ebx
	movl    %ebx, -105(%rbp, %rax, 1)
	movl	$4, -153(%rbp)
	movl	-153(%rbp), %eax
	imull	$1, %eax
	movl	%eax, -157(%rbp)
	movb	$117, -158(%rbp)
	movl    -157(%rbp), %eax
	cltq    
	movl    -158(%rbp), %ebx
	movl    %ebx, -105(%rbp, %rax, 1)
	movq	$.LC3, -167(%rbp)
	movq    -167(%rbp), %rdi
	call	printStr
	movl	%eax, -171(%rbp)
	movl	$0, -235(%rbp)
	movl	-235(%rbp), %eax
	movl	%eax, -84(%rbp)
.L16:
	movl	$5, -243(%rbp)
	movl	-243(%rbp), %eax
	cmpl	%eax, -84(%rbp)
	jl	.L14
	jmp	.L15
.L17:
	movl	-84(%rbp), %eax
	movl	%eax, -247(%rbp)
	incl	-84(%rbp)
	jmp	.L16
.L14:
	movl	-84(%rbp), %eax
	imull	$1, %eax
	movl	%eax, -251(%rbp)
	movl    -251(%rbp), %eax
	cltq    
	movl    -105(%rbp, %rax, 1), %eax
	movl    %eax, -252(%rbp)
	movb    -252(%rbp), %dil
	call	printInt
	movl	%eax, -256(%rbp)
	movq	$.LC4, -264(%rbp)
	movq    -264(%rbp), %rdi
	call	printStr
	movl	%eax, -268(%rbp)
	jmp	.L17
.L15:
	movq	$.LC5, -183(%rbp)
	movq    -183(%rbp), %rdi
	call	printStr
	movl	%eax, -187(%rbp)
	movl	$0, -191(%rbp)
	movl	-191(%rbp), %eax
.LFE1:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
