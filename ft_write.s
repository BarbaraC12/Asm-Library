section .data
    text db "text here", 10

section .text
    global _start

_strlen
    
    [rdi]
    @ strlen(text);

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, text
    mov rdx, 16
    syscall
    @ write(1, text, 16);
    mov rax, 60
    mov rdi, 0
    syscall
    @ exit 0;