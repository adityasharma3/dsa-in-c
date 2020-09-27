#include <stdio.h>
#include <stdlib.h>

struct Node *top = NULL;

struct Node {
	int data;
	struct Node *next;
};

void push(int data) {
	struct Node *temp = top;
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = data;

	new_node->next = top;
	top = new_node;
}


int peek() {
	printf("%d \n" ,top->data);
	return top->data;
}

void pop() {
	struct Node *temp = top;

	top = top->next;
	temp->next = NULL;
}

void display(struct Node *top) {
	struct Node *temp = top;

	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n\n");
}

void main() {
	push(12);
	push(123);
	push(910);
	push(32);
	push(55);
	push(255);

	display(top);

	pop();
	display(top);

	// int ans1 = peek();
	// printf("%d ", ans1);
	peek();
	pop();
	display(top);
	peek();
	display(top);

}