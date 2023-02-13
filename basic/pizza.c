#include <stdio.h>
#define PI 3.14159


int main (void) {
	float area, circum, radius;
	float val1, val2, val3, val4, val5;
	printf("What is the radius of the pizza? \n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	printf("Your pizza measurements are as follows: \n");
	printf("Circumfrance = %1.8f, area = %1.8f \n", circum, area);
	printf("Enter the top 5 marks \n");
	scanf("%f %f %f %f %f", &val1,&val2,&val3,&val4,&val5);
	
	float average = (val1 + val2 + val3 + val4 + val5)/5;
	printf("The average is %1.5f \n", average);
		return 0;
}
