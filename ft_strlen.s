section .text
global ft_strlen

ft_strlen:
	mov		rax, 0					; on met rax a 0 
	jmp		cond					; verifie cond avant loop

loop:
	inc		rax						; sinon on incremente rax

cond:
	cmp		BYTE [rdi + rax], 0		;
	jne		loop					; si false -> loop

ret									; return rax
