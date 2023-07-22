global ft_write
extern __errno_location

ft_write:
	mov rax, 1											; syscall 1: write
	syscall													; call write
	cmp rax, 0											; cmp to zero
	jl fail													; if cmp = false
	ret

fail:															; if error: errno set rax to < 0
	neg rax													; [rax *= -1] to get code errno
	mov rdi, rax										; cpy error in rdi
	call __errno_location WRT ..plt	; get the errno addr
	mov [rax], rdi									; store error at rdi
	mov rax, -1											; set rax to -1
	ret
