//Recorre una cadena mediante un puntero imprimiendo cada uno de sus caracteres.

#include <stdio.h>;

void main(){
    char *cadena="Hola";
    char *caracter=cadena;

    while(*caracter!='\0'){
        printf("%c",*caracter);
        caracter++;
    }
}