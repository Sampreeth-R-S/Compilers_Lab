	.file	"code.c"  #file name
	.text  #code starts
	.globl	calculateFrequency  #calculateFrequency is a global name
	.type	calculateFrequency, @function  #calculateFrequency is a function
calculateFrequency:  #calculateFrequency function starts
.LFB0:
	.cfi_startproc  #call frame information
	endbr64
	pushq	%rbp  #save old base pointer
	.cfi_def_cfa_offset 16  #call frame information
	.cfi_offset 6, -16  #call frame information
	movq	%rsp, %rbp  #set current stack pointer as base pointer
	.cfi_def_cfa_register 6  #call frame information
	movq	%rdi, -24(%rbp)  #load the first argument(pointer to arr1 array) onto register rdi
	movl	%esi, -28(%rbp)  #load the second argument(size of array) onto register rsi
	movq	%rdx, -40(%rbp)  #load the third argument(pointer to frequency array) onto register rdx
	movl	$0, -12(%rbp)  #set the value of integer i to 0
	jmp	.L2  #go to the beginning of the for loop
.L7:
	movl	$1, -4(%rbp)  #set Mem[rbp-4]=1(ctr is initialised to 1)
	movl	-12(%rbp), %eax  #load the value of Mem[rbp-12](i) to reagister eax
	addl	$1, %eax  #Add i to register eax(therefore eax=i+1 stores the value of j)
	movl	%eax, -8(%rbp)  #Store the value of eax(j) at Mem[rbp-8]
	jmp	.L3  #Jump to L3(inner loop)
.L5:
	movl	-12(%rbp), %eax  #eax = Mem[rbp-12](i), value of i is loaded onto register eax
	cltq  #sign-extend the value in lower 32 bits(eax) to 64 bit signed integer(rax) 
	leaq	0(,%rax,4), %rdx  #convert i to i*sizeof(int)and store in rdx
	movq	-24(%rbp), %rax  #load Mem[rbp-24)(arr) onto rax
	addq	%rdx, %rax  #add rdx to rax
	movl	(%rax), %edx  #Load Mem[rax](arr[i]) onto edx
	movl	-8(%rbp), %eax  #load Mem[rbp-8](j) onto eax
	cltq  #sign-extend the value in lower 32 bits(eax) to 64 bit signed integer(rax) 
	leaq	0(,%rax,4), %rcx #convert j to j*sizeof(int)and store in rcx 
	movq	-24(%rbp), %rax  #load Mem[rbp-24)(arr) onto rax
	addq	%rcx, %rax  #add rcx to rax(now rax=arr+j)
	movl	(%rax), %eax  #Load Mem[rax](arr[j]) onto eax
	cmpl	%eax, %edx  #compare eax(arr[j]) and edx(arr[i])
	jne	.L4  #If arr[i] is not equal to arr[j], jump to label L4
	addl	$1, -4(%rbp)  #Increments Mem[rbp-4](ctr) by one
	movl	-8(%rbp), %eax  #loads Mem[rbp-8](j) onto eax
	cltq  #sign-extend the value in lower 32 bits(eax) to 64 bit signed integer(rax)
	leaq	0(,%rax,4), %rdx  #convert j to j*sizeof(int)and store in rdx
	movq	-40(%rbp), %rax  #load Mem[rbp-40](pointer to fr array) onto rax
	addq	%rdx, %rax  #add rdx to rax(now rax=fr+j)
	movl	$0, (%rax)  #set Mem[rax](fr[j]) to zero(frequency of duplicate is set to 0)
.L4:
	addl	$1, -8(%rbp)  #Add 1 to Mem[rbp-8], this line increments j to move to the next iteration
.L3:
	movl	-8(%rbp), %eax  #load the value of Mem[rbp-8](j) onto register eax
	cmpl	-28(%rbp), %eax  #Compare the value of Mem[rbp-28](n) and eax(j)
	jl	.L5  #if j less than n, jump to L5(execution of inner loop)
	movl	-12(%rbp), %eax  #load the value of Mem[rbp-12](i) to eax
	cltq  #sign-extend the value in lower 32 bits(eax) to 64 bit signed integer(rax)
	leaq	0(,%rax,4), %rdx  #convert i(rax) to i*sizeof(int) and store in rdx
	movq	-40(%rbp), %rax  #Load Mem[rbp-40](pointer to fr array) into rax
	addq	%rdx, %rax  #add rdx(i*sizeof(int))to rax(fr)
	movl	(%rax), %eax  #Load the value of Mem[rax](fr[i]) onto eax
	testl	%eax, %eax  #checks if value of eax(fr[i]) is zero or not by performing and between value of eax with itself
	je	.L6  #If value of eax is zero(i.e. fr[i]==0), jump to label L6
	movl	-12(%rbp), %eax  #Load value of Mem[rbp-12](i) onto eax
	cltq  #sign-extend the value in lower 32 bits(eax) to 64 bit signed integer(rax)
	leaq	0(,%rax,4), %rdx  #convert i(rax) to i*sizeof(int) and store in rdx
	movq	-40(%rbp), %rax  #Load Mem[rbp-40](fr) into rax
	addq	%rax, %rdx  #add i*sizeof(int)(rdx) to rax
	movl	-4(%rbp), %eax  #Load the value of Mem[rbp-4](ctr) onto eax
	movl	%eax, (%rdx)  #Load the value of eax(ctr) to value of pointee of rdx(fr[i])(i.e. fr[i]=ctr)
.L6:
	addl	$1, -12(%rbp)  #Add one to value of Mem[rbp-12](i), this statement increments i by one, thus entering the next iteration of the outer loop
.L2:
	movl	-12(%rbp), %eax  #Move value of Mem[rbp-12](i) to register rax
	cmpl	-28(%rbp), %eax  #Compare value of Mem[rbp-28](n) with eax(i) 
	jl	.L7  #if i less than n, continue the outer loop execution
	nop  #no operation
	nop  #no operation
	popq	%rbp  #popping the value of base pointer to return to the previous stack frame(callee of the function)
	.cfi_def_cfa 7, 8 #call frame information
	ret  #return from the function to the callee
	.cfi_endproc  #process ends
.LFE0:  #end of the function calculate frequency
	.size	calculateFrequency, .-calculateFrequency  #function size information for the processor
	.section	.rodata  #read only data section begins here
.LC0:
	.string	"Element\tFrequency"  #Label of f string of first printf of printArrayWithFrequency
.LC1:
	.string	"%d\t%d\n"  #Label of f string of second printf to print the elements and their frequency
	.text  #beginning of codeblock
	.globl	printArrayWithFrequency  #printArrayWithFrequency is a global name
	.type	printArrayWithFrequency, @function  #printArrayWithFrequency is a function
printArrayWithFrequency:  #start of function definition of printArrayWithFrequency
.LFB1:
	.cfi_startproc  #process starts
	endbr64 #checking for valid function call
	pushq	%rbp  #save the old base pointer(of the callee) in the stack
	.cfi_def_cfa_offset 16  #call frame information
	.cfi_offset 6, -16 #call frame information
	movq	%rsp, %rbp  #set the new stack pointer as the base pointer
	.cfi_def_cfa_register 6 #call frame information
	subq	$48, %rsp  #Create space for local variables
	movq	%rdi, -24(%rbp)  #Save the first argument of the function(arr) as Mem[rbp-24]
	movq	%rsi, -32(%rbp)  #Save the second argument of the function(fr) at Mem[rbp-32]
	movl	%edx, -36(%rbp)  #Save the third argument of the function(n) at Mem[rbp-36]
	leaq	.LC0(%rip), %rax  #Load the address of label LC0(the f string "Element\tFrequency" onto rax
	movq	%rax, %rdi  #copy contents of rax to rdi for printing onto the terminal
	call	puts@PLT  #call to puts to print the first printf statement
	movl	$0, -4(%rbp)  #update the value of Mem[rbp-4](i) to 0
	jmp	.L9  #Jump to label L9(loop)
.L11:
	movl	-4(%rbp), %eax  #Load the value of Mem[rbp-4](i) onto eax
	cltq  #sign-extend the value in lower 32 bits(eax) to 64 bit signed integer(rax)
	leaq	0(,%rax,4), %rdx  #convert i to i*sizeof(int) and store it in rdx
	movq	-32(%rbp), %rax  #Load Mem[rbp-32](fr) onto rax
	addq	%rdx, %rax  #add rdx to rax(rax now stores fr+i)
	movl	(%rax), %eax  #Load the value of Mem[rax](fr[i]) onto eax
	testl	%eax, %eax  #Check if eax(fr[i]) is zero
	je	.L10  #if eax(fr[i])==0,jump to label L10(no printing takes place because it is a duplicate)
	movl	-4(%rbp), %eax  #Load the value of Mem[rbp-4](i) onto eax
	cltq  #sign-extend the value in lower 32 bits(eax) to 64 bit signed integer(rax)
	leaq	0(,%rax,4), %rdx  #convert i to i*sizeof(int) and store it in rdx
	movq	-32(%rbp), %rax  #Load Mem[rbp-32](fr) onto rax
	addq	%rdx, %rax  #add rdx to rax(rax now stores fr+i)
	movl	(%rax), %edx  #Load the value of Mem[rax](fr[i]) onto eax(third argument to the printf function(the frequency))
	movl	-4(%rbp), %eax  #Load the value of Mem[rbp-4](i) onto eax
	cltq  #sign-extend the value in lower 32 bits(eax) to 64 bit signed integer(rax)
	leaq	0(,%rax,4), %rcx  #convert i to i*sizeof(int) and store it in rdx
	movq	-24(%rbp), %rax  #Load the value of Mem[rbp-24](arr) into rax
	addq	%rcx, %rax  #add rcx to rax(rax now holds arr+i)
	movl	(%rax), %eax  #Load the value of Mem[rax](arr[i]) onto eax
	movl	%eax, %esi  #copy value of eax to esi(second argument to the printf function(the element value))
	leaq	.LC1(%rip), %rax  #Load the address of Label LC1(f string "%d\t%d\n") onto rax
	movq	%rax, %rdi  #copy contents of rax to rdi(first argument of printf function)
	movl	$0, %eax  #set return value(eax) to zero
	call	printf@PLT  #call to printf function
.L10:
	addl	$1, -4(%rbp)  #increment the value of Mem[rbp-4](i) by one to enter the next iteration
.L9:
	movl	-4(%rbp), %eax  #Load the value of Mem[rbp-4](i) to eax
	cmpl	-36(%rbp), %eax  #Compare the value of eax(i) with Mem[rbp-36)(n)
	jl	.L11  #if i less than n, enter the iteration by jumping into label L11
	nop  #no operation
	nop  #no operation
	leave  #termination of the function
	.cfi_def_cfa 7, 8  #call frame information
	ret  #return to the callee
	.cfi_endproc #process ends
.LFE1:  #Function end label
	.size	printArrayWithFrequency, .-printArrayWithFrequency  #End of function printArrayWithFrequency
	.section	.rodata  #Read only data section starts
	.align 8
.LC2:
	.string	"\n\nCount frequency of each integer element of an array:"  #f string for the first printf statement
	.align 8
.LC3:
	.string	"------------------------------------------------"  #f string for the second printf statement
	.align 8
.LC4:
	.string	"Input the number of elements to be stored in the array :" #f string for the third printf statement
.LC5:
	.string	"%d"  #f string for the scanf statement
	.align 8  #align with 8 byte boundary
.LC6:
	.string	"Enter each elements separated by space: "  #f string for the fourth printf statement
	.text  #code starts
	.globl	main #main function is global
	.type	main, @function  #main is a function
main:  #main function starts
.LFB2:
	.cfi_startproc #process starts
	endbr64  #checking for valid function call
	pushq	%rbp  #push the current stack pointer to save the old base pointer
	.cfi_def_cfa_offset 16 #call frame information
	.cfi_offset 6, -16  #call frame information
	movq	%rsp, %rbp  #set the new stack pointer as the base pointer
	.cfi_def_cfa_register 6  #call frame information
	subq	$832, %rsp  #allocate data for local variables
	movq	%fs:40, %rax   #allocate frame space
	movq	%rax, -8(%rbp)  #store the value of rax at Mem[rbp-8]
	xorl	%eax, %eax  #set the value of rax to 0
	leaq	.LC2(%rip), %rax  #Load the value of address string of label L2 to rax
	movq	%rax, %rdi  #copy the value of eax to rdi(first argument to printf function)
	call	puts@PLT  #calls the printf function to print the label LC2
	leaq	.LC3(%rip), %rax  #load the value of address of string of label LC3 onto rax
	movq	%rax, %rdi  #copy the value of rax to rdi(first argument to printf function)
	call	puts@PLT  #calls printf function to print the label LC3
	leaq	.LC4(%rip), %rax  #loads the address of string of label LC4 into rax
	movq	%rax, %rdi  #copies the value of rax to rdi(first argument to printf)
	movl	$0, %eax  #sets the value of rax to 0(return value)
	call	printf@PLT  #calls the printf function
	leaq	-828(%rbp), %rax  #loads the value of Mem[rbp-828](storage allocated to n) to rax) 
	movq	%rax, %rsi  #copies the value of rax to rsi(second argument to scanf)
	leaq	.LC5(%rip), %rax  #loads the address of f string by LC5 to rax("%d")
	movq	%rax, %rdi  #copies value of rax to rdi(first argument to scanf)
	movl	$0, %eax #sets eax to zero
	call	__isoc99_scanf@PLT  #calls the scanf function to scan n
	leaq	.LC6(%rip), %rax  #Loads the address of string stored by LC6 to rax
	movq	%rax, %rdi  #copies rax to rdi(first argument for printf)
	movl	$0, %eax  #sets eax to 0
	call	printf@PLT  #calls printf on line 39 of code
	movl	$0, -824(%rbp)  #sets Mem[rbp-824](i) to zero 
	jmp	.L13  #Enter the loop
.L14:
	leaq	-816(%rbp), %rdx  #Load address of Mem[rbp-816](arr) to rdx
	movl	-824(%rbp), %eax  #Load value to Mem[rbp-824] to eax
	cltq  #sign-extend the value in lower 32 bits(eax) to 64 bit signed integer(rax)
	salq	$2, %rax  #left shift the value of rax by 2 bits(i=i*4 to convert from i to i*sizeof(int))
	addq	%rdx, %rax  #add rdx to rax(rax now becomes arr+i)
	movq	%rax, %rsi  #copy value of rax to rsi(second argument ot scanf)
	leaq	.LC5(%rip), %rax  #Load the address of string of label LC5 to rax("%d")
	movq	%rax, %rdi  #copy rax to rdi(first argument of scanf function)
	movl	$0, %eax  #set rax to 0
	call	__isoc99_scanf@PLT  #call the scanf function
	addl	$1, -824(%rbp)  #increment the value of Mem[rbp-824](i) by one(perform i++ at the end of iteration)
.L13:
	movl	-828(%rbp), %eax  #Load the value of Mem[rbp-828](n) to eax
	cmpl	%eax, -824(%rbp)  #compare eax(n) with Mem[rbp-824](i)
	jl	.L14  #if i<n, jump to line 14(enter the iteration)
	movl	$0, -820(%rbp)  #set Mem[rbp-820] to 0(i=0)
	jmp	.L15  #jump to L15(beginning of the second loop)
.L16:
	movl	-820(%rbp), %eax  #Load the value of Mem[rbp-820](i) to eax
	cltq  #sign-extend the value in lower 32 bits(eax) to 64 bit signed integer(rax) 
	movl	$-1, -416(%rbp,%rax,4)  #Set Mem[rbp-416+rax*4](fr[i]) to -1
	addl	$1, -820(%rbp)  #increment the value of Mem[rbp-820)(i)(performs i++ at the end of iteration)
.L15:
	movl	-828(%rbp), %eax  #load the value of Mem[rbp-828](n) onto register eax
	cmpl	%eax, -820(%rbp)  #Compare eax(n) with Mem[rbp-820](i)
	jl	.L16  #if i<n, jump to L16 to perform one iteration
	movl	-828(%rbp), %ecx  #load value of Mem[rbp-828](n) onto rcx
	leaq	-416(%rbp), %rdx  #Load value of Mem[rbp-416](pointer to array fr) to rdx(third argument of the function calculateFrequency)
	leaq	-816(%rbp), %rax  #Load value of Mem[rbp-816](pointer to array arr) to rax
	movl	%ecx, %esi  #copy ecx to esi(second argument of function calculateFrequency)
	movq	%rax, %rdi  #copy rax to rdi(first argument of function calculateFrequency)
	call	calculateFrequency  #Call the function CalculateFrequency
	movl	-828(%rbp), %edx  #Load Mem[rbp-828](n) to edx(third argument of function)
	leaq	-416(%rbp), %rcx  #Load value of Mem[rbp-416](pointer to array fr) to rcx
	leaq	-816(%rbp), %rax  #Load value of Mem[rbp-816](pointer to array arr) to rax
	movq	%rcx, %rsi  #copy rcx to rsi(second argument of function PrintArrayWithFrequency)
	movq	%rax, %rdi  #copy rax to rdi(first argument of function PrintArrayWithFrequency)
	call	printArrayWithFrequency  #call the function PrintArrayWithFrequency
	movl	$0, %eax  #set eax to 0(return value)
	movq	-8(%rbp), %rdx  
	subq	%fs:40, %rdx
	je	.L18
	call	__stack_chk_fail@PLT
.L18:
	leave  #end of main function
	.cfi_def_cfa 7, 8  #call frame information
	ret  #return
	.cfi_endproc  #process ends
.LFE2:  #function end label
	.size	main, .-main
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
