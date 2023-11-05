	.file	"./input/test.c"

#	Allocation of function variables and temporaries on the stack:

#	testIncDec
#	n: -4
#	printInt: -24
#	printStr: -8
#	t0: -16
#	t1: -20
#	t2: -28
#	main
#	n1: -20
#	n10: -260
#	n11: -288
#	n12: -312
#	n13: -336
#	n2: -24
#	n3: -28
#	n4: -32
#	n5: -140
#	n6: -148
#	n7: -156
#	n8: -164
#	n9: -172
#	printInt: -84
#	printStr: -4
#	t10: -56
#	t100: -524
#	t101: -532
#	t102: -536
#	t104: -544
#	t105: -548
#	t106: -552
#	t107: -560
#	t108: -564
#	t109: -568
#	t11: -60
#	t111: -576
#	t112: -580
#	t113: -584
#	t114: -592
#	t115: -596
#	t116: -600
#	t12: -64
#	t13: -68
#	t14: -76
#	t15: -80
#	t16: -88
#	t17: -96
#	t18: -100
#	t19: -104
#	t20: -112
#	t21: -116
#	t22: -120
#	t23: -128
#	t24: -132
#	t25: -136
#	t26: -144
#	t27: -152
#	t28: -160
#	t29: -168
#	t3: -12
#	t30: -176
#	t31: -184
#	t32: -188
#	t33: -192
#	t34: -200
#	t35: -204
#	t36: -208
#	t37: -216
#	t38: -220
#	t39: -224
#	t4: -16
#	t40: -232
#	t41: -236
#	t42: -240
#	t43: -248
#	t44: -252
#	t45: -256
#	t46: -264
#	t47: -268
#	t48: -272
#	t49: -276
#	t5: -36
#	t50: -280
#	t51: -284
#	t52: -292
#	t53: -296
#	t54: -300
#	t55: -304
#	t56: -308
#	t57: -316
#	t58: -320
#	t59: -324
#	t6: -40
#	t60: -328
#	t61: -332
#	t62: -340
#	t63: -344
#	t64: -348
#	t65: -352
#	t66: -356
#	t67: -360
#	t68: -368
#	t69: -372
#	t7: -44
#	t70: -376
#	t71: -384
#	t72: -388
#	t73: -392
#	t74: -400
#	t75: -404
#	t76: -408
#	t77: -416
#	t78: -420
#	t79: -424
#	t8: -48
#	t80: -432
#	t81: -436
#	t82: -440
#	t83: -444
#	t84: -452
#	t85: -456
#	t86: -460
#	t87: -464
#	t88: -472
#	t89: -476
#	t9: -52
#	t91: -484
#	t92: -488
#	t93: -492
#	t94: -500
#	t95: -504
#	t96: -508
#	t98: -516
#	t99: -520

	.section	.rodata
.LC0:
	.string	"Value passed to function = "
.LC1:
	.string	"\n#### TEST 1 (Arithmetic operators) ####"
.LC2:
	.string	"\nn1 = "
.LC3:
	.string	"\nn2 = "
.LC4:
	.string	"\nn3 = "
.LC5:
	.string	"\nn4 = "
.LC6:
	.string	"\nn1 + n2 = "
.LC7:
	.string	"\nn1 - n2 = "
.LC8:
	.string	"\nn1 * n2 = "
.LC9:
	.string	"\nn1 / n2 = "
.LC10:
	.string	"\nn1 % n2 = "
.LC11:
	.string	"\n-n1 + n2 - n3 + n4 + 10 = "
.LC12:
	.string	"\nn1 * n2 / n3 + n4 - 10 = "
.LC13:
	.string	"\nn1 + n2 * n3 / n4 - 0 = "
.LC14:
	.string	"\n(n1 + n2) * (n3 / n4) - 15 = "
.LC15:
	.string	"\n-n3 = "
.LC16:
	.string	"\n-n4 = "
.LC17:
	.string	"\nTest pre increment: "
.LC18:
	.string	", Value after call = "
.LC19:
	.string	"\nTest post increment: "
.LC20:
	.string	", Value after call = "
.LC21:
	.string	"\nTest pre decrement: "
.LC22:
	.string	", Value after call = "
.LC23:
	.string	"\nTest post decrement: "
.LC24:
	.string	", Value after call = "
.LC25:
	.string	"\n\n"

	.text
	.globl testIncDec
	.type testIncDec, @function
testIncDec:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$28, %rsp
	movl    %edi, -4(%rbp)
	movq	$.LC0, -16(%rbp)
	movq    -16(%rbp), %rdi
	call	printStr
	movl	%eax, -20(%rbp)
	movl    -4(%rbp), %edi
	call	printInt
	movl	%eax, -28(%rbp)
.LFE0:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	testIncDec, .-testIncDec
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
	subq	$600, %rsp
	movq	$.LC1, -12(%rbp)
	movq    -12(%rbp), %rdi
	call	printStr
	movl	%eax, -16(%rbp)
	movl	$30, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$16, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$7, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	$22, -60(%rbp)
	movl	-60(%rbp), %eax
	negl	%eax
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -32(%rbp)
	movq	$.LC2, -76(%rbp)
	movq    -76(%rbp), %rdi
	call	printStr
	movl	%eax, -80(%rbp)
	movl    -20(%rbp), %edi
	call	printInt
	movl	%eax, -88(%rbp)
	movq	$.LC3, -96(%rbp)
	movq    -96(%rbp), %rdi
	call	printStr
	movl	%eax, -100(%rbp)
	movl    -24(%rbp), %edi
	call	printInt
	movl	%eax, -104(%rbp)
	movq	$.LC4, -112(%rbp)
	movq    -112(%rbp), %rdi
	call	printStr
	movl	%eax, -116(%rbp)
	movl    -28(%rbp), %edi
	call	printInt
	movl	%eax, -120(%rbp)
	movq	$.LC5, -128(%rbp)
	movq    -128(%rbp), %rdi
	call	printStr
	movl	%eax, -132(%rbp)
	movl    -32(%rbp), %edi
	call	printInt
	movl	%eax, -136(%rbp)
	movl    -20(%rbp), %eax
	addl    -24(%rbp), %eax
	movl    %eax, -144(%rbp)
	movl	-144(%rbp), %eax
	movl	%eax, -140(%rbp)
	movl    -20(%rbp), %eax
	subl    -24(%rbp), %eax
	movl    %eax, -152(%rbp)
	movl	-152(%rbp), %eax
	movl	%eax, -148(%rbp)
	movl	-20(%rbp), %eax
	imull	-24(%rbp), %eax
	movl	%eax, -160(%rbp)
	movl	-160(%rbp), %eax
	movl	%eax, -156(%rbp)
	movl	-20(%rbp), %eax
	cdq
	idivl	-24(%rbp)
	movl	%eax, -168(%rbp)
	movl	-168(%rbp), %eax
	movl	%eax, -164(%rbp)
	movl	-20(%rbp), %eax
	cdq
	idivl	-24(%rbp)
	movl	%edx, -176(%rbp)
	movl	-176(%rbp), %eax
	movl	%eax, -172(%rbp)
	movq	$.LC6, -184(%rbp)
	movq    -184(%rbp), %rdi
	call	printStr
	movl	%eax, -188(%rbp)
	movl    -140(%rbp), %edi
	call	printInt
	movl	%eax, -192(%rbp)
	movq	$.LC7, -200(%rbp)
	movq    -200(%rbp), %rdi
	call	printStr
	movl	%eax, -204(%rbp)
	movl    -148(%rbp), %edi
	call	printInt
	movl	%eax, -208(%rbp)
	movq	$.LC8, -216(%rbp)
	movq    -216(%rbp), %rdi
	call	printStr
	movl	%eax, -220(%rbp)
	movl    -156(%rbp), %edi
	call	printInt
	movl	%eax, -224(%rbp)
	movq	$.LC9, -232(%rbp)
	movq    -232(%rbp), %rdi
	call	printStr
	movl	%eax, -236(%rbp)
	movl    -164(%rbp), %edi
	call	printInt
	movl	%eax, -240(%rbp)
	movq	$.LC10, -248(%rbp)
	movq    -248(%rbp), %rdi
	call	printStr
	movl	%eax, -252(%rbp)
	movl    -172(%rbp), %edi
	call	printInt
	movl	%eax, -256(%rbp)
	movl	-20(%rbp), %eax
	negl	%eax
	movl	%eax, -264(%rbp)
	movl    -264(%rbp), %eax
	addl    -24(%rbp), %eax
	movl    %eax, -268(%rbp)
	movl    -268(%rbp), %eax
	subl    -28(%rbp), %eax
	movl    %eax, -272(%rbp)
	movl    -272(%rbp), %eax
	addl    -32(%rbp), %eax
	movl    %eax, -276(%rbp)
	movl	$10, -280(%rbp)
	movl    -276(%rbp), %eax
	addl    -280(%rbp), %eax
	movl    %eax, -284(%rbp)
	movl	-284(%rbp), %eax
	movl	%eax, -260(%rbp)
	movl	-20(%rbp), %eax
	imull	-24(%rbp), %eax
	movl	%eax, -292(%rbp)
	movl	-292(%rbp), %eax
	cdq
	idivl	-28(%rbp)
	movl	%eax, -296(%rbp)
	movl    -296(%rbp), %eax
	addl    -32(%rbp), %eax
	movl    %eax, -300(%rbp)
	movl	$10, -304(%rbp)
	movl    -300(%rbp), %eax
	subl    -304(%rbp), %eax
	movl    %eax, -308(%rbp)
	movl	-308(%rbp), %eax
	movl	%eax, -288(%rbp)
	movl	-24(%rbp), %eax
	imull	-28(%rbp), %eax
	movl	%eax, -316(%rbp)
	movl	-316(%rbp), %eax
	cdq
	idivl	-32(%rbp)
	movl	%eax, -320(%rbp)
	movl    -20(%rbp), %eax
	addl    -320(%rbp), %eax
	movl    %eax, -324(%rbp)
	movl	$0, -328(%rbp)
	movl    -324(%rbp), %eax
	subl    -328(%rbp), %eax
	movl    %eax, -332(%rbp)
	movl	-332(%rbp), %eax
	movl	%eax, -312(%rbp)
	movl    -20(%rbp), %eax
	addl    -24(%rbp), %eax
	movl    %eax, -340(%rbp)
	movl	-28(%rbp), %eax
	negl	%eax
	movl	%eax, -344(%rbp)
	movl	-344(%rbp), %eax
	cdq
	idivl	-32(%rbp)
	movl	%eax, -348(%rbp)
	movl	-340(%rbp), %eax
	imull	-348(%rbp), %eax
	movl	%eax, -352(%rbp)
	movl	$15, -356(%rbp)
	movl    -352(%rbp), %eax
	subl    -356(%rbp), %eax
	movl    %eax, -360(%rbp)
	movl	-360(%rbp), %eax
	movl	%eax, -336(%rbp)
	movq	$.LC11, -368(%rbp)
	movq    -368(%rbp), %rdi
	call	printStr
	movl	%eax, -372(%rbp)
	movl    -260(%rbp), %edi
	call	printInt
	movl	%eax, -376(%rbp)
	movq	$.LC12, -384(%rbp)
	movq    -384(%rbp), %rdi
	call	printStr
	movl	%eax, -388(%rbp)
	movl    -288(%rbp), %edi
	call	printInt
	movl	%eax, -392(%rbp)
	movq	$.LC13, -400(%rbp)
	movq    -400(%rbp), %rdi
	call	printStr
	movl	%eax, -404(%rbp)
	movl    -312(%rbp), %edi
	call	printInt
	movl	%eax, -408(%rbp)
	movq	$.LC14, -416(%rbp)
	movq    -416(%rbp), %rdi
	call	printStr
	movl	%eax, -420(%rbp)
	movl    -336(%rbp), %edi
	call	printInt
	movl	%eax, -424(%rbp)
	movq	$.LC15, -432(%rbp)
	movq    -432(%rbp), %rdi
	call	printStr
	movl	%eax, -436(%rbp)
	movl	-28(%rbp), %eax
	negl	%eax
	movl	%eax, -440(%rbp)
	movl    -440(%rbp), %edi
	call	printInt
	movl	%eax, -444(%rbp)
	movq	$.LC16, -452(%rbp)
	movq    -452(%rbp), %rdi
	call	printStr
	movl	%eax, -456(%rbp)
	movl	-32(%rbp), %eax
	negl	%eax
	movl	%eax, -460(%rbp)
	movl    -460(%rbp), %edi
	call	printInt
	movl	%eax, -464(%rbp)
	movq	$.LC17, -472(%rbp)
	movq    -472(%rbp), %rdi
	call	printStr
	movl	%eax, -476(%rbp)
	incl	-20(%rbp)
	movl    -20(%rbp), %edi
	call	testIncDec
	movq	$.LC18, -484(%rbp)
	movq    -484(%rbp), %rdi
	call	printStr
	movl	%eax, -488(%rbp)
	movl    -20(%rbp), %edi
	call	printInt
	movl	%eax, -492(%rbp)
	movq	$.LC19, -500(%rbp)
	movq    -500(%rbp), %rdi
	call	printStr
	movl	%eax, -504(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -508(%rbp)
	incl	-20(%rbp)
	movl    -508(%rbp), %edi
	call	testIncDec
	movq	$.LC20, -516(%rbp)
	movq    -516(%rbp), %rdi
	call	printStr
	movl	%eax, -520(%rbp)
	movl    -20(%rbp), %edi
	call	printInt
	movl	%eax, -524(%rbp)
	movq	$.LC21, -532(%rbp)
	movq    -532(%rbp), %rdi
	call	printStr
	movl	%eax, -536(%rbp)
	decl	-20(%rbp)
	movl    -20(%rbp), %edi
	call	testIncDec
	movq	$.LC22, -544(%rbp)
	movq    -544(%rbp), %rdi
	call	printStr
	movl	%eax, -548(%rbp)
	movl    -20(%rbp), %edi
	call	printInt
	movl	%eax, -552(%rbp)
	movq	$.LC23, -560(%rbp)
	movq    -560(%rbp), %rdi
	call	printStr
	movl	%eax, -564(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -568(%rbp)
	decl	-20(%rbp)
	movl    -568(%rbp), %edi
	call	testIncDec
	movq	$.LC24, -576(%rbp)
	movq    -576(%rbp), %rdi
	call	printStr
	movl	%eax, -580(%rbp)
	movl    -20(%rbp), %edi
	call	printInt
	movl	%eax, -584(%rbp)
	movq	$.LC25, -592(%rbp)
	movq    -592(%rbp), %rdi
	call	printStr
	movl	%eax, -596(%rbp)
	movl	$0, -600(%rbp)
	movl	-600(%rbp), %eax
.LFE1:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
