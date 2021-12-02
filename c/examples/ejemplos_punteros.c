#include <stdio.h>
#include <string.h>

int main(){
    int a=10;
    int b=20;
    int *c=&a;//guarda la direccion de a

    *c=0;//cambia a(ya que cambia el valor al que apunta a)

    c=&b;//guarda la direccion de b
    *c=0;//cambia b(ya que cambia el valor al que apunta a)

    c = c+2;//ahora c cambia la direccion a la direccion de a
    *c=0;

    char * msg="Hola mundo\n";

    int tam=0;
    for (tam = 0; msg[tam] != '\0'; tam++)
    { }

    printf("El tam de la cadena es; %d\n", tam);
    printf("El tam de la cadena es: %d\n",strlen(msg));
    
}