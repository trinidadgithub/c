/* Filename:  precedenceDemo.c
 * This program demonstrates how logical operators take precedence */

#include <stdio.h>

/* Initialize variables.  Note that c is not less that d, 	*/
/* which is one of the conditions to test for. 			*/
/* Therefore, the entire expression should evaluate as false. 	*/

int a = 5, b = 6, c = 5, d = 1;
int x;

main()
{
	/* Evaluate the expression without parentheses */

	x = a < b || a < c && c < d;
	printf( "\nWithout parentheses the expression evaluates as %d", x );

	/* Evaluate the expression with parenthese */

	x = ( a < b || a < c ) && c < d;
	printf( "\nWith parentheses the expression evaluates as %d\n", x );

	return 0;
}
