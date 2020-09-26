#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
};

int contains(int element) {
	struct Node *temp = head;
	while (temp != head) {
		if (temp->data == element) {
			return 1;
		}
	}
	return 0;
}

void insert_after(int element ,int data) {
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	struct Node *temp = head;

	if(contains(element)) {
		while (temp->data != element) {
			temp = temp->next;
		}

		new_node->data = data;
		new_node->next = temp->next;
		temp->next = new_node;
	} else {
		printf("\nLinked list does not contain %d. \n\n", element);
	}
}

void display() {
	struct Node *temp = head;

	do {
		printf("%d " , temp->data);
		temp = temp->next;
	}while (temp != head);
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

	int data , element;
	printf("Enter element you want to insert after : ");
	scanf("%d" , &element);
	printf("\nEnter data to be contained : ");
	scanf("%d" , &data);

	insert_after(element , data);

	display();
}