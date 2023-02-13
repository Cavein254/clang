# NOTES IN C
Notice that when getting input from user from a command prompt as in:
```c
float height;
printf("What is your height?");
scanf("%1.2f", height);
```
produces an error `Segmentation fault`. The error is generated as the argument has no amphersand `&`.
```c
scanf("%1.2f", &height);
```

It is also important to note that using `%d` and `1.3f` produces different results.

It is also possible to input multiple values from a single line as:
```c
printf("Enter the top 5 marks \n");
scanf("%d %d %d %d %d", val1,val2,val3,val4,val5);
```
 #conversion 	#Output
 %a		Floating Point Number
 %c		Single Character
 %d		Single decima integer
%e		Floating Point Number, e-notation
 %f		Floating Point Number, decimal Notation
 %i		Unsigned integer similar to %d
 %p 		Pointer


Another way of declaring constants is the use of the `const` keyword. In this case
```c
const int MONTHS  = 12;
```
defines a constant for months

# Generating Random values
Note that using the `rand ()` function from the `stdlib.h` library generates random variables that are similar.
To generate truly random variables use the `srand()` header together with the system time from `time.h`.

```c
#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main() {
	time_t t;
	int count = 1;
	int num;

	srand(time(&t));
	while(num != 99) {
		printf(" %d with %d", count, num);
		count ++;
		num = rand() % 100;
		}
	}
```






