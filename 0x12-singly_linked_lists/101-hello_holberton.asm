section contents
    hello db "Hello, Holberton",0
    format db "%s",0

section print
    global main
    extern printf

main:
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf
    ret
