#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void insert(struct Node *head , int new_data) {
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->next = head;

	head = new_node;
}

void main() {
	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	insert(head ,head->data);
}