global ft_strlen

ft_strlen:
	xor		rcx, rcx				; on copie 0 dans rcx
 	# xor		rax, 0					; on met rax a 0 

loop:
	cmp		BYTE [rdi + rcx], 0		;
  	jz		return					; si jz = (rdi[rcx] == 0) -> return
	inc		rcx						; sinon on incremente rcx
 	# cmp		BYTE [rdi + rax], 0		;
	# je		return					; si je = (rdi[rax] == 0) -> return
 	# inc		rax						; sinon on incremente rax
	jmp		loop					; boucle sur loop

return:
	mov 		rax, rcx			; on copie rcx dans rax
	ret								; return rax

# -------------------------------------------------------------- #
# Use rcx is a good practice ? or is worth to use rax directly ? #
# -------------------------------------------------------------- #
