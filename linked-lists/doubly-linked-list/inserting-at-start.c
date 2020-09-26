#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};

void insert_at_start(int data) {
	struct Node *ptr = head;
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = data;

	new_node->next = head;
	head->prev = new_node;
	head = new_node;
	new_node->prev = NULL;

}

void display(struct Node *head) {
	struct Node *ptr = head;

	while (ptr != NULL) {
		printf("%d ", ptr->data);
		ptr = ptr->next;
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
	printf("Insering ar start , enter number to be inserted : ");
	int data;
	scanf("%d" , &data);
	insert_at_start(data);

	display(head);
}