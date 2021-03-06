/* Filename:  findSecondSmallestBiggest.c
 * This program determines the second smallest and second biggest in an array */
#include <stdio.h>

int array[] = { 19, 9, 18, 12, 13, 14, 10, 20 };	// The array to analyze
int smallest;					// Smallest value in array
int biggest;					// Biggest value in array
int secondSmallest;				// Second smallest value in array
int secondBiggest;				// Second biggest value in array
int smallest_location;				// Index of small value in array
int biggest_location;				// Index of biggest value in array

int MAX = sizeof( array ) / sizeof( array[0] ); // Get the array size
int find_minimum(int a[], int n);
int find_maximum(int a[], int n);
int find_secondSmallest( int a[], int n, int secondSmallest, int smallest );
int find_secondBiggest( int a[], int n, int secondBiggest, int biggest );

main()
{
	// Find the index of the smallest and biggest values
	smallest_location = find_minimum( array, MAX );
	biggest_location = find_maximum( array, MAX );

	// Assign smallest and biggest variables
	smallest = array[smallest_location];
	biggest = array[biggest_location];

	// Find 2nd smallest and biggest
	secondSmallest = find_secondSmallest( array, MAX, smallest, smallest ) ;
	secondBiggest = find_secondBiggest( array, MAX, biggest, biggest ) ;
	
	
	printf("\nSmallest value in array is %d: ", smallest );
	printf("\nBiggest value in array is %d: ", biggest );
	printf("\nSecond Smallest is array is %d: ", secondSmallest );
	printf("\nSecond Biggest is array is %d: ", secondBiggest );

	return 0;

}
/* Function: find_secondSmallest
 * Create a variable, temp, to temporarily hold the second biggest so we can test it.
 * When function is called, set biggest and secondbiggest to smallest value in array.
 * Test to make sure that new array[i] value is not less than second biggest found.  
 * If so, restore secondBiggest from temp
 */
int find_secondBiggest(int array[], int MAX, int secondBiggest, int biggest ) {
	
	int i, j;
	int temp; // Temporary holder for secondBiggest, keep it safe for testing

	for ( i = 0; i < MAX; i++ )
        {
                for ( j = i + 1; j < MAX; j++ )
                {
                        if  ( array[i] > array[j] )
                        {
                                temp = secondBiggest; 		// Save it.
                                secondBiggest = array[i];	// Get next value in list
								// and test to make sure
								// it's not less than
								// second biggest found
                                if ( temp < biggest && secondBiggest < temp ) {
                                        secondBiggest = temp;
                                }
                        }
                }
        }
	return secondBiggest;
}
/* Function: find_secondSmallest
 * Create a variable, temp, to temporarily hold the second smallest so we can test it.
 * When function is called, set smallest and secondsmallest to smallest value in array.
 * Test to make sure that new array[i] value is not greater than second smallest found.  
 * If so, restore secondSmallest from temp
 */
int find_secondSmallest(int array[], int MAX, int secondSmallest, int smallest ) {
	
	int i, j;
	int temp; // Temporary holder for secondSmallest, keep it safe for testing

	for ( i = 0; i < MAX; i++ )
        {
                for ( j = i + 1; j < MAX; j++ )
                {
                        if  ( array[i] < array[j] )
                        {
                                temp = secondSmallest; 		// Save it.
                                secondSmallest = array[i];	// Get next value in list
								// and test to make sure
								// it's not greater than
								// second smallest found
                                if ( temp > smallest && secondSmallest > temp ) {
                                        secondSmallest = temp;
                                }
                        }
                }
        }
	return secondSmallest;
}
/* Function: find_minimum */
int find_minimum( int a[], int n ) {
	int i, index = 0;

	for ( i = 0; i < n; i++ )
	      if ( a[i] <  a[index] )
		      index = i;

	return index;
}
/* Function: find_minimum */
int find_maximum( int a[], int n ) {
	int i, index = 0;

	for ( i = 0; i < n; i++ )
	      if ( a[i] >  a[index] )
		     index = i;
	return index;
}
