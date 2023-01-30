#include <stdio.h>

int sum(unsigned int n){
	if(n == 1)
		return 1;
	else
		return n + sum(n-1);
}

int main(int){
	printf("%d \n",sum(5));
	printf("%d \n",sum(4));
	printf("%d \n",sum(40));
	printf("%d \n",sum(10));
}
