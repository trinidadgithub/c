/* Filename: getStringLength.c
 * This program gets the string length of the inputed string` */

#include <stdio.h>
#include <string.h>

main()
{
	char buffer[256];

	printf( "enter your name and press <ENTER>:\n" );
	gets( buffer );

	printf( "\nYour name has %d character and spaces!", strlen( buffer ) );

	return 0;
}

