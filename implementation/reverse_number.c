#include<stdio.h>
#include <math.h>

void main() {

	int num;
	int rev = 0;
	
	scanf("%d", &num);

	while (num != 0) {
		int res = num % 10;
		rev = rev*10;
		rev += res;
		num /= 10;		
	}
	printf("%d\n", rev);
}