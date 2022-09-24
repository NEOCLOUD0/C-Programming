#include <stdio.h>
#define NUM_ELEMENTS 20

int main(void) {
	int userValues[NUM_ELEMENTS];    // Set of data specified by the user

	/* Type your code here. */
	int numberCount;
	scanf_s("%d", &numberCount);

	for (int i = 0; i < numberCount; i++) {
		scanf_s("%d", &userValues[i]);
	}
	
	int threshHold;
	scanf_s("%d", &threshHold);
	for (int i = 0; i < numberCount; i++) {
		if (userValues[i] <= threshHold) {
			printf("%d,", userValues[i]);
		}
	}
	printf("\n");

	return 0;
}