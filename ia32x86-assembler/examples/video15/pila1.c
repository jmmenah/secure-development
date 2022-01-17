#include <stdio.h>

int suma() {
	int a = 1;
	int b = 2;

	return a + b;
}

int main() {
	int a = 0;
	int b = 0;
	int resul = 0;

	resul = suma(); //resul = 1 + 2
	printf("El resultado es: %d\n", resul);
	return 0;
}
