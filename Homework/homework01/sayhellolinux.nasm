        global      main
        extern      printf

        section .rodata
message: db  "Hello, World!", 10, 0

        section .text
main:   push    rbx                 ; save rbx
        lea     rdi, [rel message]  ; first argument
        xor     eax, eax            ; no vector regs used
        call    printf wrt ..plt    ; use PLT for PIE-compatible call
        xor     eax, eax            ; return 0
        pop     rbx                 ; restore rbx
        ret