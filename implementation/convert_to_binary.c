#include<stdio.h>
#include<math.h>

void main() {
	int num;
	scanf("%d" , &num);
	int binary = 0 , power = 0;

	while (num !=0) {
		int res = num % 10;
		int power_to_multiply = pow(2,power);
		binary += res * power_to_multiply;
		power++;
		num /= 10;
	}

	printf("%d\n", binary);
}

/*
the code containing pow & broadly #include<math.h> does not seem to work
linux , try compiling on online editors.
*/