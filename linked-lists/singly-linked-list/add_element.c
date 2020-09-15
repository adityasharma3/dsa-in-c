//this file contains all the insertion or addition elements in linked list
#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
};

void add_in_beggining(int data) {
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	
	new_node->data = data;
	new_node->next = head;
	head = new_node;
} 

void add_at_end(int data) {
	struct Node *temp = head;
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	while (temp->next != NULL) {
		temp = temp->next;
	}

	new_node->data = data;
	new_node->next = NULL;
	temp->next = new_node;

}

void add_after(int element , int data) {
	struct Node *temp = head;
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	while (temp->data != element) {
		if (temp->next == NULL) {
			add_at_end(data);
		} else {
			temp = temp->next;
		}
	}

	new_node->data = data;
	new_node->next = temp->next;
	temp->next = new_node; 
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
	printf("Do you want to insert an element at the start of linked list?\nPress 1 if yes or any other number if not.\n");
	scanf("%d" , &ans1);

	if (ans1 == 1) {
		int data1;
		printf("Enter data to be contained in it : ");
		scanf("%d" , &data1);
		add_in_beggining(data1); 
	}

	display(head);

	int ans2;
	printf("\nDo you want to insert an element at the end of the linked list?\nPress 1 or else any other number if not.\n");
	scanf("%d" , &ans2);

	if (ans2 == 1) {
		int data2;
		printf("Enter data to be contained in it : ");
		scanf("%d" , &data2);
		add_at_end(data2);
	}	

	display(head);

	int element , data3 , ans3;
	printf("\nDo you want to insert an element after a given element?");
	printf("\nIf yes, press 1 and chose between the above printed number\nIf no, then press any key.\n");
	scanf("%d" , &ans3);

	if (ans3 == 1) {
		printf("Enter the element you want to add number after : ");
		scanf("%d" , &element);
	 
		printf("Enter data to be contained in it : ");
		scanf("%d" , &data3);
		add_after(element , data3);		
	}

	display(head);
}