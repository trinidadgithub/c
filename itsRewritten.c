/* Filename: itsRewritten.c
 * This program computs the large of two integers and prints to screen */

/* Original 							*/
/* #include <stdio.h> 						*/
/* int x,y;main() { printf( 					*/
/* "\nEnter two numbers: ");scanf("%d %d", &x, &y);printf( 	*/
/* "\n\n%d is bigger", (x>y)?x:y);return 0;} 			*/

/* Rewritten below for easier understanding */

#include <stdio.h>

int x,y;

main()
{ 
	printf( "\nEnter two numbers: " );
	scanf( "%d %d", &x, &y );
	printf( "\n\n%d is bigger", ( x > y ) ? x: y );
	
	return 0;
}
