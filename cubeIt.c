/* Filename:  cubeIt.c
 * Demostrate how to calculate the cube using a C function */

#include <stdio.h>

long cube( long x );

long input, answer;

int main()
{
	printf( "\nEnter an integer value: " );
	scanf( "%d", &input);
	answer = cube( input );
	/* Note: %ld is the conversion specifier for */
	/* a long integer */
	printf( "\nThe cube of %ld is %ld.\n", input, answer);

	return 0;
}

/* Function: cube() - calculates the cubed value of a variable */
long cube( long x)
{
	long x_cubed;

	x_cubed = x * x * x;
	return x_cubed;
}

