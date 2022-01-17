#include <stdio.h>

int calcular(int *lista, int tam) {
    int suma = 0;
    for(int i = 0; i < tam; i++) {
        suma +=lista[i];
    }
    return suma;
}

int main() {
    int numeros[] = {0,1,2,3,4,5};
    int tam = 6;
    int suma = calcular(numeros, tam);
    printf("%d", suma);

}
