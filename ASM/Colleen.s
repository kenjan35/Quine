section .data
	msg db "section .data%1$c	msg db %2$c%3$s%2$c, 0%1$c%1$csection .text%1$c	global main%1$c	extern printf%1$c%1$cmain:%1$c	sub rsp, 8%1$c%1$c	lea rdi, [rel msg]%1$c	mov esi, 10%1$c	mov edx, 34%1$c	lea rcx, [rel msg]%1$c	xor eax, eax%1$c	call printf%1$c%1$c	add rsp, 8%1$c	xor eax, eax%1$c	ret%1$c", 0

section .text
	global main
	extern printf

main:
	sub rsp, 8

	lea rdi, [rel msg]
	mov esi, 10
	mov edx, 34
	lea rcx, [rel msg]
	xor eax, eax
	call printf

	add rsp, 8
	xor eax, eax
	ret
