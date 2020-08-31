/*
	to find the sum of sin(x) = x - x^3 + x^5 - x^7
*/

#include<stdio.h>
#include<math.h>

int sum_of_series(int n) {
	int sum = n - pow(n,3) + pow(n,5) - pow(n,7);
	return sum;n
}

void main() {

	int n;
	scanf("%d" , &n);
	int ans = 0;

	for (int i=0 ; i<=n ; i++) {
		ans += sum_of_series(i);
	}

	printf("%d\n", ans);
}
