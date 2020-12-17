#include <stdio.h>

char testvar = "s";

main () {

  if(1) {
	printf("1 is true\n");
  }
  if(testvar) {
	printf("testvar is true\n");
  }

  else {
	printf("testvar is false\n");
  }
}



