; ======================================================== ;
; char		*ft_strcpy(char *dest, const char *src);
;
; The functions copy the string pointed to by src, into a
; string at the buffer pointed to by dest.
; Return: dest
;
; 1st arg:  rdi | 2nd arg:  rsi
; ======================================================== ;

section		.text
global		ft_strcpy

ft_strcpy:
	mov		rax, rdi        ; return = dest = rdi
	xor		rcx, rcx        ; met rcx a 0

loop:
	cmp		BYTE[rsi + rcx], 0  ; si rsi[rcx] == 0
	je		end                 ; return
	mov		dl, [rsi + rcx]     ; on met rdi[rcx] dans dl pour check bit par bit
	mov		[rax + rcx], dl     ; on met dl dans rax[rcx]
	inc		rcx                 ; rcx++
	jmp		loop

end:
	mov     BYTE[rax + rcx], 0
	ret