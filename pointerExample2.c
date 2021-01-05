/* Filename:  pointerExample2.c
 * The program demonstrates the relationship between addresses and elelments of arrays of different data types. */

#include <stdio.h>

/* Declare three arrays and a counter variable. */

int i[10], x;
float f[10];
double d[10];

main()
{
	/* Print the table headiong */

	printf( "\t\tInteger\t\tFloat\t\tDouble");

	printf( "\n================================");
	printf( "==========================");

	/* Print the addresses of each array element. */

	for ( x = 0; x < 10; x++ )
		printf( "\nElement %d:\t%ld\t%ld\t%ld", x, &i[x], &f[x], &d[x] );


	printf( "\n================================");
	printf( "==========================");

	return 0;
}
