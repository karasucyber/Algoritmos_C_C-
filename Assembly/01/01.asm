section .data

section .text

global _Start

_Start:
    mov eax, 0x1
    mov ebx, 0x0
    int 0x80