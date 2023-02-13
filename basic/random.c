#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Lets get some random variables \n");
	for(int i = 0; i < 20;  i++) {
		int num = (rand() % 100);
		printf(" %i: number is %d \n", i, num);
	}
}
