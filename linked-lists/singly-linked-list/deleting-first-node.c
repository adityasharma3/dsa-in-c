#include <stdio.h>
#include <stdlib.h>

struct node *head = NULL;

struct node {
	int data;
	struct node *next;
};

void delete_at_head() {
	struct node *temp = head;
	struct node *holder = NULL;

	if (temp != NULL) {
		holder = temp->next;
		
		free(temp);

		head = holder;
	} else {
		printf("Linked list is empty");
	}
}

void printLL() {
	struct node *ptr = head;

	while (ptr != NULL) {
		printf("%d ", ptr->data);
	}
	printf("\n\n");
}

void main() {
	struct node *one = (struct node*)malloc(sizeof(struct node));
    	struct node *two = (struct node*)malloc(sizeof(struct node));
    	struct node *three = (struct node*)malloc(sizeof(struct node));
    	//Creating 3 nodes one, two, three
    	//Dynamic memory allocation
    	//Memory for these three nodes are allocated in heap.Not stack

    	head=one;
    	//Making the head pointer point to first node

    	one->data=1;
    	one->next=two;
    	//node one has data 1
    	//node one points to node two

    	two->data=2;	
    	two->next=three;
    	//node two has data 2
    	//node two points to node three

    	three->data=3;
    	three->next=NULL;
    	//node three has data 3
    	//node three points to NULL i.e. end of linked list

    	//one->two->three

    	printLL();

    	delete_at_head();
    	printLL();
    	//Again delete first node in the linked list
    	//But now the linked list is empty
}