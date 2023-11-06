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
	movss   	%xmm0, -8(%rbp)
	movq	$.LC0, -20(%rbp)
	movq    -20(%rbp), %rdi
	call	printStr
	movl	%eax, -24(%rbp)
	movss   	-8(%rbp), %xmm0
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
	movss	%xmm0, -56(%rbp)
	movss	f0, %xmm0
	movss	%xmm0, -56(%rbp)
	movss	-56(%rbp), %xmm0
	movss	%xmm0, -24(%rbp)
	movss	f1, %xmm0
	movss	%xmm0, -72(%rbp)
	movss	f1, %xmm0
	movss	%xmm0, -72(%rbp)
	movss	-72(%rbp), %xmm0
	movss	%xmm0, -32(%rbp)
	movss	f2, %xmm0
	movss	%xmm0, -88(%rbp)
	movss	f2, %xmm0
	movss	%xmm0, -88(%rbp)
	movss	-88(%rbp), %xmm0
	movss	%xmm0, -40(%rbp)
	movss	f3, %xmm0
	movss	%xmm0, -104(%rbp)
	movss	f3, %xmm0
	movss	%xmm0, -104(%rbp)
	movss	-104(%rbp), %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, -112(%rbp)
	movss	-112(%rbp), %xmm0
	movss	%xmm0, -48(%rbp)
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
	movss   	-24(%rbp), %xmm0
	call	printFlt
	movl	%eax, -192(%rbp)
	movq	$.LC6, -200(%rbp)
	movq    -200(%rbp), %rdi
	call	printStr
	movl	%eax, -204(%rbp)
	movss   	-32(%rbp), %xmm0
	call	printFlt
	movl	%eax, -208(%rbp)
	movq	$.LC7, -216(%rbp)
	movq    -216(%rbp), %rdi
	call	printStr
	movl	%eax, -220(%rbp)
	movss   	-40(%rbp), %xmm0
	call	printFlt
	movl	%eax, -224(%rbp)
	movq	$.LC8, -232(%rbp)
	movq    -232(%rbp), %rdi
	call	printStr
	movl	%eax, -236(%rbp)
	movss   	-48(%rbp), %xmm0
	call	printFlt
	movl	%eax, -240(%rbp)
	movss	-24(%rbp), %xmm0
	addss	-32(%rbp), %xmm0
	movss	%xmm0, -256(%rbp)
	movss	-256(%rbp), %xmm0
	movss	%xmm0, -248(%rbp)
	movss	-24(%rbp), %xmm0
	subss	-32(%rbp), %xmm0
	movss	%xmm0, -272(%rbp)
	movss	-272(%rbp), %xmm0
	movss	%xmm0, -264(%rbp)
	movss	-24(%rbp), %xmm0
	mulss	-32(%rbp), %xmm0
	movss	%xmm0, -288(%rbp)
	movss	-288(%rbp), %xmm0
	movss	%xmm0, -280(%rbp)
	movss	-24(%rbp), %xmm0
	divss	-32(%rbp), %xmm0
	movss	%xmm0, -304(%rbp)
	movss	-304(%rbp), %xmm0
	movss	%xmm0, -296(%rbp)
	movss	f4, %xmm0
	movss	%xmm0, -320(%rbp)
	movss	f4, %xmm0
	movss	%xmm0, -320(%rbp)
	movss	-320(%rbp), %xmm0
	movss	%xmm0, -312(%rbp)
	movq	$.LC9, -328(%rbp)
	movq    -328(%rbp), %rdi
	call	printStr
	movl	%eax, -332(%rbp)
	movss   	-248(%rbp), %xmm0
	call	printFlt
	movl	%eax, -336(%rbp)
	movq	$.LC10, -344(%rbp)
	movq    -344(%rbp), %rdi
	call	printStr
	movl	%eax, -348(%rbp)
	movss   	-264(%rbp), %xmm0
	call	printFlt
	movl	%eax, -352(%rbp)
	movq	$.LC11, -360(%rbp)
	movq    -360(%rbp), %rdi
	call	printStr
	movl	%eax, -364(%rbp)
	movss   	-280(%rbp), %xmm0
	call	printFlt
	movl	%eax, -368(%rbp)
	movq	$.LC12, -376(%rbp)
	movq    -376(%rbp), %rdi
	call	printStr
	movl	%eax, -380(%rbp)
	movss   	-296(%rbp), %xmm0
	call	printFlt
	movl	%eax, -384(%rbp)
	movq	$.LC13, -392(%rbp)
	movq    -392(%rbp), %rdi
	call	printStr
	movl	%eax, -396(%rbp)
	movss   	-312(%rbp), %xmm0
	call	printFlt
	movl	%eax, -400(%rbp)
	movss	-24(%rbp), %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, -416(%rbp)
	movss	-416(%rbp), %xmm0
	addss	-32(%rbp), %xmm0
	movss	%xmm0, -424(%rbp)
	movss	-424(%rbp), %xmm0
	subss	-40(%rbp), %xmm0
	movss	%xmm0, -432(%rbp)
	movss	-432(%rbp), %xmm0
	addss	-48(%rbp), %xmm0
	movss	%xmm0, -440(%rbp)
	movss	f5, %xmm0
	movss	%xmm0, -448(%rbp)
	movss	f5, %xmm0
	movss	%xmm0, -448(%rbp)
	movss	-440(%rbp), %xmm0
	addss	-448(%rbp), %xmm0
	movss	%xmm0, -456(%rbp)
	movss	-456(%rbp), %xmm0
	movss	%xmm0, -408(%rbp)
	movss	-24(%rbp), %xmm0
	mulss	-32(%rbp), %xmm0
	movss	%xmm0, -472(%rbp)
	movss	-472(%rbp), %xmm0
	divss	-40(%rbp), %xmm0
	movss	%xmm0, -480(%rbp)
	movss	-480(%rbp), %xmm0
	addss	-48(%rbp), %xmm0
	movss	%xmm0, -488(%rbp)
	movss	f6, %xmm0
	movss	%xmm0, -496(%rbp)
	movss	f6, %xmm0
	movss	%xmm0, -496(%rbp)
	movss	-488(%rbp), %xmm0
	subss	-496(%rbp), %xmm0
	movss	%xmm0, -504(%rbp)
	movss	-504(%rbp), %xmm0
	movss	%xmm0, -464(%rbp)
	movss	-32(%rbp), %xmm0
	mulss	-40(%rbp), %xmm0
	movss	%xmm0, -520(%rbp)
	movss	-520(%rbp), %xmm0
	divss	-48(%rbp), %xmm0
	movss	%xmm0, -528(%rbp)
	movss	-24(%rbp), %xmm0
	addss	-528(%rbp), %xmm0
	movss	%xmm0, -536(%rbp)
	movss	f7, %xmm0
	movss	%xmm0, -544(%rbp)
	movss	f7, %xmm0
	movss	%xmm0, -544(%rbp)
	movss	-536(%rbp), %xmm0
	subss	-544(%rbp), %xmm0
	movss	%xmm0, -552(%rbp)
	movss	-552(%rbp), %xmm0
	movss	%xmm0, -512(%rbp)
	movss	-24(%rbp), %xmm0
	addss	-32(%rbp), %xmm0
	movss	%xmm0, -568(%rbp)
	movss	-40(%rbp), %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, -576(%rbp)
	movss	-576(%rbp), %xmm0
	divss	-48(%rbp), %xmm0
	movss	%xmm0, -584(%rbp)
	movss	-568(%rbp), %xmm0
	mulss	-584(%rbp), %xmm0
	movss	%xmm0, -592(%rbp)
	movss	f8, %xmm0
	movss	%xmm0, -600(%rbp)
	movss	f8, %xmm0
	movss	%xmm0, -600(%rbp)
	movss	-592(%rbp), %xmm0
	subss	-600(%rbp), %xmm0
	movss	%xmm0, -608(%rbp)
	movss	-608(%rbp), %xmm0
	movss	%xmm0, -560(%rbp)
	movq	$.LC14, -616(%rbp)
	movq    -616(%rbp), %rdi
	call	printStr
	movl	%eax, -620(%rbp)
	movss   	-408(%rbp), %xmm0
	call	printFlt
	movl	%eax, -624(%rbp)
	movq	$.LC15, -632(%rbp)
	movq    -632(%rbp), %rdi
	call	printStr
	movl	%eax, -636(%rbp)
	movss   	-464(%rbp), %xmm0
	call	printFlt
	movl	%eax, -640(%rbp)
	movq	$.LC16, -648(%rbp)
	movq    -648(%rbp), %rdi
	call	printStr
	movl	%eax, -652(%rbp)
	movss   	-512(%rbp), %xmm0
	call	printFlt
	movl	%eax, -656(%rbp)
	movq	$.LC17, -664(%rbp)
	movq    -664(%rbp), %rdi
	call	printStr
	movl	%eax, -668(%rbp)
	movss   	-560(%rbp), %xmm0
	call	printFlt
	movl	%eax, -672(%rbp)
	movq	$.LC18, -680(%rbp)
	movq    -680(%rbp), %rdi
	call	printStr
	movl	%eax, -684(%rbp)
	movss	-40(%rbp), %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, -692(%rbp)
	movss   	-692(%rbp), %xmm0
	call	printFlt
	movl	%eax, -696(%rbp)
	movq	$.LC19, -704(%rbp)
	movq    -704(%rbp), %rdi
	call	printStr
	movl	%eax, -708(%rbp)
	movss	-48(%rbp), %xmm0
	movss f__, %xmm1
	subss	%xmm0, %xmm1
	movss	%xmm1, -716(%rbp)
	movss   	-716(%rbp), %xmm0
	call	printFlt
	movl	%eax, -720(%rbp)
	movl	$5, -764(%rbp)
	movl	$0, -768(%rbp)
	movl	-768(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -772(%rbp)
	movss	f9, %xmm0
	movss	%xmm0, -780(%rbp)
	movss	f9, %xmm0
	movss	%xmm0, -780(%rbp)
	movl    -772(%rbp), %eax
	cltq    
	movss   -780(%rbp), %xmm0
	movss   %xmm0, -760(%rbp, %rax, 1)
	movl	$1, -792(%rbp)
	movl	-792(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -796(%rbp)
	movss	f10, %xmm0
	movss	%xmm0, -804(%rbp)
	movss	f10, %xmm0
	movss	%xmm0, -804(%rbp)
	movl    -796(%rbp), %eax
	cltq    
	movss   -804(%rbp), %xmm0
	movss   %xmm0, -760(%rbp, %rax, 1)
	movl	$2, -816(%rbp)
	movl	-816(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -820(%rbp)
	movss	f11, %xmm0
	movss	%xmm0, -828(%rbp)
	movss	f11, %xmm0
	movss	%xmm0, -828(%rbp)
	movl    -820(%rbp), %eax
	cltq    
	movss   -828(%rbp), %xmm0
	movss   %xmm0, -760(%rbp, %rax, 1)
	movl	$3, -840(%rbp)
	movl	-840(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -844(%rbp)
	movss	f12, %xmm0
	movss	%xmm0, -852(%rbp)
	movss	f12, %xmm0
	movss	%xmm0, -852(%rbp)
	movl    -844(%rbp), %eax
	cltq    
	movss   -852(%rbp), %xmm0
	movss   %xmm0, -760(%rbp, %rax, 1)
	movl	$4, -864(%rbp)
	movl	-864(%rbp), %eax
	imull	$8, %eax
	movl	%eax, -868(%rbp)
	movss	f13, %xmm0
	movss	%xmm0, -876(%rbp)
	movss	f13, %xmm0
	movss	%xmm0, -876(%rbp)
	movl    -868(%rbp), %eax
	cltq    
	movss   -876(%rbp), %xmm0
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
	movss   %xmm0, -912(%rbp)
	movss   	-912(%rbp), %xmm0
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
	movss   %xmm0, -944(%rbp)
	movss   	-944(%rbp), %xmm0
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
	movss   %xmm0, -976(%rbp)
	movss   	-976(%rbp), %xmm0
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
	movss   %xmm0, -1008(%rbp)
	movss   	-1008(%rbp), %xmm0
	call	printFlt
	movl	%eax, -1012(%rbp)
	leaq	-408(%rbp), %rax
	movq	%rax, -1028(%rbp)
	movq	-1028(%rbp), %rax
	movq	%rax, -1020(%rbp)
	movq	$.LC24, -1036(%rbp)
	movq    -1036(%rbp), %rdi
	call	printStr
	movl	%eax, -1040(%rbp)
	movq	-1020(%rbp), %rax
	movss	(%rax), %xmm0
	movss	%xmm0, -1048(%rbp)
	movss   	-1048(%rbp), %xmm0
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
