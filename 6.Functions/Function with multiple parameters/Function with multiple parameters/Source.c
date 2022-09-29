#include <stdio.h>

double CalcPizzaVolume(double pizzaDiameter, double pizzaHeight) {
	double pizzaRadius;
	double pizzaArea;
	double pizzaVolume;
	double piVal = 3.14159265;

	pizzaRadius = pizzaDiameter / 2.0;
	pizzaArea = piVal * pizzaRadius * pizzaRadius;
	pizzaVolume = pizzaArea * pizzaHeight;
	return pizzaVolume;
}

int main(void) {
	printf("12.0 x 0.3 inch pizza is %lf inches cubed.\n", CalcPizzaVolume(12.0, 0.3));
	printf("12.0 x 0.8 inch pizza is %lf inches cubed.\n", CalcPizzaVolume(12.0, 0.8));
	printf("16.0 x 0.8 inch pizza is %lf inches cubed.\n", CalcPizzaVolume(16.0, 0.8));
	return 0;
}