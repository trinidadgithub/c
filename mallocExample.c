/* Filename:  memallocExample.c
 * This program is an example of memory allocation */
#include <stdlib.h>
#include <stdio.h>
main()
{
	/* allocate memory for a 100-character string */
	char *str;
	if ( ( str = ( char * ) malloc( 100 ) ) == NULL)
	{
		printf( "Not enough memory to allocate buffer\n");
		exit(1);
	}
	printf( "String was allocated!\n" );
	/* allocate memory for an array of 50 integers */
	int *numbersInt;
	if ( ( numbersInt = ( int * ) malloc( 50 * sizeof( int ) ) ) == NULL)
	{
		printf( "Not enough memory to allocate buffer\n");
		exit(1);
	}
	printf( "Integer array was allocated!\n" );

	/* allocate memory for an array of 10 float values */	
	float *numbersFloat;
	if ( ( numbersFloat = ( float * ) malloc( 10 * sizeof( float ) ) ) == NULL)
	{
		printf( "Not enough memory to allocate buffer\n");
		exit(1);
	}
	printf( "Float array was allocated!\n" );

	return 0;
}

