#include <stdio.h>
#include <stdlib.h>

#define PARAMS 3

long suma(int inicio, int fin){
    long suma=0;
    for (int i = inicio; i <= fin; i++)
    {
        suma+=1;
    }
    return suma;
}


int main(int argc, char * argv[]){
    long resultado;
    printf("El numero de argumentos es %d\n",argc);
    if (argc == PARAMS)
    {
        int sumando1 = atoi(argv[1]);
        int sumando2 = atoi(argv[2]);
        resultado = suma(sumando1,sumando2);
        printf("%ld\n", resultado);
    }else{
        printf("Error en el numero de argumentos.\n");
    }

    return 0;
    
}