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

    if (temp != NULL) {
        holder = temp->next;
        free(temp);
        head = holder;
    } else {
        printf("Linked list is empty\n");
    }
}

void printLinkedList() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d " , temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

void main() {

    struct Node *one = (struct Node*)malloc(sizeof(struct Node));
    struct Node *two = (struct Node*)malloc(sizeof(struct Node));
    struct Node *three = (struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node*)malloc(sizeof(struct Node));
    

    head = one;
    one->data = 24;
    one->next = two;

    two->data = 14;
    two->next = three;

    three->data = 99;
    three->next = fourth;

    fourth->data = 13;
    fourth->next = NULL;

    printf("\n");
    printLinkedList();

    delete_head();

    printLinkedList();           

}