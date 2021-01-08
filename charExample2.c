/* Filename: charExample2.c
 * The program domonstrates printing extended ASCII character */
#include <stdio.h>
#include <locale.h>

unsigned char x; /* Must be unsigned for extended ASCII */

main()
{
	/* Print extended ASCII characters 180 through 203 */
	setlocale(LC_CTYPE, "");
	printf("ASCII code 255 is character %c\n", 255 );
	
	/* for ( x = 1; x < 255; x++ )
	{
		printf("ASCII code %d is character %c\n", x, x );
	}
	return 0; */
}

