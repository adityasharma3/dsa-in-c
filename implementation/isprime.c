#include<stdio.h>
#include<stdbool.h>

void main() {
	int n , i;
	scanf("%d" , &n);
	int flag = 0;
	bool isPrime = true;

	for (i=2 ; i<n/2; i++) {
		if (n%i == 0) {
			isPrime = false;
			break;
		} else {
			continue;
		}
	}
	if (isPrime) {
		printf("Prime number\n");
	} else {
		printf("Not a prime number\n");
	}
}