#include <stdio.h>

void main() {
	int n;
	printf("\nEnter number of elements in array: \n");
	scanf("%d" , &n);
	int arr[n]; 

	for (int i=0 ; i<n ; i++) {
		printf("Enter element %d :", i+1);
		scanf("%d" ,&arr[i]);
	}

	printf("The sum of odd indices in the array is :\n");
	int sum = 0;
	for (int j=0 ; j<n ; j+=2) {
		sum += arr[j];
	}

	printf("%d\n",sum);
}