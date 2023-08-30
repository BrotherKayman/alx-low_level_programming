section .data
	hello db "Hello, Holberton", 0
	format db "%s", 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, format
	mov rsi, hello
	xor rax, rax
	call printf
	pop rbp
	xor rax, rax
	ret
	
