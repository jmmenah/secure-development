//Crea un programa en C con una llamada a la función "calculo" con las variables locales a=10, b=5, c = 8 y que calcule a*b-c. 
//Compila y depura el programa. Crea un diagrama con el estado de la pila justo antes de realizar el cálculo en la función. Se debe de ver los marcos de pila, las variables locales, la dirección de retorno y el registro ebp guardado en la pila.
#include <stdio.h>

int calculo() {
    int a = 10;
    int b = 5;
    int c = 8;
    return a*b-c;
    
}

int main() {
    calculo();
}