; ======================================================== ;
; int strcmp(const char *s1, const char *s2); 
; 
; The function compares two strings s1 and s2.
; The comparison use unsigned characters.
; Returns: the result of the comparison (int):
;     •  0, if the s1 and s2 are equal;
;     •  negative value if s1 is less than s2;
;     •  positive value if s1 is greater than s2.
; 
; 1st arg:  rdi | 2nd arg:  rsi
; ======================================================== ;

section .text
global ft_strcmp

ft_strcmp:
    mov     rcx, 0
    mov     rax, 0

