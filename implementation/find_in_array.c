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

	int to_find;
	printf("\nEnter element to be searched for:\n");
	scanf("%d" , &to_find);
	int flag = 0;

	for (int j=0 ; j<n ; j++) {
		if (arr[j] == to_find) {
			flag = 1;
			break;
		}
		else {
			continue;
		}
	}

	if (flag == 1) {
		printf("\nElement found!\n");
	} else {
		printf("\nElement not found!\n");
	}

}
