#include <stdio.h>

void bubbleSort(int *arr, int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=0; j<n-i-1;j++)
			if(arr[j]> arr[j+1])
				swap(&arr[j], &arr[j+1]);
}

int main()
{
/*	printf("%d",bubbleSort([12,32,1,4,22,7,11,3,5,7,22,5])); */
	printf("%d",bubbleSort(23,45));
}
