#include <stdio.h>

/* function declaration */
double getAverage(int arr[], int size);

int main () {
	/* an int array with 5 elements */
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;

	/* pass pointer to the array as an argument */
	avg = getAverage( balance, 5);

	/* output the retruned value */
	printf("Average value is: %f", avg);

	return 0;
}
