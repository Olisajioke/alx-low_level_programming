section .data
hello db 'Hello, Holberton', 10 ; Hello, Holberton string with newline character
hello_len equ $ - hello ; Length of the hello string

section .text
extern printf ; Declare the printf function

global main
main:
; Prepare arguments for printf function call
mov rdi, hello ; First argument: address of the hello string
mov rax, 0 ; Variadic argument: no floating-point arguments
call printf ; Call the printf function
; Exit the program
mov eax, 0x60  ; Syscall number for exit
xor edi, edi   ; Exit status: 0
syscall        ; Call the exit syscall
