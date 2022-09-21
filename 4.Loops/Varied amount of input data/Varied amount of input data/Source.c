#include<stdio.h>
#include<stdlib.h>

int main() {
	int userInput;
	int numValues = 0;
	int sum = 0;

	scanf_s("%d", &userInput);
	int largestValue = userInput;

	while (userInput > -1) {
		sum = sum + userInput;
		numValues++;

		if (userInput > largestValue) {
			largestValue = userInput;
		}

		scanf_s("%d", &userInput);
	}

	double average = (double)sum / numValues;
	printf("%d %.2lf", largestValue, average);

}