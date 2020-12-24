/* Filename: returnIt.c
 * This program demonstrates using multiple return sdtations in a function. */

#include <stdio.h>

int x, y, z;

int larger_of( int, int );

main()
{
	puts( "Enter two different integer values: " );
	scanf( "%d%d", &x, &y );

	z = larger_of( x, y );
        
	printf( "\nThe larger value is %d.", z );

	return 0;
}

int larger_of( int a, int b )
{
	int save;

	if ( a > b )
		save = a;
	else
		save = b;

	return save;
}

