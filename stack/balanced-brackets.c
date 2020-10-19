#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define size 100

int stack[size] , top = -1;

void push(char data) {
	if (top > size -1) {
		printf("Stack Overflow!!\n");
	} else {
		stack[top++] = data;
	}
}

bool isEmpty() {
	return (top == -1);
}

char peek() {
	return (stack[top]);
}

char pop() {
	if (top < 0) {
		printf("Stack Underflow!!\n");
	} else {
		char x = peek();
		top--;
		return x;
	}
}

bool isBracket(char x) {
	return (x == '(' || x == ')' || x == '{' || x == '}');
}

void main() {
	char exp[size];
	printf("Enter the expression : ");
	scanf("%s", exp);

	for (int i=0 ; i<strlen(exp) ; i++) {
		char ch = exp[i];
		if (isBracket(ch)) {
			if (ch == '(' || ch == '{') {
				push(ch);
			} else  {
				if (isEmpty()) {
					printf("Expression is unbalanced.\n");
					exit(0);
				}

				if (ch == ')') {
					while (pee k() != '(') {
						pop();
					}
				} else if (ch == '{') {
					while (peek() != '{') {
						pop();
					}
				}
			}
		}
	}

	printf("%s\n", isEmpty() ? "Brackets ARE balanced." : "Brackets are NOT balanced.");

}