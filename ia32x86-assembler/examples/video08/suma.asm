		global	_start
		section .data
total	dd 10

		section .text
_start:	xor eax, eax		;eax=0
		xor ecx, ecx		;ecx=0
		mov ecx, [total]	;Movemos el total a ecx
suma:	add eax, ecx		;Acumulamos la suma del contador en eax. eax = eax + ecx
		dec ecx				;Decrementamos el contador
		jnz	suma			;Saltamos si el bit de estado z es 0. Se pondrá a 1 si la operación anterior es 0 EFLAGS

		mov ebx, 0
		mov eax, 1
		int 80h				;sys_exit


