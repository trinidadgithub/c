/* Filename:  unionExample.c
 * This program is an example of using more than one unionmember at a time */
#include <stdio.h>

main()
{
	union shared_tag {
		char c;
		int i;
		long l;
		float f;
		double d;
	} shared;

	shared.c = '$';

	printf( "\nchar c\t= %c", 	shared.c );
	printf( "\nint i\t= %d", 	shared.i );
	printf( "\nlong li\t= %ld", shared.l );
	printf( "\nfloat f\t= %f",	shared.f );
	printf( "\ndouble d\t= %f", 	shared.d );

	shared.d = 123456789.8765;

	printf( "\n\nchar c\t= %c", 	shared.c );
	printf( "\nint i\t= %d",	shared.i );
	printf( "\nlong l\t= %ld", shared.l );
	printf( "\nfloat f\t= %f",	shared.f );
	printf( "\ndouble d\t= %f\n",shared.d );

	return 0;
}
