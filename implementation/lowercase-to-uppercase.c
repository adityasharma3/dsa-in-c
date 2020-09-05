#include<stdio.h>
#include<string.h>

void main() {

	char word[100];
	printf("Enter your word:\n");
	scanf("%s" , word);

	for (int i=0 ; i<strlen(word) ; i++) {
		if (word[i] >= 'a' && word[i] <= 'z') {
			word[i] = word[i] - 32;
		}
	}

	printf("%s\n", word);
}