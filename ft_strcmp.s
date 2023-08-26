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
    mov		al, byte [rdi]  ; Charge le prochain octet de la première chaîne
    mov		dl, byte [rsi]  ; Charge le prochain octet de la deuxième chaîne
    cmp		al, dl          ; Compare les octets 
    jne		different     	; si al = dl -> "different" sinon -> "continue"

continue:
    inc		rdi             ; Passe à l'octet suivant dans la première chaîne
    inc		rsi             ; Passe à l'octet suivant dans la deuxième chaîne
    test	al, al        	; Teste si la fin de la chaîne est atteinte
    jnz		loop           	; Si oui -> "end", si non -> "loop"

end:
    ret

different:
    test 	al, al         	; Teste si l'octet de la première chaîne est nul
    jz		aless    		; Si oui -> "aless"
    test	dl, dl         	; Teste si l'octet de la deuxième chaîne est nul
    jz		bless 			; Si oui -> "bless"
    sub		rax, rdx        ; Calcule la différence
    mov		rax, rax
    ret

aless:
    mov		rax, -1         ; Renvoie -1
    ret

bless:
    mov		rax, 1         	; Renvoie 1
    ret
