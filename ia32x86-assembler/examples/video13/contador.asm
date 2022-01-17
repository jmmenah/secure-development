            global _start
            section .text

_start:
            xor eax, eax    ; eax = 0
            xor ecx, ecx    ; ecx = 0

loop:       mov eax, ecx    ; Movemos el contador a eax
            call iprint     ; Imprimimos el nº almacenado en eax. Guardamos en eax el parámetro.
            inc ecx         ; Incrementeamos el contador
            cmp ecx, 200000 ; Comparamos con 200.000
            jnz loop        ; Iteramos mientras ecx sea menor que 200.000
            call exit       ; Termina el programa


iprint:                     ; Función iprint
            push eax
            push ecx
            push edx
            push esi        ; Guardamos los registros que vamos a modificar en la pila

            xor ecx, ecx    ; ecx = 0

divloop:    inc ecx         ; ecx = ecx +1
            mov esi, 10     ; esi = 0
            mov edx, 0      ; edx = 0
            idiv esi        ; Divide edx:eax entre esi. El cociente se guarda en eax. El resto en edx
            add edx, 48     ; Sumamos 48 al resto. Es decir nos vamos al caracter ascii que representa al número que está en el resto.
            push edx        ; Guardamos el valor en la pila
            cmp eax, 0      ; En eax tenemos el cociente.
            jnz divloop     ; Iteramos mientras el cociente no sea 0.

                            ;Tenemos el nº convertido a cadena en la pila.
ploop:      mov eax, esp    ;Movemos esp (tope de la pila) a eax. Apunta al dígito a imprimir.
            call print      ;Llamamos a print que imprime el dígito que está en eax (de 0 a 9)
            pop eax         ;Nos movemos abajo en la pila para imprimir el siguiente dígito
            loop ploop      ;Iteramos mientras ecx>0

            mov eax, intro 
            call print      ;Imprimimos un intro

            pop esi
            pop edx
            pop ecx
            pop eax         ; Restauramos el valor de los registros
            ret


print:                      ; Función que imprime el carácter ascii al que apunta eax
            push eax
            push ebx
            push ecx
            push edx        ; Guardamos el estado de los registros
    
            mov ecx, eax    ; Puntero a buffer
            mov eax, 4      ; Nº de llamada write
            mov ebx, 1      ; stdout
            mov edx, 1      ; 1 byte a escribir
            int 0x80        ; Llamada al sistema write

            pop edx
            pop ecx
            pop ebx
            pop eax         ; Restauramos los registros

            ret



exit:
            mov eax, 1
            mov ebx, 0
            int 0x80        ; Llamada al sistema exit

            section .data
intro:      db 0Ah