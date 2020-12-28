/* Filename:  address.c
 * This program stores and prints a persons address */

#include <stdio.h>
#include <string.h>

void xprint()
{
	char name[256], address[256], city[256], state[256], zipcode[256];

	strcpy( name, "SomeName" );
	strcpy( address, "SomeAddress" );
	strcpy( city, "SomeCity" );
	strcpy( state, "SomeState" );
	strcpy( zipcode, "SomeZip" );

	printf( "Name: %s\n", name );
	printf( "Address: %s\n", address );
	printf( "City: %s\n", city );
	printf( "State: %s\n", state );
	printf( "Zipcode: %s\n", zipcode );

}
