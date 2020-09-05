#include <stdio.h>

void main() {
	
	int n;
	printf("Enter the number of elements in array:\n");
	scanf("%d" , &n);

	int arr[n];
	for (int i=0 ; i<n ; i++) {
		printf("Enter %d element : ", i+1 );
		scanf("%d" , &arr[i]);
	}

	printf("\nSorting the array... \n");

	for (int j=0 ; j<n-1 ; j++) {
		for (int k=0 ; k<n-j-1 ; k++) {
			if (arr[k+1] < arr[k]) {
				int temp = arr[k+1];
				arr[k+1] = arr[k];
				arr[k] = temp;
			}
		}
	}

	for (int l=0 ; l<n ; l++) {
		printf(" %d" , arr[l]);
	}

	printf("\n");
}