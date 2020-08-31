#include<stdio.h>
 void main() {
 	int i , n;
 	scanf("%d" , &n);
 	int sum = 0;

 	for (i=1 ; i<=n ; i++) {
 		sum += i;
 	} 

 	printf("%d\n",sum);
}