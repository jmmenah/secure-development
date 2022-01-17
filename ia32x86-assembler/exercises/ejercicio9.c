//Crea un programa que tenga en main las variables a=1, b=2. Crea la función resta con la variable local c=100 y que retorna c-a-b. 
//Compila y depura el programa. Crea un diagrama con el estado de la pila justo antes de la ejecución del cálculo.
#include <stdio.h>
int calculo(int a, int b) {
    
    int c = 100;
    return c-a-b;
    
}

int main() {
    int a = 10;
    int b = 5;
    calculo(a,b);
}