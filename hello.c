/* enable the following is using gcc */
#include <stdio.h>
/* Enable the following if using g++, if you use gcc you'll get an error. */
/* #include <cstdio>  */

main()
{
	char myName[256][256], sales_89 ;
	myName[0][0] = '1';
	myName[0][1] = '2';

	printf( "Hello, World!\n" );
	printf( "%c\n", myName[0][0] );
	printf( "%c\n", myName[0][1] );
	return 0;
}

