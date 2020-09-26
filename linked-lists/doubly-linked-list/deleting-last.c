#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};

void delete_last() {
	struct Node *temp = head;

	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->prev->next = NULL;
	temp->prev = NULL;
	free(temp);
}	

void display(struct Node *head) {
	struct Node *temp = head;

	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n\n");
}	

void main() {
	struct Node *first = (struct Node*)malloc(sizeof(struct Node));
	struct Node *second = (struct Node*)malloc(sizeof(struct Node));
	struct Node *third = (struct Node*)malloc(sizeof(struct Node));
	struct Node *fourth = (struct Node*)malloc(sizeof(struct Node));
	struct Node *fifth= (struct Node*)malloc(sizeof(struct Node));
	struct Node *sixth = (struct Node*)malloc(sizeof(struct Node));

	head = first;
	
	first->data = 100;
	first->next = second;
	first->prev = NULL;

	second->data = 166;
	second->prev = first;
	second->next = third;

	third->data = 35;
	third->prev = second;
	third->next = fourth;

	fourth->data = 256;
	fourth->prev = third;
	fourth->next = fifth;

	fifth->data = 96;
	fifth->next = sixth;
	fifth->prev = fourth;

	sixth->data = 81;
	sixth->next = NULL;
	sixth->prev = fifth;

	display(head);

	printf("Deleting the last element...\n");
	delete_last();

	display(head);
}