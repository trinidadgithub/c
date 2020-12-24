/* Filename:  factorial.c
 * The purpose of this program is the calculate the factorial of a number. */

#include <stdio.h>

unsigned int f, x;
unsigned int factorial( unsigned int a );

main()
{
	puts( "Enter an integer value between 1 and 8: ");
	scanf( "%d", &x);

	/* Check to make sure the input value is between 1 and 8 */
	if ( x > 8 || x < 1 )
	{
		printf( "\nOnly values from 1 to 8 are acceptable!" );
	}
	else
	{
		f = factorial(x);
		printf( "\n%u factorial equals %u\n", x, f);
	}

	return 0;
}

unsigned int factorial( unsigned int a )
{
	if ( a == 1 )
		return 1;
	else
	{
		a *= factorial( a - 1 );
		return a;
	}
}
