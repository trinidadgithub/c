/* Filename:  arrayExample.c
 * This program demonstrates the use of an array */
#include <stdio.h>

/* Declare an array to hold expenses, and a counter variable */

float expenses[13];
int count;

main()
{
	/* Input data from keyboard into arrary */

	for ( count = 1; count < 13; count++ )
	{
		printf( "Enter expenses for month %d: ", count );
		scanf( "%f", &expenses[count] );
	}

	/* Print array contents */

	for ( count = 1; count < 13; count++ )
	{
		printf( "Month %d = %.2f\n", count, expenses[count]);
	}
	return 0;
}
