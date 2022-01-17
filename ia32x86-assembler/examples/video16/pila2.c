#include <stdio.h>

int suma(int a, int b) {
	int c = 3;
	int d = 4;
	int temp = a + b + c + d;

	return temp;
}


int main() {
	int a = 1;
	int b = 2;
	int c = 0;

	c = suma(a, b);
	printf("El resultado es: %d\n", c);
	return 0;
}
