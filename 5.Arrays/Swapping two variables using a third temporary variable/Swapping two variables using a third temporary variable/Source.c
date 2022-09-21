#include<stdio.h>
#include<stdlib.h>

int main() {
	int X = 33;
	int Y = 55;
	int tempVal = 0;

	tempVal = X;
	X = Y;
	Y = tempVal;

	// Print X and Y
	printf("x:%d y:%d", X, Y);
}