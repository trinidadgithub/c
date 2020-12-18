/* Filename: convertToCelcius.c
 * This program takes input from the user to convert Fahrenheit to Celcius */

#include <stdio.h>

main()
{
	float fahrenheitTemp, celciusTemp;

	printf( "What is temperature in Fahrenheit?: " ); /* Prompt the user */
	scanf( "%f" , &fahrenheitTemp );
	printf( "%.2f\n",  fahrenheitTemp );

	celciusTemp = ( fahrenheitTemp - 32.0 ) * ( 5.0 / 9.0 );

	printf( "Celcius Temperature is %.2f\n", celciusTemp );

	return 0;
}




