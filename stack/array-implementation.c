#include <stdio.h>
#include <stdlib.h>

int top = -1 , stack[100];

void display() {
	for (int i=top ; i>=0 ; i--) {
		printf("%d ", stack[i]);
	}
	printf("\n\n");
}

void pop() {
	top = top - 1;
	display();
}

int peek() {
	return stack[top];
}

int isEmpty() {
	if (top == -1) {
		return 1;
	} 
	return 0;
}

void main() {
	int n;
	printf("Enter size of stack : ");
	scanf("%d" , &n);
	stack[n];

	top = -1;

	if (top == n-1) {
		printf("Overflow");
	} else {
		for (int j=0 ; j<n ; j++) {
			int val;
			printf("Enter element to be inserted into stack : ");
			scanf("%d" , &val);
			top = top + 1;
			stack[top] = val;
		}
	}

	char response;
	printf("Do you want to print the stack? Press y if yes and n if no.\n\n");
	scanf(" %c" , &response);

	if (response == 'y') {
		display();
	}

	char response2;
	printf("Do you want to pop from stack? Press y if yes and n if no.");
	scanf(" %c" , &response2);
	if (response2 == 'y') {
		pop();
	}

	char response3;
	printf("Do you want to peek the stack? Press y if yes and n if no.\n");
	scanf(" %c" , &response3);
	if (response3 == 'y') {
		printf("%d \n" , peek());
	}
}