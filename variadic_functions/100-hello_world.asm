section .data
	msg db "Hello, World",10 ; Define a string 'Hello, World' followed by a new line (10 is ascii for newline)

section .text

global main ; Declare the 'main' function as the entry point
main:
	mov rax, 1 ; move the value '1' into the rax register. 1 represents the 'write' system call
	mov rdi, 1 ; move the value '1' into the rdi register. 1 represents the file descriptor for stdout
	mov rsi, msg ; move the memory address of 'msg' (the string) into the rsi register, which contains the address of the data to be printed
	mov rdx, 13 ; move the value '13' into the rdx register. 13 is the number of bytes to be written including newline
	syscall ; triggers the system call to print the message

	mov rax, 60 ; move the value '60' into the rax register. '60' represents the 'exit' system call
	mov rdi, 0 ; move the value '0' into the rdi register. '0' is the exit status code for the program
	syscall ; triggers the system call to exist the program
