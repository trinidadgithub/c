/* Filename:  pointerExample4.c
 * This program is a demonstration of passing an array to a function */
#include <stdio.h>

#define MAX 10

int array[MAX + 1], count;

int largest( int x[] );

main()
{
	/* Input MAX values from the keyboard. */

	for ( count = 0; count < MAX; count++ )
	{
		printf("Enter an integer value: ");
		scanf( "%d", &array[count] );

		if ( array[count] == 0 )
			count = MAX;		/* will exit for loop */
	}
	array[MAX] = 0;

	/* Call the function and display the return value. */
	printf( "\n\nLarget value = %d\n", largest(array) );

	return 0;
}
/* Function largest() returns the largest value */
/* in an integer array */

int largest( int x[] )
{
	int count, biggest = -12000;

	for ( count = 0; x[count] != 0 ; count++ )
	{
		if ( x[count] > biggest )
			biggest = x[count];
	}

	return biggest;
}
