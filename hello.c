/* enable the following if using gcc */
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
	char myName1[] = "This is a C string.";
	char state[] = { 'T', 'e', 'x', 'a', 's', '\0'};
	char state1[] = { 'T', 'e', 'x', 'a', 's'};
	
	

	printf( "Hello, World!\n" );

	/*printf( "%c\n", myName[0][0] );
	printf( "%c\n", myName[0][1] ); */

	/*printf( "%s\n", myName );
	printf( "%s\n", myName1); */
	printf( "%s\n", state);
	printf( "%s\n", state1);

	return 0;
}

