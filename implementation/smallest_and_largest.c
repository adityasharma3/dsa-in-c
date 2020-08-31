#include <stdio.h>
#include <limits.h>

void main() {
	int n;
	printf("\nEnter number of elements in array: \n");
	scanf("%d" , &n);
	int arr[n]; 

	for (int i=0 ; i<n ; i++) {
		printf("Enter element %d :", i+1);
		scanf("%d" ,&arr[i]);
	}

	int smallest = INT_MAX;
	int largest =  INT_MIN;

	for (int j=0 ; j<n ; j++) {
		if (arr[j] > largest) {
			largest = arr[j];
		}

		if (arr[j] < smallest) {
			smallest = arr[j];
		}
	}

	printf("%d is the largest number in the array\n", largest);
	printf("%d is the smallest number in the array\n", smallest);

}