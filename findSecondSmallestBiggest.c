/* Filename:  findSecondSmallestBiggest.c
 * This program determines the second smallest and second biggest in an array */
#include <stdio.h>

int array[] = { 9, 8, 2, 3, 4, 0 };
int smallest, biggest, secondSmallest, secondBiggest, temp, i,j, smallest_location, biggest_location;
int MAX = sizeof( array ) / sizeof( array[0] );

int find_minimum(int a[], int n);
int find_maximum(int a[], int n);
int find_secondSmallest( int a[], int n, int secondSmallest );
int find_secondLargest( int a[], int n, int secondBiggest );

main()
{
	smallest_location = find_minimum( array, MAX );
	biggest_location = find_maximum( array, MAX );
	secondSmallest, secondBiggest = array[0];

	smallest = array[smallest_location];
	biggest = array[biggest_location];

	printf("\nSmallest value in array is %d: ", smallest );
	printf("\nBiggest value in array is %d: ", biggest );

	/*secondSmallest = smallest; */
	secondSmallest = find_secondSmallest( array, MAX, smallest ) ;
	secondBiggest = biggest;

	/*		
	for ( i = 0; i < MAX; i++ ) 
	{ 
		for ( j = i + 1; j < MAX; j++ ) 
		{
			if  ( array[i] < array[j] )
			{
			        temp = secondSmallest;
				secondSmallest = array[i];
				if ( temp > smallest && secondSmallest > temp ) {
					secondSmallest = temp;
				}
			}
		}
	}
	*/
	
	printf("\nSecond Smallest is array is %d: ", secondSmallest );

	return 0;

}
/* Function: find_secondSmallest */
int find_secondSmallest(int array[], int MAX, int secondSmallest ) {
	int i, j, temp;

	for ( i = 0; i < MAX; i++ )
        {
                for ( j = i + 1; j < MAX; j++ )
                {
                        if  ( array[i] < array[j] )
                        {
                                // Hold secondSmallest in a safe place 
                                temp = secondSmallest;
                                // Replace value of secondSmallest with next array[i] value 
                                secondSmallest = array[i];
                                // Test to make sure that new array[i] is not greater than
                                // second smallest found.  If so, restore secondSmallest from
                                // temp 
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
	



        



	




