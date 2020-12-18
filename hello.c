/* enable the following is using gcc */
#include <stdio.h>
#include <string.h>
/* Enable the following if using g++, if you use gcc you'll get an error. */
/* #include <cstdio>  */

main()
{
	/*char myName[256][256], sales_89 ;
	myName[0][0] = '1';
	myName[0][1] = '2'; */

	char myName[11] = "This is C.";
	char myName1[11] = 5;
	
	

	printf( "Hello, World!\n" );

	/*printf( "%c\n", myName[0][0] );
	printf( "%c\n", myName[0][1] ); */

	printf( "%s\n", myName );
	printf( "%s\n", myName1);

	return 0;
}

