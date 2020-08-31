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

	int start , end;
	printf("Enter the values of start and end : \n");
	scanf("%d %d" , &start , &end);

	for (int j=start-1; j<=end ; j++) {
		printf("%d  " , arr[j]);
	}

}