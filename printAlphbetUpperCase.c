/* Filename: printAlphbetUpperCase.c
 * This program prints the alphabet in upper case */

#include <stdio.h>

main()
{
	int ctr;
	
	for ( ctr = 65; ctr < 91 ; ctr ++ )
		printf( "%c", ctr );

	return 0;
}
