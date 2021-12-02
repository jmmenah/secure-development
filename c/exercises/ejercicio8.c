//Implementa un programa que lea 5 argumentos en la línea de comandos. 
//Imprime los argumentos en salida estándar. 
//Si el número de argumentos no es el adecuado imprime un mensaje de error.
#include <stdio.h>

int main(int argc , char *argv[])
{
    if( argc < 6 )
    {
        printf("More arguments expected.\n");
    }
    else if( argc > 6 )
    {
        printf("Too many arguments supplied.\n");
    }
    else
    {
    printf("Entered words are %s , %s, %s, %s and %s \n", argv[1], argv[2], argv[3], argv[4], argv[5]);
    }
    return 0;
}