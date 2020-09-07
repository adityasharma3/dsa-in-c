#include <stdio.h>

void main() {
	const int n = 24;
	int arr[] = {1,241,24,4252,453,43414,45,21,43,654,23,12,23,11,-12,214,32,654,3,35,6,564,325,46};
	
	printf("\n");

	for (int i=0; i<n-1 ; i++) {
		for (int j=i+1 ; j<n ; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int k=0 ; k<n ; k++) {
		printf("%d  ", arr[k] );
	}

	printf("\n\n");

}