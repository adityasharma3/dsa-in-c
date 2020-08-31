/*

	5  5  5  5  5
	4  4  4  4
	3  3  3
	2  2
	1

*/

#include <stdio.h>

void main() {
	int n;
	scanf("%d" , &n);
	printf("\n");

	for (int i=n ; i>=1 ; i--) {
		for (int j=i ; j>=1 ; j--) {
			printf("%d  ", i);
		}
		printf("\n");
	}
	printf("\n");
}