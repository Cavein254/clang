#include <stdio.h>
#define PI 3.14159


int main (void) {
	float area, circum, radius;
	printf("What is the radius of the pizza? \n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	printf("Your pizza measurements are as follows: \n");
	printf("Circumfrance = %1.8f, area = %1.8f \n", circum, area);
		return 0;
}
