/*
Let's take an array {20, 12 , 23, 55 ,21}

Set the first element of the array as minimum.

Minimum = 20

Compare the minimum with the next element, if it is smaller than minimum assign this element as minimum. Do this till the end of the array.

Comparing with 12 : 20 > 12 , minimum = 12

Comparing with 23 : 12 < 23 , minimum = 12

Comparing with 55 : 12 < 55 , minimum = 12

Comparing with 21 : 12 < 21 , minimum = 12


*/

#include <stdio.h>

void main() {

	int n;
	printf("Enter the number of elements:\n");
	scanf("%d" , &n);

	int arr[n];
	for (int i=0; i<n ; i++) {
		printf("Enter the %d element:", i+1);
		scanf("%d" , &arr[i]);
	}

	for (int j=0; j<n-1 ; j++) {
		for (int k=j+1 ; k<n ; k++) {
			if (arr[j] > arr[k]) {
				int temp = arr[k];
				arr[k] = arr[j];
				arr[j] = temp;
			}
		}
	}


	printf("\nSorting array ...\n\n");

	for (int l=0 ; l<n; l++) {
		printf("%d " , arr[l]);
	}

	printf("\n\n");
}