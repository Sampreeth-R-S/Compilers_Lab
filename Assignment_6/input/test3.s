	.file	"./input/test3.c"

#	Allocation of function variables and temporaries on the stack:

#	printStr
#	s: -8
#	readInt
#	eP: -8
#	printInt
#	n: -4
#	testInt
#	num: -4
#	testIntPtr
#	numPtr: -8
#	testChar
#	c: -1
#	testCharPtr
#	cPtr: -8
#	testVoid
#	t0: -8
#	t1: -12
#	main
#	cPtr__23: -110
#	c__21: -101
#	main__0: -60
#	main__1: -64
#	main__2: -96
#	main__3: -100
#	main__4: -136
#	main__5: -140
#	main__6: -172
#	main__7: -176
#	main__8: -224
#	main__9: -228
#	nPtr: -28
#	n__4: -16
#	retChar: -131
#	retCharPtr: -160
#	retInt: -52
#	retIntPtr: -84
#	retStr: -212
#	str: -184
#	t10: -320
#	t11: -324
#	t12: -332
#	t13: -336
#	t14: -72
#	t15: -76
#	t16: -92
#	t17: -344
#	t18: -348
#	t19: -356
#	t2: -8
#	t20: -360
#	t22: -102
#	t24: -118
#	t25: -126
#	t26: -130
#	t27: -132
#	t28: -368
#	t29: -372
#	t3: -12
#	t30: -380
#	t31: -384
#	t32: -148
#	t33: -152
#	t34: -168
#	t35: -392
#	t36: -396
#	t37: -404
#	t38: -408
#	t39: -192
#	t40: -200
#	t41: -204
#	t42: -220
#	t43: -416
#	t44: -420
#	t45: -428
#	t46: -432
#	t47: -236
#	t48: -240
#	t49: -244
#	t5: -20
#	t50: -252
#	t51: -256
#	t52: -264
#	t53: -268
#	t54: -272
#	t55: -280
#	t56: -284
#	t57: -292
#	t58: -296
#	t6: -36
#	t60: -304
#	t61: -308
#	t62: -312
#	t7: -44
#	t8: -48
#	t9: -56

	.section	.rodata
.LC0:
	.string	"\nHello World, I am a void function. I don't return anything."
.LC1:
	.string	"\n#### TEST 3 (Function calls and returns) ####"
.LC2:
	.string	"\nTesting integer value return: "
.LC3:
	.string	"Passed"
.LC4:
	.string	"Failed"
.LC5:
	.string	"\nTesting integer pointer return: "
.LC6:
	.string	"Passed"
.LC7:
	.string	"Failed"
.LC8:
	.string	"\nTesting character value return: "
.LC9:
	.string	"Passed"
.LC10:
	.string	"Failed"
.LC11:
	.string	"\nTesting character pointer return: "
.LC12:
	.string	"Passed"
.LC13:
	.string	"Failed"
.LC14:
	.string	"Hello World, I am a string."
.LC15:
	.string	"\nTesting string return: "
.LC16:
	.string	"Passed"
.LC17:
	.string	"Failed"
.LC18:
	.string	" [ Passed string: "
.LC19:
	.string	" ], "
.LC20:
	.string	"[ Returned string: "
.LC21:
	.string	" ]"
.LC22:
	.string	"\nTesting void return: "
.LC23:
	.string	"\n\n"

.data
	f__:
	.float	0.0
	.text
	.globl testInt
	.type testInt, @function
testInt:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$4, %rsp
	movl    %edi, -4(%rbp)
	movl	-4(%rbp), %eax
.LFE0:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	testInt, .-testInt
	.text
	.globl testIntPtr
	.type testIntPtr, @function
testIntPtr:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$8, %rsp
	movq    %rdi, -8(%rbp)
	movq	-8(%rbp), %rax
.LFE1:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	testIntPtr, .-testIntPtr
	.text
	.globl testChar
	.type testChar, @function
testChar:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$1, %rsp
	movb    %dil, -1(%rbp)
	movb	-1(%rbp), %al
.LFE2:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	testChar, .-testChar
	.text
	.globl testCharPtr
	.type testCharPtr, @function
testCharPtr:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$8, %rsp
	movq    %rdi, -8(%rbp)
	movq	-8(%rbp), %rax
.LFE3:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	testCharPtr, .-testCharPtr
	.text
	.globl testVoid
	.type testVoid, @function
testVoid:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$12, %rsp
	movq	$.LC0, -8(%rbp)
	movq    -8(%rbp), %rdi
	call	printStr
	movl	%eax, -12(%rbp)
.LFE4:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	testVoid, .-testVoid
	.text
	.globl main
	.type main, @function
main:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$432, %rsp
	movq	$.LC1, -8(%rbp)
	movq    -8(%rbp), %rdi
	call	printStr
	movl	%eax, -12(%rbp)
	movl	$10, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
	leaq	-16(%rbp), %rax
	movq	%rax, -36(%rbp)
	movq	-36(%rbp), %rax
	movq	%rax, -28(%rbp)
	movq	$.LC2, -44(%rbp)
	movq    -44(%rbp), %rdi
	call	printStr
	movl	%eax, -48(%rbp)
	movl    -16(%rbp), %edi
	call	testInt
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -52(%rbp)
	movl	-16(%rbp), %eax
	cmpl	%eax, -52(%rbp)
	je	.L6
	jmp	.L7
	jmp	.L8
.L6:
	movq	$.LC3, -320(%rbp)
	movq    -320(%rbp), %rdi
	call	printStr
	movl	%eax, -324(%rbp)
	jmp	.L8
.L7:
	movq	$.LC4, -332(%rbp)
	movq    -332(%rbp), %rdi
	call	printStr
	movl	%eax, -336(%rbp)
.L8:
	movq	$.LC5, -72(%rbp)
	movq    -72(%rbp), %rdi
	call	printStr
	movl	%eax, -76(%rbp)
	movq    -28(%rbp), %rdi
	call	testIntPtr
	movq	%rax, -92(%rbp)
	movq	-92(%rbp), %rax
	movq	%rax, -84(%rbp)
	movq	-28(%rbp), %rax
	cmpq	%rax, -84(%rbp)
	je	.L9
	jmp	.L10
	jmp	.L11
.L9:
	movq	$.LC6, -344(%rbp)
	movq    -344(%rbp), %rdi
	call	printStr
	movl	%eax, -348(%rbp)
	jmp	.L11
.L10:
	movq	$.LC7, -356(%rbp)
	movq    -356(%rbp), %rdi
	call	printStr
	movl	%eax, -360(%rbp)
.L11:
	movb	$109, -102(%rbp)
	movb	-102(%rbp), %al
	movb	%al, -101(%rbp)
	leaq	-101(%rbp), %rax
	movq	%rax, -118(%rbp)
	movq	-118(%rbp), %rax
	movq	%rax, -110(%rbp)
	movq	$.LC8, -126(%rbp)
	movq    -126(%rbp), %rdi
	call	printStr
	movl	%eax, -130(%rbp)
	movb    -101(%rbp), %dil
	call	testChar
	movb	%al, -132(%rbp)
	movb	-132(%rbp), %al
	movb	%al, -131(%rbp)
	movb	-101(%rbp), %al
	cmpb	%al, -131(%rbp)
	je	.L12
	jmp	.L13
	jmp	.L14
.L12:
	movq	$.LC9, -368(%rbp)
	movq    -368(%rbp), %rdi
	call	printStr
	movl	%eax, -372(%rbp)
	jmp	.L14
.L13:
	movq	$.LC10, -380(%rbp)
	movq    -380(%rbp), %rdi
	call	printStr
	movl	%eax, -384(%rbp)
.L14:
	movq	$.LC11, -148(%rbp)
	movq    -148(%rbp), %rdi
	call	printStr
	movl	%eax, -152(%rbp)
	movq    -110(%rbp), %rdi
	call	testCharPtr
	movq	%rax, -168(%rbp)
	movq	-168(%rbp), %rax
	movq	%rax, -160(%rbp)
	movq	-110(%rbp), %rax
	cmpq	%rax, -160(%rbp)
	je	.L15
	jmp	.L16
	jmp	.L17
.L15:
	movq	$.LC12, -392(%rbp)
	movq    -392(%rbp), %rdi
	call	printStr
	movl	%eax, -396(%rbp)
	jmp	.L17
.L16:
	movq	$.LC13, -404(%rbp)
	movq    -404(%rbp), %rdi
	call	printStr
	movl	%eax, -408(%rbp)
.L17:
	movq	$.LC14, -192(%rbp)
	movq	-192(%rbp), %rax
	movq	%rax, -184(%rbp)
	movq	$.LC15, -200(%rbp)
	movq    -200(%rbp), %rdi
	call	printStr
	movl	%eax, -204(%rbp)
	movq    -184(%rbp), %rdi
	call	testCharPtr
	movq	%rax, -220(%rbp)
	movq	-220(%rbp), %rax
	movq	%rax, -212(%rbp)
	movq	-184(%rbp), %rax
	cmpq	%rax, -212(%rbp)
	je	.L18
	jmp	.L19
	jmp	.L20
.L18:
	movq	$.LC16, -416(%rbp)
	movq    -416(%rbp), %rdi
	call	printStr
	movl	%eax, -420(%rbp)
	jmp	.L20
.L19:
	movq	$.LC17, -428(%rbp)
	movq    -428(%rbp), %rdi
	call	printStr
	movl	%eax, -432(%rbp)
.L20:
	movq	$.LC18, -236(%rbp)
	movq    -236(%rbp), %rdi
	call	printStr
	movl	%eax, -240(%rbp)
	movq    -184(%rbp), %rdi
	call	printStr
	movl	%eax, -244(%rbp)
	movq	$.LC19, -252(%rbp)
	movq    -252(%rbp), %rdi
	call	printStr
	movl	%eax, -256(%rbp)
	movq	$.LC20, -264(%rbp)
	movq    -264(%rbp), %rdi
	call	printStr
	movl	%eax, -268(%rbp)
	movq    -212(%rbp), %rdi
	call	printStr
	movl	%eax, -272(%rbp)
	movq	$.LC21, -280(%rbp)
	movq    -280(%rbp), %rdi
	call	printStr
	movl	%eax, -284(%rbp)
	movq	$.LC22, -292(%rbp)
	movq    -292(%rbp), %rdi
	call	printStr
	movl	%eax, -296(%rbp)
	call	testVoid
	movq	$.LC23, -304(%rbp)
	movq    -304(%rbp), %rdi
	call	printStr
	movl	%eax, -308(%rbp)
	movl	$0, -312(%rbp)
	movl	-312(%rbp), %eax
.LFE5:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
