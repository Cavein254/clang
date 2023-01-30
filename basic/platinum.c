#include <stdio.h>

int main(void) {
	float weight;/* user weight */
	float value;/*platinum value */
	printf("Are you worth you weight in platinum");
	printf("\n Enter your weight in pounds");
	scanf("%f",&weight );
	value = 1700 * weight * 14.5833;
	printf("\n Your weight in is worth $%.6f \n", value);
	return 0;
}

