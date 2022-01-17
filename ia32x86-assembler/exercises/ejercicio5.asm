		global	_start
		section .data
total	dd 9

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