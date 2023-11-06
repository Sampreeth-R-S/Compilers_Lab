	.file	"./input/test.c"

#	Allocation of function variables and temporaries on the stack:

#	testIncDec
#	n: -8
#	printFlt: -28
#	printStr: -12
#	t0: -20
#	t1: -24
#	t2: -32
#	main
#	arr: -708
#	n1: -24
#	n10: -356
#	n11: -412
#	n12: -460
#	n13: -508
#	n2: -32
#	n3: -40
#	n4: -48
#	n5: -196
#	n6: -212
#	n7: -228
#	n8: -244
#	n9: -260
#	printFlt: -136
#	printStr: -4
#	ptr: -968
#	t10: -96
#	t100: -784
#	t101: -788
#	t102: -792
#	t103: -800
#	t104: -808
#	t105: -812
#	t106: -816
#	t107: -824
#	t108: -832
#	t109: -840
#	t11: -104
#	t110: -844
#	t111: -848
#	t112: -852
#	t113: -860
#	t114: -864
#	t115: -872
#	t116: -876
#	t117: -880
#	t118: -884
#	t119: -892
#	t12: -112
#	t120: -896
#	t121: -904
#	t122: -908
#	t123: -912
#	t124: -916
#	t125: -924
#	t126: -928
#	t127: -936
#	t128: -940
#	t129: -944
#	t13: -120
#	t130: -948
#	t131: -956
#	t132: -960
#	t133: -976
#	t134: -984
#	t135: -988
#	t136: -996
#	t137: -1000
#	t138: -1008
#	t139: -1012
#	t14: -128
#	t140: -1016
#	t15: -132
#	t16: -140
#	t17: -148
#	t18: -152
#	t19: -156
#	t20: -164
#	t21: -168
#	t22: -172
#	t23: -180
#	t24: -184
#	t25: -188
#	t26: -204
#	t27: -220
#	t28: -236
#	t29: -252
#	t3: -12
#	t30: -268
#	t31: -276
#	t32: -280
#	t33: -284
#	t34: -292
#	t35: -296
#	t36: -300
#	t37: -308
#	t38: -312
#	t39: -316
#	t4: -16
#	t40: -324
#	t41: -328
#	t42: -332
#	t43: -340
#	t44: -344
#	t45: -348
#	t46: -364
#	t47: -372
#	t48: -380
#	t49: -388
#	t5: -56
#	t50: -396
#	t51: -404
#	t52: -420
#	t53: -428
#	t54: -436
#	t55: -444
#	t56: -452
#	t57: -468
#	t58: -476
#	t59: -484
#	t6: -64
#	t60: -492
#	t61: -500
#	t62: -516
#	t63: -524
#	t64: -532
#	t65: -540
#	t66: -548
#	t67: -556
#	t68: -564
#	t69: -568
#	t7: -72
#	t70: -572
#	t71: -580
#	t72: -584
#	t73: -588
#	t74: -596
#	t75: -600
#	t76: -604
#	t77: -612
#	t78: -616
#	t79: -620
#	t8: -80
#	t80: -628
#	t81: -632
#	t82: -640
#	t83: -644
#	t84: -652
#	t85: -656
#	t86: -664
#	t87: -668
#	t88: -712
#	t89: -716
#	t9: -88
#	t90: -720
#	t91: -728
#	t92: -736
#	t93: -740
#	t94: -744
#	t95: -752
#	t96: -760
#	t97: -764
#	t98: -768
#	t99: -776

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
	.string	"\narr[0] = "
.LC18:
	.string	"\narr[1] = "
.LC19:
	.string	"\narr[2] = "
.LC20:
	.string	"\narr[3] = "
.LC21:
	.string	"\n*ptr = "
.LC22:
	.string	"\n\n"

.data
f0:
	.float	300
f1:
	.float	16
f2:
	.float	7
f3:
	.float	22
f4:
	.float	0.1
f5:
	.float	10
f6:
	.float	10
f7:
	.float	0
f8:
	.float	15
f9:
	.float	0
f10:
	.float	1
f11:
	.float	2
f12:
	.float	3
f13:
	.float	4

.data
	f__:
	.float	0.0
	.data
n:
	.float	10
	.data
n1:
	.float	10
	.data
n2:
	.float	10
	.data
n3:
	.float	10
	.data
n4:
	.float	10
	.data
t5:
	.float	10
	.data
t6:
	.float	10
	.data
t7:
	.float	10
	.data
t8:
	.float	10
	.data
t9:
	.float	10
	.data
t10:
	.float	10
	.data
t11:
	.float	10
	.data
t12:
	.float	10
	.data
t13:
	.float	10
	.data
n5:
	.float	10
	.data
t26:
	.float	10
	.data
n6:
	.float	10
	.data
t27:
	.float	10
	.data
n7:
	.float	10
	.data
t28:
	.float	10
	.data
n8:
	.float	10
	.data
t29:
	.float	10
	.data
n9:
	.float	10
	.data
t30:
	.float	10
	.data
n10:
	.float	10
	.data
t46:
	.float	10
	.data
t47:
	.float	10
	.data
t48:
	.float	10
	.data
t49:
	.float	10
	.data
t50:
	.float	10
	.data
t51:
	.float	10
	.data
n11:
	.float	10
	.data
t52:
	.float	10
	.data
t53:
	.float	10
	.data
t54:
	.float	10
	.data
t55:
	.float	10
	.data
t56:
	.float	10
	.data
n12:
	.float	10
	.data
t57:
	.float	10
	.data
t58:
	.float	10
	.data
t59:
	.float	10
	.data
t60:
	.float	10
	.data
t61:
	.float	10
	.data
n13:
	.float	10
	.data
t62:
	.float	10
	.data
t63:
	.float	10
	.data
t64:
	.float	10
	.data
t65:
	.float	10
	.data
t66:
	.float	10
	.data
t67:
	.float	10
	.data
t82:
	.float	10
	.data
t86:
	.float	10
	.data
t91:
	.float	10
	.data
t92:
	.float	10
	.data
t95:
	.float	10
	.data
t96:
	.float	10
	.data
t99:
	.float	10
	.data
t100:
	.float	10
	.data
t103:
	.float	10
	.data
t104:
	.float	10
	.data
t107:
	.float	10
	.data
t108:
	.float	10
	.data
t113:
	.float	10
	.data
t119:
	.float	10
	.data
t125:
	.float	10
	.data
t131:
	.float	10
	.data
t136:
	.float	10
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
	subq	$32, %rsp
	movss   	%xmm0, n
	movq	$.LC0, -20(%rbp)
	movq    -20(%rbp), %rdi
	call	printStr
	movl	%eax, -24(%rbp)
	movss   	n, %xmm0
	call	printFlt
	movl	%eax, -32(%rbp)
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
	subq	$1016, %rsp
	movq	$.LC1, -12(%rbp)
	movq    -12(%rbp), %rdi
	call	printStr
	movl	%eax, -16(%rbp)
	movss	f0, %xmm0
	movss	%xmm0, t5
	movss	t5, %xmm0
	movss	%xmm0, n1
	movss	f1, %xmm0
	movss	%xmm0, t7
	movss	t7, %xmm0
	movss	%xmm0, n2
	movss	f2, %xmm0
	movss	%xmm0, t9
	movss	t9, %xmm0
	movss	%xmm0, n3
	movss	f3, %xmm0
	movss	%xmm0, t11
	movss	t11, %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, t12
	movss	t12, %xmm0
	movss	%xmm0, n4
	movq	$.LC2, -128(%rbp)
	movq    -128(%rbp), %rdi
	call	printStr
	movl	%eax, -132(%rbp)
	movss   	n1, %xmm0
	call	printFlt
	movl	%eax, -140(%rbp)
	movq	$.LC3, -148(%rbp)
	movq    -148(%rbp), %rdi
	call	printStr
	movl	%eax, -152(%rbp)
	movss   	n2, %xmm0
	call	printFlt
	movl	%eax, -156(%rbp)
	movq	$.LC4, -164(%rbp)
	movq    -164(%rbp), %rdi
	call	printStr
	movl	%eax, -168(%rbp)
	movss   	n3, %xmm0
	call	printFlt
	movl	%eax, -172(%rbp)
	movq	$.LC5, -180(%rbp)
	movq    -180(%rbp), %rdi
	call	printStr
	movl	%eax, -184(%rbp)
	movss   	n4, %xmm0
	call	printFlt
	movl	%eax, -188(%rbp)
	movss	n1, %xmm0
	addss	n2, %xmm0
	movss	%xmm0, t26
	movss	t26, %xmm0
	movss	%xmm0, n5
	movss	n1, %xmm0
	subss	n2, %xmm0
	movss	%xmm0, t27
	movss	t27, %xmm0
	movss	%xmm0, n6
	movss	n1, %xmm0
	mulss	n2, %xmm0
	movss	%xmm0, t28
	movss	t28, %xmm0
	movss	%xmm0, n7
	movss	n1, %xmm0
	divss	n2, %xmm0
	movss	%xmm0, t29
	movss	t29, %xmm0
	movss	%xmm0, n8
	movss	f4, %xmm0
	movss	%xmm0, t30
	movss	t30, %xmm0
	movss	%xmm0, n9
	movq	$.LC6, -276(%rbp)
	movq    -276(%rbp), %rdi
	call	printStr
	movl	%eax, -280(%rbp)
	movss   	n5, %xmm0
	call	printFlt
	movl	%eax, -284(%rbp)
	movq	$.LC7, -292(%rbp)
	movq    -292(%rbp), %rdi
	call	printStr
	movl	%eax, -296(%rbp)
	movss   	n6, %xmm0
	call	printFlt
	movl	%eax, -300(%rbp)
	movq	$.LC8, -308(%rbp)
	movq    -308(%rbp), %rdi
	call	printStr
	movl	%eax, -312(%rbp)
	movss   	n7, %xmm0
	call	printFlt
	movl	%eax, -316(%rbp)
	movq	$.LC9, -324(%rbp)
	movq    -324(%rbp), %rdi
	call	printStr
	movl	%eax, -328(%rbp)
	movss   	n8, %xmm0
	call	printFlt
	movl	%eax, -332(%rbp)
	movq	$.LC10, -340(%rbp)
	movq    -340(%rbp), %rdi
	call	printStr
	movl	%eax, -344(%rbp)
	movss   	n9, %xmm0
	call	printFlt
	movl	%eax, -348(%rbp)
	movss	n1, %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, t46
	movss	t46, %xmm0
	addss	n2, %xmm0
	movss	%xmm0, t47
	movss	t47, %xmm0
	subss	n3, %xmm0
	movss	%xmm0, t48
	movss	t48, %xmm0
	addss	n4, %xmm0
	movss	%xmm0, t49
	movss	f5, %xmm0
	movss	%xmm0, t50
	movss	t49, %xmm0
	addss	t50, %xmm0
	movss	%xmm0, t51
	movss	t51, %xmm0
	movss	%xmm0, n10
	movss	n1, %xmm0
	mulss	n2, %xmm0
	movss	%xmm0, t52
	movss	t52, %xmm0
	divss	n3, %xmm0
	movss	%xmm0, t53
	movss	t53, %xmm0
	addss	n4, %xmm0
	movss	%xmm0, t54
	movss	f6, %xmm0
	movss	%xmm0, t55
	movss	t54, %xmm0
	subss	t55, %xmm0
	movss	%xmm0, t56
	movss	t56, %xmm0
	movss	%xmm0, n11
	movss	n2, %xmm0
	mulss	n3, %xmm0
	movss	%xmm0, t57
	movss	t57, %xmm0
	divss	n4, %xmm0
	movss	%xmm0, t58
	movss	n1, %xmm0
	addss	t58, %xmm0
	movss	%xmm0, t59
	movss	f7, %xmm0
	movss	%xmm0, t60
	movss	t59, %xmm0
	subss	t60, %xmm0
	movss	%xmm0, t61
	movss	t61, %xmm0
	movss	%xmm0, n12
	movss	n1, %xmm0
	addss	n2, %xmm0
	movss	%xmm0, t62
	movss	n3, %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, t63
	movss	t63, %xmm0
	divss	n4, %xmm0
	movss	%xmm0, t64
	movss	t62, %xmm0
	mulss	t64, %xmm0
	movss	%xmm0, t65
	movss	f8, %xmm0
	movss	%xmm0, t66
	movss	t65, %xmm0
	subss	t66, %xmm0
	movss	%xmm0, t67
	movss	t67, %xmm0
	movss	%xmm0, n13
	movq	$.LC11, -564(%rbp)
	movq    -564(%rbp), %rdi
	call	printStr
	movl	%eax, -568(%rbp)
	movss   	n10, %xmm0
	call	printFlt
	movl	%eax, -572(%rbp)
	movq	$.LC12, -580(%rbp)
	movq    -580(%rbp), %rdi
	call	printStr
	movl	%eax, -584(%rbp)
	movss   	n11, %xmm0
	call	printFlt
	movl	%eax, -588(%rbp)
	movq	$.LC13, -596(%rbp)
	movq    -596(%rbp), %rdi
	call	printStr
	movl	%eax, -600(%rbp)
	movss   	n12, %xmm0
	call	printFlt
	movl	%eax, -604(%rbp)
	movq	$.LC14, -612(%rbp)
	movq    -612(%rbp), %rdi
	call	printStr
	movl	%eax, -616(%rbp)
	movss   	n13, %xmm0
	call	printFlt
	movl	%eax, -620(%rbp)
	movq	$.LC15, -628(%rbp)
	movq    -628(%rbp), %rdi
	call	printStr
	movl	%eax, -632(%rbp)
	movss	n3, %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, t82
	movss   	t82, %xmm0
	call	printFlt
	movl	%eax, -644(%rbp)
	movq	$.LC16, -652(%rbp)
	movq    -652(%rbp), %rdi
	call	printStr
	movl	%eax, -656(%rbp)
	movss	n4, %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, t86
	movss   	t86, %xmm0
	call	printFlt
	movl	%eax, -668(%rbp)
	movl	$5, -712(%rbp)
	movl	$0, -716(%rbp)
	movl	-716(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -720(%rbp)
	movss	f9, %xmm0
	movss	%xmm0, t91
	movl    -720(%rbp), %eax
	cltq    
	movss   t91, %xmm0
	movss   %xmm0, -708(%rbp, %rax, 1)
	movl	$1, -740(%rbp)
	movl	-740(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -744(%rbp)
	movss	f10, %xmm0
	movss	%xmm0, t95
	movl    -744(%rbp), %eax
	cltq    
	movss   t95, %xmm0
	movss   %xmm0, -708(%rbp, %rax, 1)
	movl	$2, -764(%rbp)
	movl	-764(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -768(%rbp)
	movss	f11, %xmm0
	movss	%xmm0, t99
	movl    -768(%rbp), %eax
	cltq    
	movss   t99, %xmm0
	movss   %xmm0, -708(%rbp, %rax, 1)
	movl	$3, -788(%rbp)
	movl	-788(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -792(%rbp)
	movss	f12, %xmm0
	movss	%xmm0, t103
	movl    -792(%rbp), %eax
	cltq    
	movss   t103, %xmm0
	movss   %xmm0, -708(%rbp, %rax, 1)
	movl	$4, -812(%rbp)
	movl	-812(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -816(%rbp)
	movss	f13, %xmm0
	movss	%xmm0, t107
	movl    -816(%rbp), %eax
	cltq    
	movss   t107, %xmm0
	movss   %xmm0, -708(%rbp, %rax, 1)
	movq	$.LC17, -840(%rbp)
	movq    -840(%rbp), %rdi
	call	printStr
	movl	%eax, -844(%rbp)
	movl	$0, -848(%rbp)
	movl	-848(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -852(%rbp)
	movl    -852(%rbp), %eax
	cltq    
	movss   -708(%rbp, %rax, 1), %xmm0
	movss   %xmm0, t113
	movss   	t113, %xmm0
	call	printFlt
	movl	%eax, -864(%rbp)
	movq	$.LC18, -872(%rbp)
	movq    -872(%rbp), %rdi
	call	printStr
	movl	%eax, -876(%rbp)
	movl	$1, -880(%rbp)
	movl	-880(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -884(%rbp)
	movl    -884(%rbp), %eax
	cltq    
	movss   -708(%rbp, %rax, 1), %xmm0
	movss   %xmm0, t119
	movss   	t119, %xmm0
	call	printFlt
	movl	%eax, -896(%rbp)
	movq	$.LC19, -904(%rbp)
	movq    -904(%rbp), %rdi
	call	printStr
	movl	%eax, -908(%rbp)
	movl	$2, -912(%rbp)
	movl	-912(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -916(%rbp)
	movl    -916(%rbp), %eax
	cltq    
	movss   -708(%rbp, %rax, 1), %xmm0
	movss   %xmm0, t125
	movss   	t125, %xmm0
	call	printFlt
	movl	%eax, -928(%rbp)
	movq	$.LC20, -936(%rbp)
	movq    -936(%rbp), %rdi
	call	printStr
	movl	%eax, -940(%rbp)
	movl	$3, -944(%rbp)
	movl	-944(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -948(%rbp)
	movl    -948(%rbp), %eax
	cltq    
	movss   -708(%rbp, %rax, 1), %xmm0
	movss   %xmm0, t131
	movss   	t131, %xmm0
	call	printFlt
	movl	%eax, -960(%rbp)
	leaq	n10, %rax
	movq	%rax, -976(%rbp)
	movq	-976(%rbp), %rax
	movq	%rax, -968(%rbp)
	movq	$.LC21, -984(%rbp)
	movq    -984(%rbp), %rdi
	call	printStr
	movl	%eax, -988(%rbp)
	movq	-968(%rbp), %rax
	movss	(%rax), %xmm0
	movss	%xmm0, t136
	movss   	t136, %xmm0
	call	printFlt
	movl	%eax, -1000(%rbp)
	movq	$.LC22, -1008(%rbp)
	movq    -1008(%rbp), %rdi
	call	printStr
	movl	%eax, -1012(%rbp)
	movl	$0, -1016(%rbp)
	movl	-1016(%rbp), %eax
.LFE1:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
