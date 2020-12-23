/* Filename:  modulusDemo.c
 * This program demonstrates the modulus operator */

#include <stdio.h>

/* Define constans */

#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600

unsigned seconds, minutes, hours, secs_left, mins_left;

main()
{
	/* Input the number of seconds */

	printf( "Enter number of seconds (< 65000): " );
	scanf( "%d", &seconds );

	hours = seconds / SECS_PER_HOUR;
	minutes = seconds / SECS_PER_MIN;
	mins_left = minutes % SECS_PER_MIN;
	secs_left = seconds % SECS_PER_MIN;

	printf( "%u seconds is equal to ", seconds);
	printf( "%u h, %u m, and %u s\n", hours, mins_left, secs_left);

	return 0;
}

