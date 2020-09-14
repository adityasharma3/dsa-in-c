#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;

struct Node {
	int data;
	struct Node *next;
};

//inserts elements on head
void insert(int data) {
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

	temp->data = data;
	temp->next = head;
	head = temp;
}

void insert_at_end(int data) {
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

	temp->data = data;

	struct Node *ptr = head;
	while(ptr->next != NULL) {
		ptr = ptr->next;
	}
	ptr->next = temp;

}

void printLL() {
	struct Node *temp = head;

	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n\n");
}

void insert_at_position(int data , int position) {
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	struct Node *ptr = head;
	int counter = 0;

	while (counter != position && ptr->next != NULL) {

	}
}

void main() {
	int n;
	printf("Enter the number of elements you want in linked list : ");
	scanf("%d" , &n);

	printf("\nEnter %d elements : \n", n);

	for (int i=0 ; i<n ; i++) {
		int x;
		scanf("%d" , &x);
		insert(x);
	}

	int y;
	printf("\nEnter element you want to enter last : ");
	scanf("%d" , &y);
	insert_at_end(y);

	printLL();
}