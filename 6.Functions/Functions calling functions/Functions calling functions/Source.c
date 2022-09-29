#include <stdio.h>

double CalcCircleArea(double circleDiameter) {
	double circleRadius;
	double circleArea;
	double piVal = 3.14159265;

	circleRadius = circleDiameter / 2.0;
	circleArea = piVal * circleRadius * circleRadius;

	return circleArea;
}

double PizzaCalories(double pizzaDiameter) {
	double totalCalories;
	double caloriesPerSquareInch = 16.7;    // Regular crust pepperoni pizza

	totalCalories = CalcCircleArea(pizzaDiameter) * caloriesPerSquareInch;

	return totalCalories;
}

int main() {
	printf("12 inch pizza has %.2lf calories.\n", PizzaCalories(12.0));
	printf("14 inch pizza has %.2lf calories.\n", PizzaCalories(14.0));

	return 0;
}