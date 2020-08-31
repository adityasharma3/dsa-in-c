#include <stdio.h>

void main() {
	int n;
	scanf("%d" , &n);

	for (int i=n ; i>0 ; i-=2) {
		printf("%d ",i);
	}
	printf("\n");
}