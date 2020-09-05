#include <stdio.h>

int binarySearch (int arr[] , int element , int right , int left) {
	while (left <= right) {

		int mid = (left + right)/2;

		if (arr[mid] == element) {
			return mid;
		}

		if (arr[mid] > element) {
			right = mid - 1;
		}

		if (arr[mid] < element) {
			left = mid + 1;
		}
	}

	return -1;
}

void main() {
	int n;
	printf("Enter the number of elements in array:\n");
	scanf("%d" , &n);

	int arr[n];
	for (int i=0 ; i<n ; i++) {
		printf("Enter element %d\n", i+1);
		scanf("%d" , &arr[i]);
	}

	int element;
	printf("Enter the element to be searched for:\n");
	scanf("%d" , &element);


	int ans = binarySearch(arr , element , n-1 , 0);

	if (ans == -1) {
		printf("%d was not found in the array\n" , element );
	} else {
		printf("%d was found at postion %d in the array.\n", element , ans+1 );
	}
}