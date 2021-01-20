/* Filename:  mallocExample.c
 * This program demonstrates the use of malloc() to allocate storage
 * space for string data. */
#include <stdio.h>
#include <stdlib.h>

char count, *ptr, *p;

main()
{
	/* Allocate a block of 35 bytes.  Test for success. */
	/* the exit() libraryfunction terminates the program. */

	ptr = malloc(35 * sizeof( char ) );

	if ( ptr == NULL )
	{
		puts( "Memory allocation error." );
		exit(1);
	}

	/* Fill the string with value 65 through 90,
	 * which are the ASCII codes for A-Z. */

	/* p is a pointer used to step through the string.
	 * You want ptr to remain pointed at the start
	 * of the string.
	 */

	p = ptr;

	for ( count = 65; count < 91 ; count++ )
	{
		*p++ = count;
	}

	/* Add the terminating null character. */

	*p = '\0';

	/* Display the string on the screen. */

	puts( ptr );

	return 0;
}
