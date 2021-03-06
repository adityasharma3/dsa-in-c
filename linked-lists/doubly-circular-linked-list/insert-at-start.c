#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};

void insert_at_start(int data) {
	struct Node *temp = head;
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = data;

	new_node->next = head;
	head->prev->next = new_node;
	new_node->prev = head->prev;
	head->prev = new_node;

	head = new_node;

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
	struct Node *fifth= (struct Node*)malloc(sizeof(struct Node));
	struct Node *sixth = (struct Node*)malloc(sizeof(struct Node));

	head = first;
	
	first->data = 100;
	first->next = second;
	first->prev = fifth;

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
	sixth->next = head;
	sixth->prev = fifth;

	display(head);

	printf("Enter element you want to insert at start of linked list: ");
	int data;
	scanf("%d" , &data);
	insert_at_start(data);

	display(head);
	
}
