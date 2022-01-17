            global _start
            section .text

_start:
            xor eax, eax    ;eax = 0
            xor ecx, ecx    ;ecx = 0

loop:       mov eax, ecx    ; movemos el contador a eax
            add eax, 48     ; convertimos a ascii
            push eax        ; guardamos eax en la pila
            mov eax, esp    ; obtenemos puntero al valor a imprimir
            call print      ; llamamos a la función print
            pop eax         ; quitamos el valor guardado anteriormente
            inc ecx         ; ecx = ecx + 1
            cmp ecx, 20     ; comparamos ecx con 20
            jnz loop        ; Iteramos mientras ecx < 20
            call exit       ; Termina el programa


print:                      ; Función print. eax es un parámetro puntero
            push eax        ; Imprime el primer caracter del buffer al que apunta eax
            push ebx
            push ecx
            push edx        ; Guardamos el estado de los registros que vamos a modificar

            mov ecx, eax    ; puntero a cadena a escribir
            mov eax, 4      ; Llamada Nº 4 write (en x86 32 bits)
            mov ebx, 1      ; stdout
            mov edx, 1      ; size = 1 byte
            int 0x80        ; Llamada al sistema

            pop edx
            pop ecx
            pop ebx
            pop eax         ; Restauramos los registros

            ret



exit:
            mov eax, 1
            mov ebx, 0
            int 0x80
