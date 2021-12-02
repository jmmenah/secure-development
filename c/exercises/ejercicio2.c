//Crea una función que elimine los elementos duplicados de un array.
#include <stdio.h>

int main (void) {
        int vec [10];
        int i,j,k;
        int tam = 10;
 

        for (i=0; i<tam; i++) {
                printf("Introduce el valor del array incial %d: ", i+1);
                scanf("%d",&vec[i]);
        }

        
	printf("Vector inicial: ");
	for(i = 0; i < tam; i++)
	{
		printf("%i ",vec[i]);
	}

	for(i = 0; i < tam; i++)
	{
		for(j = i+1; j < tam; j++)
		{
			if(vec[i] == vec[j])
			{
 
				k = j;
 
				while(k < tam)
				{
					vec[k] = vec[k+1];
					++k;
				}
 
				--tam;
				--j;
 
			}
 
		}
 
	}
 
	printf("\nVector final: ");

	for(i = 0; i < tam; i++)
	{
		printf("%i ",vec[i]);
	}
 
 
 
	return 0;
}