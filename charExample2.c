/* Filename: charExample2.c
 * The program domonstrates printing extended ASCII character */
#include <stdio.h>

unsigned char x; /* Must be unsigned for extended ASCII */

main()
{
	for ( x = 0; x < 255; x++ )
	{
		printf("ASCII code %d is character %c\n", x, x );
	}
	printf("ASCII code %d is character %c\n", 255, 255 );
	return 0; 
}

