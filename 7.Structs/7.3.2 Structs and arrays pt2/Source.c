#include <stdio.h>
#include <string.h>

typedef struct Pizza_struct
{
    char pizzaName[75];
    int numberOfCalories;
} Pizza;

int main(void)
{
    Pizza listOfPizzas[2];

    strcpy(listOfPizzas[0].pizzaName, "Barbecue");
    strcpy(listOfPizzas[1].pizzaName, "Ham and Cheese");

    /* Your code goes here */
    // Assign Barbecue's data member numberOfCalories with a value read from input.
    // Then, assign Ham and Cheese's data member numberOfCalories with another value read from input.
    // Input will contain two integer numbers.
    scanf("%d", &listOfPizzas[0].numberOfCalories);
    scanf("%d", &listOfPizzas[1].numberOfCalories);

    printf("A %s slice contains %d calories.\n", listOfPizzas[0].pizzaName, listOfPizzas[0].numberOfCalories);
    printf("A %s slice contains %d calories.\n", listOfPizzas[1].pizzaName, listOfPizzas[1].numberOfCalories);

    return 0;
}