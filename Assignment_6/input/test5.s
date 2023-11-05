	.file	"./input/test5.c"

#	Allocation of function variables and temporaries on the stack:

#	printStr
#	s: -8
#	readInt
#	eP: -8
#	printInt
#	n: -4
#	main
#	main__0: -52
#	main__1: -56
#	main__10: -204
#	main__11: -208
#	main__12: -232
#	main__13: -236
#	main__14: -260
#	main__15: -264
#	main__16: -280
#	main__17: -284
#	main__18: -308
#	main__19: -312
#	main__2: -80
#	main__3: -84
#	main__4: -120
#	main__5: -124
#	main__6: -152
#	main__7: -156
#	main__8: -172
#	main__9: -176
#	n1: -16
#	n2: -20
#	t0: -8
#	t1: -12
#	t10: -348
#	t11: -352
#	t12: -60
#	t13: -64
#	t14: -72
#	t15: -76
#	t16: -360
#	t17: -364
#	t18: -372
#	t19: -376
#	t2: -24
#	t20: -88
#	t21: -92
#	t22: -96
#	t23: -100
#	t24: -104
#	t25: -112
#	t26: -116
#	t27: -384
#	t28: -388
#	t29: -396
#	t3: -28
#	t30: -400
#	t31: -128
#	t32: -132
#	t33: -136
#	t34: -144
#	t35: -148
#	t36: -408
#	t37: -412
#	t38: -420
#	t39: -424
#	t4: -32
#	t40: -164
#	t41: -168
#	t42: -432
#	t43: -436
#	t44: -444
#	t45: -448
#	t46: -180
#	t47: -184
#	t48: -188
#	t49: -196
#	t5: -36
#	t50: -200
#	t51: -456
#	t52: -460
#	t53: -468
#	t54: -472
#	t55: -212
#	t56: -216
#	t57: -224
#	t58: -228
#	t59: -480
#	t6: -44
#	t60: -484
#	t61: -492
#	t62: -496
#	t63: -240
#	t64: -244
#	t65: -252
#	t66: -256
#	t67: -504
#	t68: -508
#	t69: -516
#	t7: -48
#	t70: -520
#	t71: -272
#	t72: -276
#	t73: -528
#	t74: -532
#	t75: -540
#	t76: -544
#	t77: -288
#	t78: -292
#	t79: -300
#	t8: -336
#	t80: -304
#	t81: -552
#	t82: -556
#	t83: -564
#	t84: -568
#	t85: -320
#	t86: -324
#	t87: -328
#	t9: -340

	.section	.rodata
.LC0:
	.string	"\n#### TEST 7 (Conditional operators) ####\n"
.LC1:
	.string	"\nTesting == operator: "
.LC2:
	.string	"Passed"
.LC3:
	.string	"Failed"
.LC4:
	.string	"\nTesting != operator: "
.LC5:
	.string	"Passed"
.LC6:
	.string	"Failed"
.LC7:
	.string	"\nTesting < operator (strictly less): "
.LC8:
	.string	"Passed"
.LC9:
	.string	"Failed"
.LC10:
	.string	"\nTesting < operator (equality): "
.LC11:
	.string	"Failed"
.LC12:
	.string	"Passed"
.LC13:
	.string	"\nTesting <= operator (equality): "
.LC14:
	.string	"Passed"
.LC15:
	.string	"Failed"
.LC16:
	.string	"\nTesting <= operator (strictly less): "
.LC17:
	.string	"Passed"
.LC18:
	.string	"Failed"
.LC19:
	.string	"\nTesting > operator (strictly greater): "
.LC20:
	.string	"Passed"
.LC21:
	.string	"Failed"
.LC22:
	.string	"\nTesting > operator (equality): "
.LC23:
	.string	"Failed"
.LC24:
	.string	"Passed"
.LC25:
	.string	"\nTesting >= operator (equality): "
.LC26:
	.string	"Passed"
.LC27:
	.string	"Failed"
.LC28:
	.string	"\nTesting >= operator (strictly greater): "
.LC29:
	.string	"Passed"
.LC30:
	.string	"Failed"
.LC31:
	.string	"\n\n"

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
	subq	$568, %rsp
	movq	$.LC0, -8(%rbp)
	movq    -8(%rbp), %rdi
	call	printStr
	movl	%eax, -12(%rbp)
	movl	$5, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$5, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -20(%rbp)
	movq	$.LC1, -44(%rbp)
	movq    -44(%rbp), %rdi
	call	printStr
	movl	%eax, -48(%rbp)
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	je	.L1
	jmp	.L2
	jmp	.L3
.L1:
	movq	$.LC2, -336(%rbp)
	movq    -336(%rbp), %rdi
	call	printStr
	movl	%eax, -340(%rbp)
	jmp	.L3
.L2:
	movq	$.LC3, -348(%rbp)
	movq    -348(%rbp), %rdi
	call	printStr
	movl	%eax, -352(%rbp)
.L3:
	movl	$6, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -20(%rbp)
	movq	$.LC4, -72(%rbp)
	movq    -72(%rbp), %rdi
	call	printStr
	movl	%eax, -76(%rbp)
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jne	.L4
	jmp	.L5
	jmp	.L6
.L4:
	movq	$.LC5, -360(%rbp)
	movq    -360(%rbp), %rdi
	call	printStr
	movl	%eax, -364(%rbp)
	jmp	.L6
.L5:
	movq	$.LC6, -372(%rbp)
	movq    -372(%rbp), %rdi
	call	printStr
	movl	%eax, -376(%rbp)
.L6:
	movl	$1, -88(%rbp)
	movl	-88(%rbp), %eax
	negl	%eax
	movl	%eax, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$3, -100(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, -20(%rbp)
	movq	$.LC7, -112(%rbp)
	movq    -112(%rbp), %rdi
	call	printStr
	movl	%eax, -116(%rbp)
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jl	.L7
	jmp	.L8
	jmp	.L9
.L7:
	movq	$.LC8, -384(%rbp)
	movq    -384(%rbp), %rdi
	call	printStr
	movl	%eax, -388(%rbp)
	jmp	.L9
.L8:
	movq	$.LC9, -396(%rbp)
	movq    -396(%rbp), %rdi
	call	printStr
	movl	%eax, -400(%rbp)
.L9:
	movl	$1, -128(%rbp)
	movl	-128(%rbp), %eax
	negl	%eax
	movl	%eax, -132(%rbp)
	movl	-132(%rbp), %eax
	movl	%eax, -20(%rbp)
	movq	$.LC10, -144(%rbp)
	movq    -144(%rbp), %rdi
	call	printStr
	movl	%eax, -148(%rbp)
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jl	.L10
	jmp	.L11
	jmp	.L12
.L10:
	movq	$.LC11, -408(%rbp)
	movq    -408(%rbp), %rdi
	call	printStr
	movl	%eax, -412(%rbp)
	jmp	.L12
.L11:
	movq	$.LC12, -420(%rbp)
	movq    -420(%rbp), %rdi
	call	printStr
	movl	%eax, -424(%rbp)
.L12:
	movq	$.LC13, -164(%rbp)
	movq    -164(%rbp), %rdi
	call	printStr
	movl	%eax, -168(%rbp)
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jle	.L13
	jmp	.L14
	jmp	.L15
.L13:
	movq	$.LC14, -432(%rbp)
	movq    -432(%rbp), %rdi
	call	printStr
	movl	%eax, -436(%rbp)
	jmp	.L15
.L14:
	movq	$.LC15, -444(%rbp)
	movq    -444(%rbp), %rdi
	call	printStr
	movl	%eax, -448(%rbp)
.L15:
	movl	$2, -180(%rbp)
	movl	-180(%rbp), %eax
	negl	%eax
	movl	%eax, -184(%rbp)
	movl	-184(%rbp), %eax
	movl	%eax, -16(%rbp)
	movq	$.LC16, -196(%rbp)
	movq    -196(%rbp), %rdi
	call	printStr
	movl	%eax, -200(%rbp)
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jle	.L16
	jmp	.L17
	jmp	.L18
.L16:
	movq	$.LC17, -456(%rbp)
	movq    -456(%rbp), %rdi
	call	printStr
	movl	%eax, -460(%rbp)
	jmp	.L18
.L17:
	movq	$.LC18, -468(%rbp)
	movq    -468(%rbp), %rdi
	call	printStr
	movl	%eax, -472(%rbp)
.L18:
	movl	$7, -212(%rbp)
	movl	-212(%rbp), %eax
	movl	%eax, -16(%rbp)
	movq	$.LC19, -224(%rbp)
	movq    -224(%rbp), %rdi
	call	printStr
	movl	%eax, -228(%rbp)
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jg	.L19
	jmp	.L20
	jmp	.L21
.L19:
	movq	$.LC20, -480(%rbp)
	movq    -480(%rbp), %rdi
	call	printStr
	movl	%eax, -484(%rbp)
	jmp	.L21
.L20:
	movq	$.LC21, -492(%rbp)
	movq    -492(%rbp), %rdi
	call	printStr
	movl	%eax, -496(%rbp)
.L21:
	movl	$7, -240(%rbp)
	movl	-240(%rbp), %eax
	movl	%eax, -20(%rbp)
	movq	$.LC22, -252(%rbp)
	movq    -252(%rbp), %rdi
	call	printStr
	movl	%eax, -256(%rbp)
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jg	.L22
	jmp	.L23
	jmp	.L24
.L22:
	movq	$.LC23, -504(%rbp)
	movq    -504(%rbp), %rdi
	call	printStr
	movl	%eax, -508(%rbp)
	jmp	.L24
.L23:
	movq	$.LC24, -516(%rbp)
	movq    -516(%rbp), %rdi
	call	printStr
	movl	%eax, -520(%rbp)
.L24:
	movq	$.LC25, -272(%rbp)
	movq    -272(%rbp), %rdi
	call	printStr
	movl	%eax, -276(%rbp)
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jge	.L25
	jmp	.L26
	jmp	.L27
.L25:
	movq	$.LC26, -528(%rbp)
	movq    -528(%rbp), %rdi
	call	printStr
	movl	%eax, -532(%rbp)
	jmp	.L27
.L26:
	movq	$.LC27, -540(%rbp)
	movq    -540(%rbp), %rdi
	call	printStr
	movl	%eax, -544(%rbp)
.L27:
	movl	$8, -288(%rbp)
	movl	-288(%rbp), %eax
	movl	%eax, -16(%rbp)
	movq	$.LC28, -300(%rbp)
	movq    -300(%rbp), %rdi
	call	printStr
	movl	%eax, -304(%rbp)
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jge	.L28
	jmp	.L29
	jmp	.L30
.L28:
	movq	$.LC29, -552(%rbp)
	movq    -552(%rbp), %rdi
	call	printStr
	movl	%eax, -556(%rbp)
	jmp	.L30
.L29:
	movq	$.LC30, -564(%rbp)
	movq    -564(%rbp), %rdi
	call	printStr
	movl	%eax, -568(%rbp)
.L30:
	movq	$.LC31, -320(%rbp)
	movq    -320(%rbp), %rdi
	call	printStr
	movl	%eax, -324(%rbp)
	movl	$0, -328(%rbp)
	movl	-328(%rbp), %eax
.LFE0:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
