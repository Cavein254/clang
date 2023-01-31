#include <stdio.h>

long long int power(int x,  int n){
	if(n == 0)
		return 1;
	else if (x == 1)
		return x;
	else
		return x * power(x, n-1);
}

int main(){
	printf("%lld\n", power(2,10));
	printf("%lld\n", power(2,42));
	printf("%lld\n", power(11,10));
	printf("%lld\n", power(21,10));
		}

