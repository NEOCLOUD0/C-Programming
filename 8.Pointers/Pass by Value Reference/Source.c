#include <stdio.h>
#include <stdlib.h>

// declare functions
void cannotChangeMe(int parameter);
void canChangeMe(int *);

int main()
{
    int a = 10, b, c;

    cannotChangeMe(a); // pass by value
    printf("a has %i\n", a);
    canChangeMe(&a);
    printf("a has %i\n", a);

    printf("Enter a value for a b and c:");
    scanf("%i %i %i", &a, &b, &c);

    system("pause");
}

// define functions
void canChangeMe(int *pParam)
{
    *pParam = 27;
}

void cannotChangeMe(int parameter)
{
    parameter = 27;
}