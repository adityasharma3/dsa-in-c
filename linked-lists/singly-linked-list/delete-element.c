//this file contains all the deletion operations on a linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
};

void delete_head() {
	struct Node *temp = head;
	struct Node *holder;

	holder = temp->next;
	head = holder;
	free(temp);
}

void delete_tail() {
	struct Node *ptr = head;
	struct Node *preptr = ptr;

	while (ptr->next != NULL) {
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = NULL;
	free(ptr);
}

void delete_after(int element) {
	struct Node *ptr = head;
	struct Node *preptr = ptr;

	while (ptr->data != element && ptr != NULL) {
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = ptr->next;
	free(ptr);
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
	struct Node *fifth = (struct Node*)malloc(sizeof(struct Node));
	struct Node *sixth = (struct Node*)malloc(sizeof(struct Node));

	head = first;

	first->data = 24;
	second->data = 4;
	third->data = 55;
	fourth->data = 77;
	fifth->data = 66;
	sixth->data = 214;

	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next = sixth;
	sixth->next = NULL;

	printf("\n");
	display(head);

	int ans1;
	printf("\nWould you like to delete an element from the beggining of linked list?\nPress 1 if yes.\n");
	scanf("%d" , &ans1);

	if (ans1 == 1) {
		delete_head();
	}

	printf("\n");
	display(head);

	int ans2;
	printf("\nWould you like to delete an element from the end of linked list?\nPress 1 if yes.\n");
	scanf("%d" , &ans2);

	if (ans2 == 1) {
		delete_tail();
	}

	printf("\n");
	display(head);

	int ans3;
	printf("\nWould you like to delete an element from middle of linked list?\nPress 1 if yes.\n");
	scanf("%d" , &ans3);

	if (ans3 == 1) {
		int element;
		printf("Enter element you would like to delete node after : ");
		scanf("%d" , &element);
		delete_after(element);
	}

	printf("\n");
	display(head);
}