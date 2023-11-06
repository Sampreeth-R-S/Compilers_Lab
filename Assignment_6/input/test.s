	.file	"./input/test.c"

#	Allocation of function variables and temporaries on the stack:

#	testIncDec
#	n: -8
#	printFlt: -28
#	printStr: -12
#	t1: -20
#	t2: -24
#	t3: -32
#	main
#	arr: -760
#	global_var__15: -124
#	n1: -24
#	n10: -408
#	n11: -464
#	n12: -512
#	n13: -560
#	n2: -32
#	n3: -40
#	n4: -48
#	n5: -248
#	n6: -264
#	n7: -280
#	n8: -296
#	n9: -312
#	printFlt: -188
#	printInt: -144
#	printStr: -4
#	ptr: -1020
#	t10: -88
#	t100: -772
#	t101: -780
#	t102: -788
#	t103: -792
#	t104: -796
#	t105: -804
#	t106: -812
#	t107: -816
#	t108: -820
#	t109: -828
#	t11: -96
#	t110: -836
#	t111: -840
#	t112: -844
#	t113: -852
#	t114: -860
#	t115: -864
#	t116: -868
#	t117: -876
#	t118: -884
#	t119: -892
#	t12: -104
#	t120: -896
#	t121: -900
#	t122: -904
#	t123: -912
#	t124: -916
#	t125: -924
#	t126: -928
#	t127: -932
#	t128: -936
#	t129: -944
#	t13: -112
#	t130: -948
#	t131: -956
#	t132: -960
#	t133: -964
#	t134: -968
#	t135: -976
#	t136: -980
#	t137: -988
#	t138: -992
#	t139: -996
#	t14: -120
#	t140: -1000
#	t141: -1008
#	t142: -1012
#	t143: -1028
#	t144: -1036
#	t145: -1040
#	t146: -1048
#	t147: -1052
#	t148: -1060
#	t149: -1064
#	t150: -1072
#	t151: -1076
#	t152: -1080
#	t153: -1088
#	t154: -1092
#	t155: -1096
#	t16: -128
#	t17: -136
#	t18: -140
#	t19: -148
#	t20: -156
#	t21: -160
#	t22: -168
#	t23: -172
#	t24: -180
#	t25: -184
#	t26: -192
#	t27: -200
#	t28: -204
#	t29: -208
#	t30: -216
#	t31: -220
#	t32: -224
#	t33: -232
#	t34: -236
#	t35: -240
#	t36: -256
#	t37: -272
#	t38: -288
#	t39: -304
#	t4: -12
#	t40: -320
#	t41: -328
#	t42: -332
#	t43: -336
#	t44: -344
#	t45: -348
#	t46: -352
#	t47: -360
#	t48: -364
#	t49: -368
#	t5: -16
#	t50: -376
#	t51: -380
#	t52: -384
#	t53: -392
#	t54: -396
#	t55: -400
#	t56: -416
#	t57: -424
#	t58: -432
#	t59: -440
#	t6: -56
#	t60: -448
#	t61: -456
#	t62: -472
#	t63: -480
#	t64: -488
#	t65: -496
#	t66: -504
#	t67: -520
#	t68: -528
#	t69: -536
#	t7: -64
#	t70: -544
#	t71: -552
#	t72: -568
#	t73: -576
#	t74: -584
#	t75: -592
#	t76: -600
#	t77: -608
#	t78: -616
#	t79: -620
#	t8: -72
#	t80: -624
#	t81: -632
#	t82: -636
#	t83: -640
#	t84: -648
#	t85: -652
#	t86: -656
#	t87: -664
#	t88: -668
#	t89: -672
#	t9: -80
#	t90: -680
#	t91: -684
#	t92: -692
#	t93: -696
#	t94: -704
#	t95: -708
#	t96: -716
#	t97: -720
#	t98: -764
#	t99: -768

	.section	.rodata
.LC0:
	.string	"Value passed to function = "
.LC1:
	.string	"\n#### TEST 1 (Arithmetic operators) ####"
.LC2:
	.string	"\nglobal_var = "
.LC3:
	.string	"\n"
.LC4:
	.string	"\n"
.LC5:
	.string	"\nn1 = "
.LC6:
	.string	"\nn2 = "
.LC7:
	.string	"\nn3 = "
.LC8:
	.string	"\nn4 = "
.LC9:
	.string	"\nn1 + n2 = "
.LC10:
	.string	"\nn1 - n2 = "
.LC11:
	.string	"\nn1 * n2 = "
.LC12:
	.string	"\nn1 / n2 = "
.LC13:
	.string	"\nn1 % n2 = "
.LC14:
	.string	"\n-n1 + n2 - n3 + n4 + 10 = "
.LC15:
	.string	"\nn1 * n2 / n3 + n4 - 10 = "
.LC16:
	.string	"\nn1 + n2 * n3 / n4 - 0 = "
.LC17:
	.string	"\n(n1 + n2) * (n3 / n4) - 15 = "
.LC18:
	.string	"\n-n3 = "
.LC19:
	.string	"\n-n4 = "
.LC20:
	.string	"\narr[0] = "
.LC21:
	.string	"\narr[1] = "
.LC22:
	.string	"\narr[2] = "
.LC23:
	.string	"\narr[3] = "
.LC24:
	.string	"\n*ptr = "
.LC25:
	.string	"\n\n"
.LC26:
	.string	"global_var = "
.LC27:
	.string	"\n"

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
t14:
	.float	10
	.data
n5:
	.float	10
	.data
t36:
	.float	10
	.data
n6:
	.float	10
	.data
t37:
	.float	10
	.data
n7:
	.float	10
	.data
t38:
	.float	10
	.data
n8:
	.float	10
	.data
t39:
	.float	10
	.data
n9:
	.float	10
	.data
t40:
	.float	10
	.data
n10:
	.float	10
	.data
t56:
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
n11:
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
n12:
	.float	10
	.data
t67:
	.float	10
	.data
t68:
	.float	10
	.data
t69:
	.float	10
	.data
t70:
	.float	10
	.data
t71:
	.float	10
	.data
n13:
	.float	10
	.data
t72:
	.float	10
	.data
t73:
	.float	10
	.data
t74:
	.float	10
	.data
t75:
	.float	10
	.data
t76:
	.float	10
	.data
t77:
	.float	10
	.data
t92:
	.float	10
	.data
t96:
	.float	10
	.data
t101:
	.float	10
	.data
t102:
	.float	10
	.data
t105:
	.float	10
	.data
t106:
	.float	10
	.data
t109:
	.float	10
	.data
t110:
	.float	10
	.data
t113:
	.float	10
	.data
t114:
	.float	10
	.data
t117:
	.float	10
	.data
t118:
	.float	10
	.data
t123:
	.float	10
	.data
t129:
	.float	10
	.data
t135:
	.float	10
	.data
t141:
	.float	10
	.data
t146:
	.float	10
	.globl  global_var
	.data   
	.align  4
	.type   global_var, @object
	.size   global_var, 4
global_var:
	.long   0
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
	subq	$1096, %rsp
	movq	$.LC1, -12(%rbp)
	movq    -12(%rbp), %rdi
	call	printStr
	movl	%eax, -16(%rbp)
	movss	f0, %xmm0
	movss	%xmm0, t6
	movss	t6, %xmm0
	movss	%xmm0, n1
	movss	f1, %xmm0
	movss	%xmm0, t8
	movss	t8, %xmm0
	movss	%xmm0, n2
	movss	f2, %xmm0
	movss	%xmm0, t10
	movss	t10, %xmm0
	movss	%xmm0, n3
	movss	f3, %xmm0
	movss	%xmm0, t12
	movss	t12, %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, t13
	movss	t13, %xmm0
	movss	%xmm0, n4
	movl	$1, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, -124(%rbp)
	movq	$.LC2, -136(%rbp)
	movq    -136(%rbp), %rdi
	call	printStr
	movl	%eax, -140(%rbp)
	movl    -124(%rbp), %edi
	call	printInt
	movl	%eax, -148(%rbp)
	movq	$.LC3, -156(%rbp)
	movq    -156(%rbp), %rdi
	call	printStr
	movl	%eax, -160(%rbp)
	movq	$.LC4, -168(%rbp)
	movq    -168(%rbp), %rdi
	call	printStr
	movl	%eax, -172(%rbp)
	movq	$.LC5, -180(%rbp)
	movq    -180(%rbp), %rdi
	call	printStr
	movl	%eax, -184(%rbp)
	movss   	n1, %xmm0
	call	printFlt
	movl	%eax, -192(%rbp)
	movq	$.LC6, -200(%rbp)
	movq    -200(%rbp), %rdi
	call	printStr
	movl	%eax, -204(%rbp)
	movss   	n2, %xmm0
	call	printFlt
	movl	%eax, -208(%rbp)
	movq	$.LC7, -216(%rbp)
	movq    -216(%rbp), %rdi
	call	printStr
	movl	%eax, -220(%rbp)
	movss   	n3, %xmm0
	call	printFlt
	movl	%eax, -224(%rbp)
	movq	$.LC8, -232(%rbp)
	movq    -232(%rbp), %rdi
	call	printStr
	movl	%eax, -236(%rbp)
	movss   	n4, %xmm0
	call	printFlt
	movl	%eax, -240(%rbp)
	movss	n1, %xmm0
	addss	n2, %xmm0
	movss	%xmm0, t36
	movss	t36, %xmm0
	movss	%xmm0, n5
	movss	n1, %xmm0
	subss	n2, %xmm0
	movss	%xmm0, t37
	movss	t37, %xmm0
	movss	%xmm0, n6
	movss	n1, %xmm0
	mulss	n2, %xmm0
	movss	%xmm0, t38
	movss	t38, %xmm0
	movss	%xmm0, n7
	movss	n1, %xmm0
	divss	n2, %xmm0
	movss	%xmm0, t39
	movss	t39, %xmm0
	movss	%xmm0, n8
	movss	f4, %xmm0
	movss	%xmm0, t40
	movss	t40, %xmm0
	movss	%xmm0, n9
	movq	$.LC9, -328(%rbp)
	movq    -328(%rbp), %rdi
	call	printStr
	movl	%eax, -332(%rbp)
	movss   	n5, %xmm0
	call	printFlt
	movl	%eax, -336(%rbp)
	movq	$.LC10, -344(%rbp)
	movq    -344(%rbp), %rdi
	call	printStr
	movl	%eax, -348(%rbp)
	movss   	n6, %xmm0
	call	printFlt
	movl	%eax, -352(%rbp)
	movq	$.LC11, -360(%rbp)
	movq    -360(%rbp), %rdi
	call	printStr
	movl	%eax, -364(%rbp)
	movss   	n7, %xmm0
	call	printFlt
	movl	%eax, -368(%rbp)
	movq	$.LC12, -376(%rbp)
	movq    -376(%rbp), %rdi
	call	printStr
	movl	%eax, -380(%rbp)
	movss   	n8, %xmm0
	call	printFlt
	movl	%eax, -384(%rbp)
	movq	$.LC13, -392(%rbp)
	movq    -392(%rbp), %rdi
	call	printStr
	movl	%eax, -396(%rbp)
	movss   	n9, %xmm0
	call	printFlt
	movl	%eax, -400(%rbp)
	movss	n1, %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, t56
	movss	t56, %xmm0
	addss	n2, %xmm0
	movss	%xmm0, t57
	movss	t57, %xmm0
	subss	n3, %xmm0
	movss	%xmm0, t58
	movss	t58, %xmm0
	addss	n4, %xmm0
	movss	%xmm0, t59
	movss	f5, %xmm0
	movss	%xmm0, t60
	movss	t59, %xmm0
	addss	t60, %xmm0
	movss	%xmm0, t61
	movss	t61, %xmm0
	movss	%xmm0, n10
	movss	n1, %xmm0
	mulss	n2, %xmm0
	movss	%xmm0, t62
	movss	t62, %xmm0
	divss	n3, %xmm0
	movss	%xmm0, t63
	movss	t63, %xmm0
	addss	n4, %xmm0
	movss	%xmm0, t64
	movss	f6, %xmm0
	movss	%xmm0, t65
	movss	t64, %xmm0
	subss	t65, %xmm0
	movss	%xmm0, t66
	movss	t66, %xmm0
	movss	%xmm0, n11
	movss	n2, %xmm0
	mulss	n3, %xmm0
	movss	%xmm0, t67
	movss	t67, %xmm0
	divss	n4, %xmm0
	movss	%xmm0, t68
	movss	n1, %xmm0
	addss	t68, %xmm0
	movss	%xmm0, t69
	movss	f7, %xmm0
	movss	%xmm0, t70
	movss	t69, %xmm0
	subss	t70, %xmm0
	movss	%xmm0, t71
	movss	t71, %xmm0
	movss	%xmm0, n12
	movss	n1, %xmm0
	addss	n2, %xmm0
	movss	%xmm0, t72
	movss	n3, %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, t73
	movss	t73, %xmm0
	divss	n4, %xmm0
	movss	%xmm0, t74
	movss	t72, %xmm0
	mulss	t74, %xmm0
	movss	%xmm0, t75
	movss	f8, %xmm0
	movss	%xmm0, t76
	movss	t75, %xmm0
	subss	t76, %xmm0
	movss	%xmm0, t77
	movss	t77, %xmm0
	movss	%xmm0, n13
	movq	$.LC14, -616(%rbp)
	movq    -616(%rbp), %rdi
	call	printStr
	movl	%eax, -620(%rbp)
	movss   	n10, %xmm0
	call	printFlt
	movl	%eax, -624(%rbp)
	movq	$.LC15, -632(%rbp)
	movq    -632(%rbp), %rdi
	call	printStr
	movl	%eax, -636(%rbp)
	movss   	n11, %xmm0
	call	printFlt
	movl	%eax, -640(%rbp)
	movq	$.LC16, -648(%rbp)
	movq    -648(%rbp), %rdi
	call	printStr
	movl	%eax, -652(%rbp)
	movss   	n12, %xmm0
	call	printFlt
	movl	%eax, -656(%rbp)
	movq	$.LC17, -664(%rbp)
	movq    -664(%rbp), %rdi
	call	printStr
	movl	%eax, -668(%rbp)
	movss   	n13, %xmm0
	call	printFlt
	movl	%eax, -672(%rbp)
	movq	$.LC18, -680(%rbp)
	movq    -680(%rbp), %rdi
	call	printStr
	movl	%eax, -684(%rbp)
	movss	n3, %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, t92
	movss   	t92, %xmm0
	call	printFlt
	movl	%eax, -696(%rbp)
	movq	$.LC19, -704(%rbp)
	movq    -704(%rbp), %rdi
	call	printStr
	movl	%eax, -708(%rbp)
	movss	n4, %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, t96
	movss   	t96, %xmm0
	call	printFlt
	movl	%eax, -720(%rbp)
	movl	$5, -764(%rbp)
	movl	$0, -768(%rbp)
	movl	-768(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -772(%rbp)
	movss	f9, %xmm0
	movss	%xmm0, t101
	movl    -772(%rbp), %eax
	cltq    
	movss   t101, %xmm0
	movss   %xmm0, -760(%rbp, %rax, 1)
	movl	$1, -792(%rbp)
	movl	-792(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -796(%rbp)
	movss	f10, %xmm0
	movss	%xmm0, t105
	movl    -796(%rbp), %eax
	cltq    
	movss   t105, %xmm0
	movss   %xmm0, -760(%rbp, %rax, 1)
	movl	$2, -816(%rbp)
	movl	-816(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -820(%rbp)
	movss	f11, %xmm0
	movss	%xmm0, t109
	movl    -820(%rbp), %eax
	cltq    
	movss   t109, %xmm0
	movss   %xmm0, -760(%rbp, %rax, 1)
	movl	$3, -840(%rbp)
	movl	-840(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -844(%rbp)
	movss	f12, %xmm0
	movss	%xmm0, t113
	movl    -844(%rbp), %eax
	cltq    
	movss   t113, %xmm0
	movss   %xmm0, -760(%rbp, %rax, 1)
	movl	$4, -864(%rbp)
	movl	-864(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -868(%rbp)
	movss	f13, %xmm0
	movss	%xmm0, t117
	movl    -868(%rbp), %eax
	cltq    
	movss   t117, %xmm0
	movss   %xmm0, -760(%rbp, %rax, 1)
	movq	$.LC20, -892(%rbp)
	movq    -892(%rbp), %rdi
	call	printStr
	movl	%eax, -896(%rbp)
	movl	$0, -900(%rbp)
	movl	-900(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -904(%rbp)
	movl    -904(%rbp), %eax
	cltq    
	movss   -760(%rbp, %rax, 1), %xmm0
	movss   %xmm0, t123
	movss   	t123, %xmm0
	call	printFlt
	movl	%eax, -916(%rbp)
	movq	$.LC21, -924(%rbp)
	movq    -924(%rbp), %rdi
	call	printStr
	movl	%eax, -928(%rbp)
	movl	$1, -932(%rbp)
	movl	-932(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -936(%rbp)
	movl    -936(%rbp), %eax
	cltq    
	movss   -760(%rbp, %rax, 1), %xmm0
	movss   %xmm0, t129
	movss   	t129, %xmm0
	call	printFlt
	movl	%eax, -948(%rbp)
	movq	$.LC22, -956(%rbp)
	movq    -956(%rbp), %rdi
	call	printStr
	movl	%eax, -960(%rbp)
	movl	$2, -964(%rbp)
	movl	-964(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -968(%rbp)
	movl    -968(%rbp), %eax
	cltq    
	movss   -760(%rbp, %rax, 1), %xmm0
	movss   %xmm0, t135
	movss   	t135, %xmm0
	call	printFlt
	movl	%eax, -980(%rbp)
	movq	$.LC23, -988(%rbp)
	movq    -988(%rbp), %rdi
	call	printStr
	movl	%eax, -992(%rbp)
	movl	$3, -996(%rbp)
	movl	-996(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -1000(%rbp)
	movl    -1000(%rbp), %eax
	cltq    
	movss   -760(%rbp, %rax, 1), %xmm0
	movss   %xmm0, t141
	movss   	t141, %xmm0
	call	printFlt
	movl	%eax, -1012(%rbp)
	leaq	n10, %rax
	movq	%rax, -1028(%rbp)
	movq	-1028(%rbp), %rax
	movq	%rax, -1020(%rbp)
	movq	$.LC24, -1036(%rbp)
	movq    -1036(%rbp), %rdi
	call	printStr
	movl	%eax, -1040(%rbp)
	movq	-1020(%rbp), %rax
	movss	(%rax), %xmm0
	movss	%xmm0, t146
	movss   	t146, %xmm0
	call	printFlt
	movl	%eax, -1052(%rbp)
	movq	$.LC25, -1060(%rbp)
	movq    -1060(%rbp), %rdi
	call	printStr
	movl	%eax, -1064(%rbp)
	movq	$.LC26, -1072(%rbp)
	movq    -1072(%rbp), %rdi
	call	printStr
	movl	%eax, -1076(%rbp)
	movl    -124(%rbp), %edi
	call	printInt
	movl	%eax, -1080(%rbp)
	movq	$.LC27, -1088(%rbp)
	movq    -1088(%rbp), %rdi
	call	printStr
	movl	%eax, -1092(%rbp)
	movl	$0, -1096(%rbp)
	movl	-1096(%rbp), %eax
.LFE1:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
