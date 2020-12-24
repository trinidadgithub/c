/* Filename: unaryOperator.c
 * This program demonstrates unary operator prefix and postfix modes
 * and counts upwards. */

#include <stdio.h>

int a,b;

main()
{
	/* Set a and b both equal to 5 */

	a = b = 0;

	/* Print them, decrementing each time. */
	/* Use prefix mode for b, postfix mode for a */

	printf( "\n%d  %d", a++, ++b);
	printf( "\n%d  %d", a++, ++b);
	printf( "\n%d  %d", a++, ++b);
	printf( "\n%d  %d", a++, ++b);
	printf( "\n%d  %d\n", a++, ++b);

	return 0;
}
