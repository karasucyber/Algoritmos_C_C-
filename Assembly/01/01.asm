section .data
nomArquivo db ’arquivo.txt’, 0x0
conteudo db ’Hello World 2!’, 0xA
mens_erro db ’Erro ao abrir o arquivo!’, 0x0
section .text
global _start
_start:
mov rax, 0x2
mov rdi, nomArquivo
mov rsi, 0x2 | 0x40 | 0x80
mov rdx,

cmp rax, 0x0
jl erroExiste

continuar:
mov rdi, rax
mov rax, 0x1
mov rsi, conteudo
mov rdx, 15
syscall

mov rax, 0x3
mov rdi, [rsp]
syscall
jmp finalizar

erroExiste:
mov rax, 0x2
mov rdi, nomArquivo
mov rsi, 0x2 | 0x8 | 0x80
mov rdx, 0o666
syscall

cmp rax, 0x0
jl erro
jmp continuar

erro:
mov rax, 0x1
mov rdi, 0x1
mov rsi, mens_erro
mov rdx, 25
syscall

finalizar:
mov rax, 0x3C
xor rdi, rdi
syscall