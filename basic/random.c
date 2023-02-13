#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	time_t t;
	int count = 1;
	int num;

	srand(time(&t));
	printf("Lets get some random variables \n");
/*	for(int i = 0; i < 20;  i++) {
		int num = (rand() % 100);
		printf(" %i: number is %d \n", i, num);
	}
*/
	while(num != 99) {
		printf("Running for the %d times and we have %d \n", count, num);
		count ++ ;
		num = rand() % 100;
	}

}
