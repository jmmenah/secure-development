;Crea un programa en ensamblador que imprima un contador del 1 al 100. Usa printf de la librería de C.		
		global	main
		extern printf
		section .data
fmt		db "El resultado es: %d", 0

		section .text
main:	
		;Crea el frame stack
		push ebp
		mov ebp, esp

loop:   mov eax, ecx    ; Movemos el contador a eax
        inc ecx         ; Incrementeamos el contador
        cmp ecx, 100    ; Comparamos con 100
        jnz loop        ; Iteramos mientras ecx sea menor que 100

        
        push ecx		;Se hace push del último argumento de la funcion. Orden inverso
		push fmt		;Se hace push del primer argumento de la funcion
		call printf		;Se llama a la función printf de glibc
        

		;Destruye el frame stack
		mov esp, ebp
		pop ebp
		ret