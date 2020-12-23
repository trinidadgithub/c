/* Filename:  controlFlowDemo2.c
 * This program demonstrates the use of "if" statements */

#include <stdio.h>

int x, y;

main()
{
	/* Input the two values to be tested */

	printf( "\nInput an integer value for x: " );
	scanf( "%d", &x);
	printf( "\nInput an integer value for y: " );
	scanf( "%d", &y);

	/* Test values and print result */

	if ( x == y )
		printf( "x is equal to y\n" );
	else
		if ( x > y )
			printf( "x is greater than y\n" );
		else
			printf( "x is smaller than y\n" );

	return 0;
}

