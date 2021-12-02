#include <stdio.h>

int main(){
    long suma=0;
    int i;
    for (i = 1; i < 1000000; i++)
    {
        if (i % 2 == 0)
        {
            suma+=1;
        }
        
    }
    
    printf("El valor de i es %d y la suma es %ld",i,suma);
    return 0;
}