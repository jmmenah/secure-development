//Implementa un programa que pida al usuario(usa gets y scanf) el nombre 
//y después los apellidos de una persona. Crea una función que devuelva el nombre completo en mayúsculas.

#include <stdio.h>;
#include <ctype.h>;

void main(){
    mayusuculaGets();
    mayusuculaScanf();
}

void mayusuculaGets(){
    char nombre[20];
    char apellido[20];
    printf("Introduce tu nombre: \n");
    gets(nombre);
    for (int i = 0; nombre[i] != '\0'; ++i){
		nombre[i] = toupper(nombre[i]);
	}
    printf("Introduce tu apellido: \n");
    gets(apellido);
    for (int i = 0; apellido[i] != '\0'; ++i){
		apellido[i] = toupper(apellido[i]);
	}

    printf("Tu nombre es %s %s\n",nombre,apellido);
}

void mayusuculaScanf(){
    char nombre[20];
    char apellido[20];
    printf("\nIntroduce tu nombre: \n");
    scanf("%s",nombre);
    for (int i = 0; nombre[i] != '\0'; ++i){
		nombre[i] = toupper(nombre[i]);
	}
    printf("Introduce tu apellido: \n");
    scanf("%s",apellido);
    for (int i = 0; apellido[i] != '\0'; ++i){
		apellido[i] = toupper(apellido[i]);
	}

    printf("Tu nombre es %s %s\n",nombre,apellido);
}