section .text
  global start ;global is a directive that tells the assembler 
  global _main ;that the label is global and can be used by other files

start: ;start is a label 
  call _main ;call is a directive that calls a function
  ret ;ret is a directive that returns from a function

_main: ;_main is a label
  ret 

; compilation: 
;   linux: nasm -f elf64 -o minima.o minima.s
;   windows: nasm -f win64 -o minima.o minima.s
;   mac: nasm -f macho64 -o minima.o minima.s
; linking:
;   ld -o minima minima.o