; ======================================================== ;
; size_t		ft_strlen(const char *str);
;
; The function calculate the length of a string pointed
; Exclude the terminating null byte ('\0').
; Return: the numbers of bytes in the string
;
; 1st arg:  rdi
; ======================================================== ;

section .text
global ft_strlen

ft_strlen:
	mov		rax, 0		; on met rax a 0 
	jmp		cond		; verifie cond avant loop

loop:
	inc		rax			; sinon rax++

cond:
	cmp		BYTE [rdi + rax], 0	
	jne		loop		; si false -> loop

ret						; return rax
