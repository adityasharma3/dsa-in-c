#include <stdio.h>
#include <stdlib.h>

struct Node *head;

struct Node {
	int data;
	struct Node *next;
};

void insert_at_end(int data) {
	struct Node *ptr = head;
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	while (ptr->next != head) {
		ptr = ptr->next;
	}
	
	new_node->data = data;
	new_node->next = ptr->next;
	ptr->next = new_node;
}

void display() {
	struct Node *temp = head;

	do {
		printf(" %d" , temp->data);
		temp = temp->next;
	} while (temp!=head);
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
	display();

	int data;
	printf("Enter element you want to insert at the end : ");
	scanf("%d" , &data);

	insert_at_end(data);

	display();
}