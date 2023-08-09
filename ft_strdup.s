; ======================================================== ;
; char  *ft_strdup(const char *s);
;
; The function returns a pointer to a string dup of s.
; Memory for the new string is malloc, and can be free.
; Return: 
;   - a pointer to the duplicated string. 
;   - NULL if insufficient memory available and errno set
;
; 1st arg:  rdi a string to duplicate
; ======================================================== ;

extern ft_strlen
extern ft_strcpy
extern malloc
extern __errno_location

section .text
    global ft_strdup

ft_strdup:
    cmp     rdi, 0
    jz      fail   ; if no argument given quit
    push    rdi
    call    ft_strlen
    inc     rax
    mov     rdi, rax
    call    malloc WRT ..plt
    pop     rdi
    or      rax, rax
    jz      fail
    mov     rsi, rdi
    mov     rdi, rax
    call    ft_strcpy
    jmp     quit

fail:
    neg     rax
    push    rax
	call    __errno_location WRT ..plt	; get errno addr
    pop     qword[rax]
    mov     rax, -1
    jmp     quit

quit:
    ret