
/*
* Ask user to enter two numbers, and calculate the sum.
* input: n1, n2
* process: sum = n1 + n2
* output: sum
*/

#include<stdio.h>
#include<stdlib.h>

//declare functions
int getNumber();
int calculateSum(int, int);
void outputSum(int);

int main() {
	int n1, n2, sum;

	//calling the functions
	n1 = getNumber();
	n2 = getNumber();

	sum = calculateSum(n1, n2);

	outputSum(sum);
}

//define functions
int getNumber() {
	int x;
	printf("Enter a number\n");
	scanf_s("%d", &x);
	return x;
}

int calculateSum(int x, int y) {
	return x + y;
}

void outputSum(int x) {
	printf("The sum is: %d\n", x);
}