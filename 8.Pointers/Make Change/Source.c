#include <stdio.h>
#include <stdlib.h>

void makeChange(int, int *, int *, int *, int *);

int main()
{
    int change = 32;
    int quarters, dimes, nickels, pennies;

    printf("Quarters      Dimes      Nickels      Pennies\n");
    printf("________      _____      _______      _______\n");

    makeChange(change, &quarters, &dimes, &nickels, &pennies);
    printf("    %d           %d            %d           %d   \n", quarters, dimes, nickels, pennies);
}

void makeChange(int change, int *quarters, int *dimes, int *nickels, int *pennies)
{
    *quarters = change / 25;
    change = change % 25;
    *dimes = change / 10;
    change = change % 10;
    *nickels = change / 5;
    change = change % 5;
    *pennies = change / 1;
    change = change % 1;
}