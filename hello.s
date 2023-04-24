section .data
  text db "Hello, world!", 10
  ; text name of memory address
  ; db -> define bytes
  ; "Hello, world!", 10 is the data bytes defined
  ; 10 = \n is the ASCII code for a new line

section .text
  global _start

_start:
  mov rax, 1 ; write
  mov rdi, 1 ; stdout
  mov rsi, text ; buffer
  mov rdx, 14 ; length
  syscall ; write
  mov rax, 60 ; exit
  mov rdi, 0 ; exit code
  syscall ; exit
