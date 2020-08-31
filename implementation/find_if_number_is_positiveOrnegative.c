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

	int postive = 0 , negative = 0, zero = 0;
	for (int j=0; j<n ; j++) {
		if (arr[j] > 0) {
			postive++;
		}

		if (arr[j] < 0) {
			negative++;
		}

		if(arr[j] == 0) {
			zero++;
		}
	}

	printf("%d postive integers present\n", postive);
	printf("%d negative integers present\n", negative);
	printf("%d zeroes present\n",zero);
}