extern printf ; add this line to the top of your file

section .data
    message db "Hello, Holberton", 10, 0 ; define the message string

section .text
    global main ; the entry point for our program

main:
    ; set up the stack frame
    push rbp
    mov rbp, rsp

    ; prepare arguments for printf
    mov rdi, message
    xor eax, eax

    ; call printf
    call printf

    ; restore the stack frame and return
    mov rsp, rbp
    pop rbp
    ret
