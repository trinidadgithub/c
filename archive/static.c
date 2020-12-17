#include <stdio.h>

/* function declaration */
void func(void);

static int count = 5; /* global variable declaration and assigment */

main () {
	while(count--) {
		func();
	}

	return 0;
}

/* function definition */
void func(void) {
	static int i = 5; /* local static variable declaration and assignment */
	i++;

	printf("i is %d, count is %d", i, count);
}

