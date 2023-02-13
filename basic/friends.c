#include <stdio.h>

int friends_counter(int week){
	return 5 + 2* week - week;
}

int main () {
	int week, result;
	printf("Enter the week, I tell you the number of friends \n");
	scanf("%d", &week);
	result = friends_counter(week);
	printf("Dear friend on week %d, You will have %d friends \n", week, result);
}


