#include <stdio.h>

void main() {

	const int n = 24;
	int arr[] = {1,241,24,4252,453,43414,45,21,43,654,23,12,23,11,-12,214,32,654,3,35,6,564,325,46};

	 //sorting the above array using buuble sort of O(n^2) time complexity

	for (int i=0; i<n ; i++) {
	 	for (int j=0 ; j<n-1-i; j++) {
	 		if (arr[j] > arr[j+1]) {
	 			int temp = arr[j];
	 			arr[j] = arr[j+1];
	 			arr[j+1] = temp;
	 		}
	 	}
	}

	for (int k=0 ; k<n ; k++) {
		printf("%d ",arr[k]);
	}

	printf("\n");
}

/*
	basic understanding:

	the indices of the array keep on changing and compare the two consecutive elements and eventually push the 
	max element to the right-hand corner.

	thus in the second loop, we put j<n-i-1 as the last part is already sorted

*/