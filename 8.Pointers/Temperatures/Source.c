#include <stdio.h>
#include <stdlib.h>
/*Write a function that takes a temperature in fahrenheit,
and converts it to Celsius, adn Kelvin scales.

[Output a table of the conversions using Fahrenheit values from 0 to 300,
in steps of 10, with 2 places of precision.]

TempCelsius = (5 / 9) * (TempFahrenheit - 32);
TempKelvin = TempCelsius + 273.15;
*/

void convertTemperature(int, double *, double *);

int main()
{
    int fahrenheit;
    double celsius, kelvin;

    printf("Fahrenheit      Celsius     Kelvin\n");
    printf("==========      =======     ======\n");

    for (fahrenheit = 0; fahrenheit <= 300; fahrenheit += 10)
    {
        convertTemperature(fahrenheit, &celsius, &kelvin);
        printf("%10i %10.2lf %10.2lf\n", fahrenheit, celsius, kelvin);
    }

    system("Pause");
}

void convertTemperature(int fahrenheit, double *pCelsius, double *pKelvin)
{
    *pCelsius = 5.0 / 9.0 * (fahrenheit - 32);
    *pKelvin = *pCelsius + 273.15;
}