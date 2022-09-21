#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	char userChar;
	char userString[50];
	int count = 0;

	scanf_s("%c", &userChar);
	gets(userString);

	for (int i = 0; i < strlen(userString); i++) {
		if (userString[i] == userChar) {
			count++;
		}
	}

	if (count == 1) {
		printf("%d %c\n", count, userChar);
	}
	else {
		printf("%d %c's\n", count, userChar);
	}
	

	

}