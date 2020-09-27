#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};

void insert_after(int element, int val) {
	struct Node *temp = head;
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = val;

	while (temp->data != val) {
		temp = temp->next;
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

}

int contains(int element) {
	struct Node *ptr = head;

	while (ptr != head) {
		if (ptr->data == element) {
			return 1;
		}
		ptr = ptr->next;
	} 
	return 0;
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

	printf("Enter element you want to insert node after: ");
	int data ,element;
	scanf("%d" , &element);

	if (contains(element)) {
		printf("Enter value to be contained in node : ");
		insert_after(element , data);
		display(head);

	} else  {
		printf("Element is not present in linked list.");
		printf("\n\n");
	}

}