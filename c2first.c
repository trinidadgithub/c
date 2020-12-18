/* Filename:  c2first.c
 * Requests a name, prints the name 5 times, and rings a bell */

#include <stdio.h>
#define BELL '\a'

main()
{
	int ctr = 0; /* Integer variable to count through loop */
	char fname[20]; /* Define character array to hold name */

	printf( "What is your first name?: " ); /* Prompt the user */
	scanf( "%s", fname );
	while ( ctr < 5 ) /* Loop to print name 5 times */
	{
		printf( "%s\n", fname );
		ctr++;
	}
	printf( "%c", BELL); /* Ring the terminals bell */
	return 0;
}
