void printList() {
	struct Node *temp = head;

	if (head != NULL) {
		do {
			printf("%d ", temp->data);
			temp = temp->next;
		} while(temp != head);
	}
}