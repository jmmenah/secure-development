		global	main
		extern printf
		section .data
total	dd 10
fmt		db "El resultado es: %d", 0

		section .text
main:	
		;Crea el frame stack
		push ebp
		mov ebp, esp

		xor eax, eax		;Borra eax
		mov ecx, [total]	;Mueve el total a ecx
suma:	add eax, ecx		;Acumula la suma de ecx en eax
		loop suma			;Decrementa ecx y salta si ecx distinto de 0. Si ecx==0 continua

		push eax			;Se hace push del último argumento de la funcion. Orden inverso
		push fmt			;Se hace push del primer argumento de la funcion
		call printf			;Se llama a la función printf de glibc
	

		;Destruye el frame stack
		mov esp, ebp
		pop ebp
		ret

	
	
