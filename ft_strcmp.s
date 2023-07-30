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
	xor		rax, rax        ; met rax, rdx rcx a 0
	xor		rdx, rdx
	xor		rcx, rcx

loop:
	mov		al, [rdi + rcx] ; on met rdi[rcx] dans al pour comparer bit par bit
	mov		dl, [rsi + rcx] ; on met rsi[rcx] dans dl pour comparer bit par bit
	cmp		al, 0           ; si al == 0
	je		end             ; return
	cmp		dl, 0           ; si dl == 0
	je		end             ; return
	cmp		al, dl          ; si al == dl : zf = 0
	jne		end             ; return
	inc		rcx             ; sinon rcx++

end:
	sub		rax, rdx
	ret