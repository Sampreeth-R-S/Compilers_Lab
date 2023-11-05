	.file	"./input/test4.c"

#	Allocation of function variables and temporaries on the stack:

#	printStr
#	s: -8
#	readInt
#	eP: -8
#	printInt
#	n: -4
#	main
#	charL1: -25
#	charL2: -27
#	main__0: -356
#	main__1: -360
#	main__2: -473
#	main__3: -477
#	main__4: -590
#	main__5: -594
#	numL1: -16
#	numL2: -24
#	ptrL1: -35
#	ptrL2: -51
#	strL1: -59
#	strL2: -75
#	t10: -87
#	t100: -554
#	t101: -562
#	t102: -566
#	t103: -570
#	t104: -578
#	t105: -582
#	t106: -586
#	t107: -666
#	t108: -670
#	t109: -678
#	t11: -95
#	t110: -682
#	t111: -602
#	t112: -606
#	t113: -610
#	t12: -99
#	t13: -103
#	t14: -111
#	t15: -115
#	t16: -119
#	t17: -127
#	t18: -131
#	t19: -135
#	t20: -143
#	t21: -147
#	t22: -151
#	t23: -159
#	t24: -167
#	t25: -175
#	t26: -179
#	t27: -187
#	t28: -191
#	t29: -195
#	t3: -8
#	t30: -203
#	t31: -207
#	t32: -211
#	t33: -219
#	t34: -223
#	t35: -227
#	t36: -235
#	t37: -239
#	t38: -243
#	t39: -251
#	t4: -12
#	t40: -255
#	t41: -263
#	t42: -267
#	t43: -271
#	t44: -272
#	t45: -280
#	t46: -288
#	t47: -296
#	t48: -300
#	t49: -304
#	t5: -20
#	t50: -312
#	t51: -316
#	t52: -320
#	t53: -328
#	t54: -332
#	t55: -336
#	t56: -344
#	t57: -348
#	t58: -352
#	t59: -618
#	t6: -26
#	t60: -622
#	t61: -630
#	t62: -634
#	t63: -368
#	t64: -372
#	t65: -380
#	t66: -384
#	t67: -388
#	t68: -389
#	t69: -397
#	t7: -43
#	t70: -405
#	t71: -413
#	t72: -417
#	t73: -421
#	t74: -429
#	t75: -433
#	t76: -437
#	t77: -445
#	t78: -449
#	t79: -453
#	t8: -67
#	t80: -461
#	t81: -465
#	t82: -469
#	t83: -642
#	t84: -646
#	t85: -654
#	t86: -658
#	t87: -485
#	t88: -489
#	t89: -497
#	t9: -83
#	t90: -501
#	t91: -505
#	t92: -506
#	t93: -514
#	t94: -522
#	t95: -530
#	t96: -534
#	t97: -538
#	t98: -546
#	t99: -550

	.section	.rodata
.LC0:
	.string	"Hello World, I am a global string."
.LC1:
	.string	"\n#### TEST 4 (Global variables, pointers and addresses) ####"
.LC2:
	.string	"Hello World, I am a local string."
.LC3:
	.string	"\nLocal variables: "
.LC4:
	.string	"\nnumL1 = "
.LC5:
	.string	", charL1 (ascii value) = "
.LC6:
	.string	", ptrL1 (adress, truncated to first 32 bits only) = "
.LC7:
	.string	", strL1 = "
.LC8:
	.string	"\nGlobal variables: "
.LC9:
	.string	"\nnumG1 = "
.LC10:
	.string	", charG1 (ascii value) = "
.LC11:
	.string	", ptrG1 (adress, truncated to first 32 bits only) = "
.LC12:
	.string	", strG1 = "
.LC13:
	.string	"\n"
.LC14:
	.string	"\nAssigning locals to globals: "
.LC15:
	.string	"\nnumG2 = "
.LC16:
	.string	", charG2 (ascii value) = "
.LC17:
	.string	", ptrG2 (adress, truncated to first 32 bits only) = "
.LC18:
	.string	", strG2 = "
.LC19:
	.string	"\nSUCCESS: Local variables assigned to global variables."
.LC20:
	.string	"\nFAILURE: Local variables not assigned to global variables."
.LC21:
	.string	"\n"
.LC22:
	.string	"\nAssigning globals to locals: "
.LC23:
	.string	"\nnumL2 = "
.LC24:
	.string	", charL2 (ascii value) = "
.LC25:
	.string	", ptrL2 (adress, truncated to first 32 bits only) = "
.LC26:
	.string	", strL2 = "
.LC27:
	.string	"\nSUCCESS: Global variables assigned to local variables."
.LC28:
	.string	"\nFAILURE: Global variables not assigned to local variables."
.LC29:
	.string	"\n"
.LC30:
	.string	"\nAssigning globals to globals: "
.LC31:
	.string	"\nnumG2 = "
.LC32:
	.string	", charG2 (ascii value) = "
.LC33:
	.string	", ptrG2 (adress, truncated to first 32 bits only) = "
.LC34:
	.string	", strG2 = "
.LC35:
	.string	"\nSUCCESS: Global variables assigned to global variables."
.LC36:
	.string	"\nFAILURE: Global variables not assigned to global variables."
.LC37:
	.string	"\n\n"

	.comm	numG2, 4, 4
	.comm	charG2, 1, 1
	.comm	ptrG1, 8, 8
	.comm	ptrG2, 8, 8
	.comm	strG2, 8, 8
	.globl  numG1
	.data   
	.align  4
	.type   numG1, @object
	.size   numG1, 4
numG1:
	.long   0
	.globl  charG1
	.data   
	.type   charG1, @object
	.size   charG1, 1
charG1:
	.byte   98
	.section	.data.rel.local
	.align  8
	.type   strG1, @object
	.size   strG1, 8
strG1:
	.quad   .LC0
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
	subq	$682, %rsp
	movq	$.LC1, -8(%rbp)
	movq    -8(%rbp), %rdi
	call	printStr
	movl	%eax, -12(%rbp)
	movl	$5, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
	movb	$97, -26(%rbp)
	movb	-26(%rbp), %al
	movb	%al, -25(%rbp)
	leaq	-16(%rbp), %rax
	movq	%rax, -43(%rbp)
	movq	-43(%rbp), %rax
	movq	%rax, -35(%rbp)
	movq	$.LC2, -67(%rbp)
	movq	-67(%rbp), %rax
	movq	%rax, -59(%rbp)
	movq	$.LC3, -83(%rbp)
	movq    -83(%rbp), %rdi
	call	printStr
	movl	%eax, -87(%rbp)
	movq	$.LC4, -95(%rbp)
	movq    -95(%rbp), %rdi
	call	printStr
	movl	%eax, -99(%rbp)
	movl    -16(%rbp), %edi
	call	printInt
	movl	%eax, -103(%rbp)
	movq	$.LC5, -111(%rbp)
	movq    -111(%rbp), %rdi
	call	printStr
	movl	%eax, -115(%rbp)
	movb    -25(%rbp), %dil
	call	printInt
	movl	%eax, -119(%rbp)
	movq	$.LC6, -127(%rbp)
	movq    -127(%rbp), %rdi
	call	printStr
	movl	%eax, -131(%rbp)
	movq    -35(%rbp), %rdi
	call	printInt
	movl	%eax, -135(%rbp)
	movq	$.LC7, -143(%rbp)
	movq    -143(%rbp), %rdi
	call	printStr
	movl	%eax, -147(%rbp)
	movq    -59(%rbp), %rdi
	call	printStr
	movl	%eax, -151(%rbp)
	leaq	numG1, %rax
	movq	%rax, -159(%rbp)
	movq	-159(%rbp), %rax
	movq	%rax, ptrG1
	movq	$.LC8, -175(%rbp)
	movq    -175(%rbp), %rdi
	call	printStr
	movl	%eax, -179(%rbp)
	movq	$.LC9, -187(%rbp)
	movq    -187(%rbp), %rdi
	call	printStr
	movl	%eax, -191(%rbp)
	movl    numG1, %edi
	call	printInt
	movl	%eax, -195(%rbp)
	movq	$.LC10, -203(%rbp)
	movq    -203(%rbp), %rdi
	call	printStr
	movl	%eax, -207(%rbp)
	movb    charG1, %dil
	call	printInt
	movl	%eax, -211(%rbp)
	movq	$.LC11, -219(%rbp)
	movq    -219(%rbp), %rdi
	call	printStr
	movl	%eax, -223(%rbp)
	movq    ptrG1, %rdi
	call	printInt
	movl	%eax, -227(%rbp)
	movq	$.LC12, -235(%rbp)
	movq    -235(%rbp), %rdi
	call	printStr
	movl	%eax, -239(%rbp)
	movq    strG1, %rdi
	call	printStr
	movl	%eax, -243(%rbp)
	movq	$.LC13, -251(%rbp)
	movq    -251(%rbp), %rdi
	call	printStr
	movl	%eax, -255(%rbp)
	movq	$.LC14, -263(%rbp)
	movq    -263(%rbp), %rdi
	call	printStr
	movl	%eax, -267(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, numG2
	movb	-25(%rbp), %al
	movb	%al, charG2
	movq	-35(%rbp), %rax
	movq	%rax, ptrG2
	movq	-59(%rbp), %rax
	movq	%rax, strG2
	movq	$.LC15, -296(%rbp)
	movq    -296(%rbp), %rdi
	call	printStr
	movl	%eax, -300(%rbp)
	movl    numG2, %edi
	call	printInt
	movl	%eax, -304(%rbp)
	movq	$.LC16, -312(%rbp)
	movq    -312(%rbp), %rdi
	call	printStr
	movl	%eax, -316(%rbp)
	movb    charG2, %dil
	call	printInt
	movl	%eax, -320(%rbp)
	movq	$.LC17, -328(%rbp)
	movq    -328(%rbp), %rdi
	call	printStr
	movl	%eax, -332(%rbp)
	movq    ptrG2, %rdi
	call	printInt
	movl	%eax, -336(%rbp)
	movq	$.LC18, -344(%rbp)
	movq    -344(%rbp), %rdi
	call	printStr
	movl	%eax, -348(%rbp)
	movq    strG2, %rdi
	call	printStr
	movl	%eax, -352(%rbp)
	movl	-16(%rbp), %eax
	cmpl	%eax, numG2
	je	.L1
	jmp	.L2
.L1:
	movb	-25(%rbp), %al
	cmpb	%al, charG2
	je	.L3
	jmp	.L2
.L3:
	movq	-35(%rbp), %rax
	cmpq	%rax, ptrG2
	je	.L4
	jmp	.L2
.L4:
	movq	-59(%rbp), %rax
	cmpq	%rax, strG2
	je	.L5
	jmp	.L2
	jmp	.L6
.L5:
	movq	$.LC19, -618(%rbp)
	movq    -618(%rbp), %rdi
	call	printStr
	movl	%eax, -622(%rbp)
	jmp	.L6
.L2:
	movq	$.LC20, -630(%rbp)
	movq    -630(%rbp), %rdi
	call	printStr
	movl	%eax, -634(%rbp)
.L6:
	movq	$.LC21, -368(%rbp)
	movq    -368(%rbp), %rdi
	call	printStr
	movl	%eax, -372(%rbp)
	movq	$.LC22, -380(%rbp)
	movq    -380(%rbp), %rdi
	call	printStr
	movl	%eax, -384(%rbp)
	movl	numG1, %eax
	movl	%eax, -24(%rbp)
	movb	charG1, %al
	movb	%al, -27(%rbp)
	movq	ptrG1, %rax
	movq	%rax, -51(%rbp)
	movq	strG1, %rax
	movq	%rax, -75(%rbp)
	movq	$.LC23, -413(%rbp)
	movq    -413(%rbp), %rdi
	call	printStr
	movl	%eax, -417(%rbp)
	movl    -24(%rbp), %edi
	call	printInt
	movl	%eax, -421(%rbp)
	movq	$.LC24, -429(%rbp)
	movq    -429(%rbp), %rdi
	call	printStr
	movl	%eax, -433(%rbp)
	movb    -27(%rbp), %dil
	call	printInt
	movl	%eax, -437(%rbp)
	movq	$.LC25, -445(%rbp)
	movq    -445(%rbp), %rdi
	call	printStr
	movl	%eax, -449(%rbp)
	movq    -51(%rbp), %rdi
	call	printInt
	movl	%eax, -453(%rbp)
	movq	$.LC26, -461(%rbp)
	movq    -461(%rbp), %rdi
	call	printStr
	movl	%eax, -465(%rbp)
	movq    -75(%rbp), %rdi
	call	printStr
	movl	%eax, -469(%rbp)
	movl	numG1, %eax
	cmpl	%eax, -24(%rbp)
	je	.L7
	jmp	.L8
.L7:
	movb	charG1, %al
	cmpb	%al, -27(%rbp)
	je	.L9
	jmp	.L8
.L9:
	movq	ptrG1, %rax
	cmpq	%rax, -51(%rbp)
	je	.L10
	jmp	.L8
.L10:
	movq	strG1, %rax
	cmpq	%rax, -75(%rbp)
	je	.L11
	jmp	.L8
	jmp	.L12
.L11:
	movq	$.LC27, -642(%rbp)
	movq    -642(%rbp), %rdi
	call	printStr
	movl	%eax, -646(%rbp)
	jmp	.L12
.L8:
	movq	$.LC28, -654(%rbp)
	movq    -654(%rbp), %rdi
	call	printStr
	movl	%eax, -658(%rbp)
.L12:
	movq	$.LC29, -485(%rbp)
	movq    -485(%rbp), %rdi
	call	printStr
	movl	%eax, -489(%rbp)
	movq	$.LC30, -497(%rbp)
	movq    -497(%rbp), %rdi
	call	printStr
	movl	%eax, -501(%rbp)
	movl	numG1, %eax
	movl	%eax, numG2
	movb	charG1, %al
	movb	%al, charG2
	movq	ptrG1, %rax
	movq	%rax, ptrG2
	movq	strG1, %rax
	movq	%rax, strG2
	movq	$.LC31, -530(%rbp)
	movq    -530(%rbp), %rdi
	call	printStr
	movl	%eax, -534(%rbp)
	movl    numG2, %edi
	call	printInt
	movl	%eax, -538(%rbp)
	movq	$.LC32, -546(%rbp)
	movq    -546(%rbp), %rdi
	call	printStr
	movl	%eax, -550(%rbp)
	movb    charG2, %dil
	call	printInt
	movl	%eax, -554(%rbp)
	movq	$.LC33, -562(%rbp)
	movq    -562(%rbp), %rdi
	call	printStr
	movl	%eax, -566(%rbp)
	movq    ptrG2, %rdi
	call	printInt
	movl	%eax, -570(%rbp)
	movq	$.LC34, -578(%rbp)
	movq    -578(%rbp), %rdi
	call	printStr
	movl	%eax, -582(%rbp)
	movq    strG2, %rdi
	call	printStr
	movl	%eax, -586(%rbp)
	movl	numG1, %eax
	cmpl	%eax, numG2
	je	.L13
	jmp	.L14
.L13:
	movb	charG1, %al
	cmpb	%al, charG2
	je	.L15
	jmp	.L14
.L15:
	movq	ptrG1, %rax
	cmpq	%rax, ptrG2
	je	.L16
	jmp	.L14
.L16:
	movq	strG1, %rax
	cmpq	%rax, strG2
	je	.L17
	jmp	.L14
	jmp	.L18
.L17:
	movq	$.LC35, -666(%rbp)
	movq    -666(%rbp), %rdi
	call	printStr
	movl	%eax, -670(%rbp)
	jmp	.L18
.L14:
	movq	$.LC36, -678(%rbp)
	movq    -678(%rbp), %rdi
	call	printStr
	movl	%eax, -682(%rbp)
.L18:
	movq	$.LC37, -602(%rbp)
	movq    -602(%rbp), %rdi
	call	printStr
	movl	%eax, -606(%rbp)
	movl	$0, -610(%rbp)
	movl	-610(%rbp), %eax
.LFE0:
	movq	%rbp, %rsp
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size	main, .-main
