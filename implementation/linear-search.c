#include<stdio.h>

void main() {
	int n;
	printf("\nEnter the number of elements in array:\n");
	scanf("%d" , &n);
	int arr[n];

	for (int i=0; i<n ; i++) {
		scanf("%d" , &arr[i]);
	}

	int search_for;//element to be searched for
	int ans = -1;
	printf("Enter element to be searched for:\n");
	scanf("%d" , &search_for);

	for (int j=0 ; j<n ; j++) {
		if(arr[j] == search_for) {
			ans = j;
		} else {
			continue;
		}
	}

	if(ans == -1) {
		printf("element not found\n");
	} else {
		printf("element found at position %d.\n", ans+1 );
	}
}