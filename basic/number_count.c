#include <stdio.h>


int main() {
	int count = 0;
	float input = 0;
	while (count < 5) {
		float user_input;
		printf("%d numbers remaining \n", 5 - count);
		scanf("%f", &user_input);
		input = user_input + input;
		printf("Current value is at %1.4f \n", input);
		count ++;
	}

	printf("The final answer is %1.9f", input);
	return 0;
}

