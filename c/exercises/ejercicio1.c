//Crea un array estatico de 20 enteros. Inicialízalo con los números del 1 al 20. 
//Después invierte el array. Haz que sea el usuario el que inserte los valores mediante la entrada estándar.
#include <stdio.h>

int main(){
    int numeros[20];
    for(int i=0; i<20; i++){
        printf("Introduce un numero: ");
        scanf("%d",&numeros[i]);
    }

    int temp,n=20;
    for (int k=0;k < n/2;k++)
    {
        temp = numeros[k];
        numeros[k]=numeros[n-k-1];
        numeros[n-k-1] = temp;
    }
    
    for(int j=0; j<20; j++){
        printf("%i ",numeros[j]);
    }
}

