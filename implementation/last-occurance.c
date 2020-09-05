#include<stdio.h>
#include <string.h>

void main() {

	char word[100] , find;

	printf("Enter a word:\n");
	scanf("%s" , word);

	printf("Enter a letter to be scanned for : \n");
	scanf("%c" , &find);

	int found_at;
	int flag = 0;

	for (int i=0 ; i<strlen(word) ; i++) {
		if (word[i] == find) {
			flag = 1;
			found_at = i+1;
		} else {
			continue;
		}
	}

	if (flag == 1) {
		printf("%c found at %d position in the word.\n" , find , found_at);
	}

	else {
		printf("element not found\n");
	}
}