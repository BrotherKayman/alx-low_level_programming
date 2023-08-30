	section .content
	hello db "Hello, Holberton", 0
	format db "%s", 10, 0

	section .printf
	global main
	extern printf

main:
	mov rdi, format
	mov rsi, hello
	call printf
	ret
	
