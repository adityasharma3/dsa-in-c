//a stack can be used as an efficicent way of reversing a string as it takes O(1) time.
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define size 30

int stack[size] , top = -1;

void push(char ch) {
	if (top > size-1) {
		printf("Stack Overflow !!\n");
	} else {
		top++;
		stack[top] = ch; 
	}
}

bool isEmpty() {
	return (top == -1);
}

char pop() {
	if (!isEmpty()) {
		char x = stack[top];
		top--;
		return x;
	} else {
		printf("Stack Underflow!!\n");
	}
}

void main() {
	char word[size];
	printf("Enter your string : \n");
	scanf("%s" , word);

	for (int i=0 ; i<strlen(word) ; i++) {
		push(word[i]);
	}

	while (!isEmpty()) {
		printf("%c" , pop());
	}
	printf("\n\n");
}