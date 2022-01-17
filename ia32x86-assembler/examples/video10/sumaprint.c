#include <stdio.h>

void main() {
    int suma = 0;
    int total = 10;
    for(int i = total; i>=0; i--) {
        suma +=i;
    }
    printf("El resultado de la suma de los %d primeros numeros es:%d", total, suma);

}
