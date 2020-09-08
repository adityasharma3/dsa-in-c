#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

int count_nodes(struct Node* temp) {
	int count = 0; 
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}

void main() {
	struct Node* first = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	struct Node* fourth = NULL;
	struct Node* fifth = NULL;

	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));
	fifth = (struct Node*)malloc(sizeof(struct Node));

	first->data = 2134;
	first->next = second;

	second->data = 54;
	second->next = third;

	third->data = 98;
	third->next = fourth;

	fourth->data = 243;
	fourth->next = fifth;

	fifth->data = 42;
	fifth->next = NULL;

	int ans = count_nodes(first);
	printf("%d\n",ans);
}