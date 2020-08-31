/*
	palindrome ex : 123321 , 321123 , 313 , etc.
*/

#include<stdio.h>

void main() {

	int	num;
	scanf("%d" , &num);
	int num1 =  num;
	int rev = 0;

	while (num1 != 0) {
		int res = num1 % 10;
		rev = rev * 10;
		rev += res;
		num1 /= 10;
	}

	if (rev == num) {printf("Palindrome\n");}
	else {printf("Not a Palindrome \n");}
}