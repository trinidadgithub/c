/* Filesname: seconds.c
 * This program demonstrates how to pause execution */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sleep( int nbr_seconds );

void main( void )
{
	int x;
	int wait = 13;

	/* Pause for a number of seconds. Print a 	*
	 * dot each second waited.			*/

	printf( "Delay for %d second\n", wait );
	printf( ">");

	for ( x=1; x <= wait; x++ )
	{
		printf( "." ); 		/* print a dot */
		fflush( stdout );	/* force dot to print on buffered machines */
		sleep( (int) 1 );	/* pause 1 second */
	}
	printf( "Done!\n");
}

/* Pauses for a specified number of seconds */
void sleep( int nbr_seconds )
{
	clock_t goal;

	goal = ( nbr_seconds * CLOCKS_PER_SEC) + clock();

	while( goal > clock() )
	{
		; /* loop */
	}
}
