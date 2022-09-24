#include <stdio.h>
#define NUM_ELEMENTS 20

int main(void)
{

	int userVals[NUM_ELEMENTS];	   // Array to hold the user's input integers

	/* Type your code here. */
	int numberCount;
	// scan first number that user enter for them to insert that amount
	scanf_s("%d", &numberCount);

	//Asking user to input numbers
	for (int i = 0; i < numberCount; ++i) {
		scanf_s("%d", &(userVals[i]));
	}

	//Outputting in reverse
	for (int i = numberCount - 1; i >= 0; i--) {
		printf("%d, ", userVals[i]);
	}

	printf("\n");

	return 0;
}
