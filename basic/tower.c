#include <stdio.h>

void towerOfHanoi(char s, char d, char e, int n){
	if (n <= 0)
		return;
	towerOfHanoi(s,e,d,n-1);
	printf("Move Disk - %d From %c To %c\n", n,s,d);
	towerOfHanoi(e,d,s,n-1);
}

int main(){

	towerOfHanoi('s','d','e',3);
	
}	
