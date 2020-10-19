#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
	int data;
	struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void display() {
	if (front == NULL && rear == NULL) {
		printf("queue is empty\n");
	}

	struct Node *temp = front;
	while(temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n\n");
}

void insert(int data) {
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next = NULL;

	if (front == NULL) {
		front = rear = new_node;
	} else {
		rear->next = new_node;
		rear = new_node;
	}
} 

void delete() {
	if (front == NULL) {
		printf("Underflow!! Queue is empty.\n");
	} else {
		struct Node *temp = front;
		front = front->next;
		free(temp);
	}
}

bool isEmpty() {
	return front==NULL && rear==NULL;
} 

void main() {
	char response;
	printf("Would you like to insert an element ? type y if yes and n if no.\n");
	scanf(" %c" , &response);
	if (response == 'y') {
		for (int i=0 ; i<5 ; i++) {
			int val;
			printf("Enter value to be inserted : ");
			scanf("%d" , &val);
			insert(val);
		}
	}
	display();
	char response2;
	printf("Would you like to delete an element from queue?\n");
	scanf(" %c" , &response2);
	delete();
	display();
	bool ans = isEmpty();
	printf("%s \n\t",ans ? "true" : "false");
}