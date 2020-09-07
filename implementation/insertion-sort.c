#include <stdio.h>

void main() {
	
	printf("\n");

	const int n = 24;
	int arr[] = {1,241,24,4252,453,43414,45,21,43,654,23,12,23,11,-12,214,32,654,3,35,6,564,325,46};

	for (int i=0; i<n ; i++) {
		int element = arr[i];
		int j = i-1;

		while (j>=0 && arr[j] > element) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = element;
	}

	for (int k=0 ; k<n ; k++) {
		printf("%d ", arr[k]);
	}
	printf("\n\n");
}