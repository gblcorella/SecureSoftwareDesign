global _start   
section .text
_start:
    mov rax, 0x1    ; syscall number for write 
    mov rdi, 0x1    ; int fd 
    mov rsi, msg    ; const void* buf 
    mov rdx, mlen   ; size
    syscall

    mov rax, 0x3c ; syscall 
    mov rdi, 0x1  ; int status
    syscall

section .data
    msg: db "Yo Momma, it works? ",0xa, 0xd
    mlen: equ $-msg