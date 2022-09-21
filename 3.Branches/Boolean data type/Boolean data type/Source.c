#include <stdio.h>
#include <stdbool.h>

int main(void) {
    double lifeExpectancy;
    double userBmi;
    char userChoice;
    bool isOverweight;
    bool isMale;

    // Get user's sex
    printf("Female (f) or male (m): ");
    scanf_s("%c", &userChoice);
    if (userChoice == 'm') {
        isMale = true;
    }
    else {
        isMale = false;
    }

    // Get user's BMI
    printf("Enter body mass index (BMI): ");
    scanf_s("%lf", &userBmi);
    isOverweight = (userBmi >= 25);

    // Determine life expectancy based on sex and BMI
    if (isMale && !isOverweight) {
        lifeExpectancy = 79.4;
    }
    else if (!isMale && !isOverweight) {
        lifeExpectancy = 83.5;
    }
    else if (isMale && isOverweight) {
        lifeExpectancy = 77.3;
    }
    else {
        lifeExpectancy = 81.4;
    }

    printf("Life expectancy is %lf years.\n", lifeExpectancy);

    return 0;
}