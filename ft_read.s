global ft_read
extern __errno_location

ft_read:
	mov rax, 0						; syscall 1: read
	syscall							; appel write
	cmp rax, 0						; cmp avec zero
	jl fail							; si cmp = false
	ret

fail:								; si erreur: errno set rax a < 0
	neg rax							; [rax *= -1]
	mov rdi, rax					; cpy erreur ds rdi
	call __errno_location WRT ..plt	; get errno addr
	mov [rax], rdi					; store erreur a rdi
	mov rax, -1						; met rax a -1
	ret
