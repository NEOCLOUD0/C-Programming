#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	double wallHeight;
	double wallWidth;
	double cost;

	// scanning input for 3 variables
	scanf_s("%lf %lf %lf", &wallHeight, &wallWidth, &cost);

	//outputting the wall area
	double wallArea = wallHeight * wallWidth;
	printf("Wall area: %.1lf sq ft", wallArea);
	printf("\nPaint needed: %.3lf gallons", wallArea / 350);

	//getting cans
	int cans = ceil(wallArea / 350);
	printf("\nCans needed: %d can(s)", cans);

	//getting cost of paint entered
	double costOfPaint = cost * cans;
	printf("\nPaint cost: $%.2lf", costOfPaint);

	//getting salesTax
	double salesTax = cost * cans * 0.07;
	printf("\nSales tax: $%.2lf", salesTax);

	//getting totalCost
	double totalCost = costOfPaint + salesTax;
	printf("\nTotal cost: $%.2lf\n", totalCost);



}