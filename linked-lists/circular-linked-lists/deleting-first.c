#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
};

void delete_first() {
	struct Node *ptr = head;
	struct Node *preptr = ptr;

	while (preptr->next != head) {
		preptr = preptr->next;
	}
	preptr->next = ptr->next;
	head = ptr->next;
	free(ptr);
}

void display(struct Node *head) {
	struct Node *temp = head;

	do {
		printf("%d ", temp->data);
		temp = temp->next;
	} while (temp != head);
	printf("\n\n");
}

void main() {
	struct Node *first = (struct Node*)malloc(sizeof(struct Node));
	struct Node *second = (struct Node*)malloc(sizeof(struct Node));
	struct Node *third = (struct Node*)malloc(sizeof(struct Node));
	struct Node *fourth = (struct Node*)malloc(sizeof(struct Node));
	struct Node *fifth = (struct Node*)malloc(sizeof(struct Node));
	struct Node *sixth = (struct Node*)malloc(sizeof(struct Node));

	head = first;

	first->data = 2;
	second->data = 3;
	third->data = 161;
	fourth->data = 23;
	fifth->data = 654;
	sixth->data = 32;

	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next = sixth;
	sixth->next = first;

	printf("\n");
	display(head);

	delete_first();

	display(head);
}