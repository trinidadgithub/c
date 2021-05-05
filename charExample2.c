/* Filename: charExample2.c
 * The program domonstrates printing extended ASCII character,
 * your terminal should be set to allow the printing of extended
 * characters, i.e. set to ISO-8859-15 or CP437 */
#include <stdio.h>

unsigned char x; /* Must be unsigned for extended ASCII */

main()
{
	/* Print extended ASCII characters 180 through 203 */
	for ( x = 180; x < 204; x++ )
	{
		printf("ASCII code %d is character %c\n", x, x );
	}
	return 0; 
}

