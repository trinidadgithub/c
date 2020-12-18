/* Filename:  tvShows.c
 * This program stores and prints names of favorite tv shows */

#include <stdio.h>
#include <string.h>

main()
{
	char show1[] = "Battle Star Galactica";
	char show2[25];

	strcpy( show2, "Star Trek, Voyager" );

	printf( "First favorite tv show: %s\n", show1 );
	printf( "Second favoriate tv show: %s\n", show2 );

}
