/* Filename:  ifExample.c
 * This program assigns the value of x to the variable y only if x
 * is between 1 and 20.  Leave y unchanged if x is not in the range. */

#include <stdio.h>

int x, y;

main()
{
	printf( "\nEnter a value for x: \n" );
	scanf( "%d", &x);
	printf( "\nEnter a value for y: \n" );
	scanf( "%d", &y);
	if ( x > 1 && x < 20 ) 
	{
		y = x;
		printf( "\nThe value is y is now: %d \n", y );
	}
}
