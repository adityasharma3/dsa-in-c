#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
};

//inserts a node at the start of linked list
void insert(int data) {	
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

	temp->data = data;
	temp->next = head;
	head = temp;
}

//prints the linked list
void printLinkedList() {
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n\n");
}

void main() {
	insert(24);
	insert(214);
	insert(45);
	insert(654);

	printLinkedList();
}