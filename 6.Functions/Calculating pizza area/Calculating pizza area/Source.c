#include <stdio.h>

double CalcPizzaArea() {
    double pizzaDiameter;
    double pizzaRadius;
    double pizzaArea;
    double piVal = 3.14159265;

    pizzaDiameter = 12.0;
    pizzaRadius = pizzaDiameter / 2.0;
    pizzaArea = piVal * pizzaRadius * pizzaRadius;
    return pizzaArea;
}

int main(void) {
    printf("12 inch pizza is %lf inches squared\n",
        CalcPizzaArea());

    return 0;
}