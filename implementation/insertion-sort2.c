#include <stdio.h>

void main() {
	
	int n;
	printf("Enter the number of element in array:");
	scanf("%d" , &n);

	printf("Enter the elements in the array\n");
	int arr[n];

	for (int i=0 ; i<n ; i++) {
		printf("Enter the %d element:", i);
		scanf("%d" , &arr[i]);
	}

	for (int j=0 ; j<n ; j++) {
		int temp = arr[j];
		int k = j-1;

		while (k>=0 && arr[k] > temp) {
			arr[k] = arr[k+1];
			k-=1;
		}
		arr[k+1] = temp;
		
	}

	for (int l=0 ; l<n ; l++) {
		printf("%d ", arr[l]);
	}
	printf("\n\n");
}