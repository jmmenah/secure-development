#include <stdio.h>
#include <string.h>

#define ELEMENTOS 10

main()
{
	char *apellidos[ELEMENTOS] = {
		"Mena",
		"Hernandez",
		"Garcia",
		"Ruiz",
		"Moral",
        "Fernandez",
        "Jaen",
        "Madrid",
        "Arjonilla",
        "Armenteros",
        "Moreno"
		};
	char *temp;
	int i, j;

	printf( "Lista desordenada:\n" );
	for( i=0; i<ELEMENTOS; i++ )
		printf( "  %s.\n", apellidos[i] );

	for( i=0; i<ELEMENTOS-1; i++ )
		for( j=i+1; j<ELEMENTOS; j++ )
			if ( strcmp(apellidos[i], apellidos[j]) > 0 ) {
				temp = apellidos[i];
				apellidos[i] = apellidos[j];
				apellidos[j] = temp;
			}

	printf( "Lista ordenada:\n" );
	for( i=0; i<ELEMENTOS; i++ )
		printf( "  %s.\n", apellidos[i] );
}