#include <stdio.h>
#define PI 3.4567

float circumfrace(float radius){
	return 2 * PI * radius;
}

int main(){
	double c1 = circumfrace(14.0);
	double c2 = circumfrace(28.23);
	printf("The circumfaraces of the ci is %1.6f and c2 %1.6f \n", c1,c2);
}

	
