#include <stdio.h>
#include <math.h>

void main() {
	
	int num;
	scanf("%d", &num);
	int num1 = num;
	int num2 = num;

	int count_digits = 0;

	while (num1 !=0) {
		num1 /= 10;
		count_digits++;
	}

	int added_powers = 0;

	while (num2 != 0) {
		int res = num2 % 10;
		added_powers += pow(res , count_digits);
		num2 /= 10;
	}

	if (added_powers == num) {printf("It is a Armstrong number.\n");}
	else {printf("It is not an Armstrong number.\n");}
}