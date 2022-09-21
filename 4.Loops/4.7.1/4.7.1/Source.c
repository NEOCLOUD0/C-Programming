#include<stdio.h>
#include<stdlib.h>

int main() {
	int userNum;
	int i;
	int j;

	scanf_s("%d", &userNum);

	for (int i = 0; i <= userNum; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		printf("%d\n", i);
	}
}