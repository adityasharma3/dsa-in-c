#include <stdio.h>
#include <stdlib.h>

int stack[100] , top1 = -1 , top2 = 100 , size = 100;

void display() {
	int response;
	printf("Enter which stack you want to see.\n1.Stack 1.\n2.Stack 2\n\n");
	scanf("%d" , &response);

	if (response == 1) {
		int i=0;
		for (int i=top1 ; i>=0 ; i--) {
			printf("%d " , stack[i]);
		}
		printf("\n\n");
	} 
	else {
		int j=0;
		for (int j=top2 ; j<100 ; j++) {
			printf("%d " , stack[j]);
		}
		printf("\n\n");
	}
}

void push(int element) {
	int response;
	printf("Enter which stack you want to push element in : \n1.Stack 1.\n2.Stack 2\n\n");
	scanf("%d" , &response);
	if (response == 1) {
		if (top1 < top2 - 1) {
			top1++;
			stack[top1] = element;
		} else {
			printf("Stack Overflow!!\n");
		}
	} else {
		if (top1 < top2 - 1) {
			top2--;
			stack[top2] = element;
		} else {
			printf("Stack Overflow!!\n");
		}
	}
}

void pop() {
	int response;
	printf("Enter which stack you want to pop element from : \n1.Stack 1.\n2.Stack 2\n\n");
	scanf("%d" , &response);
	if (response == 1) {
		if (top1 >= 0) {
			int x = stack[top1];
			top1--;
			printf("%d removed from stack 1.\n", x);
		} else {
			printf("Stack Underflow!!\n");
		}
	} else {
		if (top2 > top1 && top2 < size) {
			int y = stack[top2];
			top2++;
			printf("%d removed from your stack 2.\n", y);
		} else {
			printf("Stack Underflow!!\n");
		}
	}
}

int peek() {
	int response;
	printf("Enter which stack you want to peek element from : \n1.Stack 1.\n2.Stack 2\n\n");
	scanf("%d" , &response);
	if (response == 1) {
		if (top1 >= 0) {
			return stack[top1];
		} else {
			printf("Stack empty!!");
		}
	} else {
		if (top2 < size) {
			return stack[top2];
		} else {
			printf("Stack empty");
		}
	}
	return -1;
}

void main() {
	push(202);
	push(13);
	push(101);
	push(242);
	push(245);
	push(55);
	push(66);
	push(777);

	display();
	display();

	pop();
	pop();
	
	int ans1 = peek();
	printf("%d \n", ans1);
	int ans2 = peek();
	printf("%d \n", ans2);
	display();
	display();

}