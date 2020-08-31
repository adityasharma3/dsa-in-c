/*

1 
2  3
4  5  6
7  8  9  10
11  12  13  14  15

*/


#include <stdio.h>

void main() {
	int count = 1;
	int n;
	scanf("%d" , &n);

	printf("\n");

	for (int i=0 ; i<=n ; i++) {
		for (int j=0 ; j<=i ; j++) {
			printf("%d ", count);
			count++;
		}
		printf("\n");
	}
}