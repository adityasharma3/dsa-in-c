#include <stdio.h>
#include <stdlib.h>

int queue[100] , first = -1 , last = -1;

void display() {
	for (int i=first ; i<=last; i++) {
		printf("%d ", queue[i]);
	}
	printf("\n\n");
}

void push(int val) {
	last++;
	first = 0;

	queue[last] = val;
}

void main() {
	int n;
	printf("Enter number of elements in queue : ");
	scanf("%d" , &n);

	for (int i=0 ; i<n ; i++) {
		int val;
		scanf("%d" , &val);
		push(val);
	}
	display();
}