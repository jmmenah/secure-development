//Crea la estructura persona con los campos nombre, apellidos y dirección. Guarda en un array 2 personas. 
//Implementa una función que guarde en un archivo los datos y otra que los recupere en memoria. 
//Usa paso por valor y paso por referencia.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

struct persona
{
    char nombre[50];
    char apellidos[50];
    char direccion[80];
};

int main(){

    escritura();
    lectura();

    return 0;
}
 
int escritura ()
{
    FILE *salida;
     
    salida = fopen ("persona.dat", "w");
    if (salida == NULL)
    {
        fprintf(stderr, "\nError opened al abrir el archivo\n");
        exit (1);
    }

    struct persona persona[2]={
        {"Juan Manuel", "Mena","calle nueva 1"},
        {"Antonio", "Hernandez","calle ancha 2"}
    };


    for(int i=0;i<2;i++){
        fwrite (&persona[i], sizeof(struct persona), 1, salida);
    }
     
    if(fwrite != 0)
        printf("\nEl contenido se ha escrito correctamente.\n");
    else
        printf("\nError al escribir el contenido.\n");
 
    // close file
    fclose (salida);
 
    return 0;
}

int lectura(){
    FILE *fichero;

	if ((fichero = fopen( "persona.dat", "r" )) == NULL) {
		printf( "\nNo se puede abrir el fichero.\n" );
		exit( 1 );
	}
    struct persona persona;

	while (!feof(fichero)) {
		if (fread( &persona, sizeof(struct persona), 1, fichero )) {
			printf( "\nNombre: %s\n",   persona.nombre );
			printf( "Apellido: %s\n", persona.apellidos);
			printf( "Direccion: %s\n", persona.direccion);
            printf("\n---------------------------------\n");
		}
	}

	fclose( fichero );
    return 0;
}