#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	double x;
	double y;
	double z;

	/* Type your code here. Note: Include the math library above first. */
	//have to scan variables first
	scanf_s("%lf", &x);
	scanf_s("%lf", &y);
	scanf_s("%lf", &z);
	// output x to the power of z
	double solutionOne = pow(x, z);
	printf("%.2lf", solutionOne);

	//x to the power of (y to the power of 2)
	double solutionTwo = pow(x, pow(y, 2));
	printf(" %.2lf", solutionTwo);

	//the absolute value of y
	double solutionThree = fabs(y);
	printf(" %.2lf", solutionThree);

	//the square root of (xy to the power of z).
	double solutionFour = sqrt(pow(x * y, z));
	printf(" %.2lf\n", solutionFour);



	return 0;
}