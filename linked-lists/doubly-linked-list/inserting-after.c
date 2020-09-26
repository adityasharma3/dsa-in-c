#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};

void insert_after(int element , int data) {
	struct Node *temp = head;
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = data;

	while (temp->data != element && temp->next != NULL) {
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	temp->next->prev = new_node;
	new_node->prev = temp;
}

int contains(int element) {
	struct Node *temp = head;

	while (temp != NULL) {
		if (temp->data == element) {
			return 1;
		}
		temp = temp->next;
	}
	return 0;
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

	int data , element;
	printf("Enter element to be inserted after : ");
	scanf("%d" , &element);

	if (contains(element)) {
		printf("Enter element to be inserted : ");
		scanf("%d" , &data);
		insert_after(element , data);

		display(head);
	} else if (!contains(element)) {
		printf("Element does not exist in linked list.\n\n");
	}

}