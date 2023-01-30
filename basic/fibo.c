#include <stdio.h>

long long int fibonacci(){
	static long long int first = 0;
	static long long int last = 1;
	long long int out = first + last;
	first = last;
	last = out;
	return out;
}

int main() {
	for(int i = 0; i< 50; i++)
			printf("%lli\n", fibonacci());
}
