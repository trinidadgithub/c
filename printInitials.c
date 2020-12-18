/* Filename: printInitials.c
 * This program store ten initials and prints them backwards. */

#include <stdio.h>
#include <string.h>

main()
{
	char initials[10];

	initials[0]='A';
	initials[1]='B';
	initials[2]='C';
	initials[3]='D';
	initials[4]='E';
	initials[5]='F';
	initials[6]='G';
	initials[7]='H';
	initials[8]='I';
	initials[9]='J';

	printf( "9th, %c\n", initials[9]);
	printf( "8th, %c\n", initials[8]);
	printf( "7th, %c\n", initials[7]);
	printf( "6th, %c\n", initials[6]);
	printf( "5th, %c\n", initials[5]);
	printf( "4th, %c\n", initials[4]);
	printf( "3rd, %c\n", initials[3]);
	printf( "2nd, %c\n", initials[2]);
	printf( "1st, %c\n", initials[2]);
	printf( "0th, %c\n", initials[0]);
}
