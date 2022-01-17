;Crea un programa en ensamblador que sume los números del 1 al 9. El resultado se almacenará en el registro eax.	
		global	_start
		section .data
total	dd 10

		section .text
_start:	xor eax, eax		
		xor ecx, ecx		
		mov ecx, [total]	
suma:	add eax, ecx		
		dec ecx				
		jnz	suma			

		mov ebx, 0
		mov eax, 1
		int 80h				