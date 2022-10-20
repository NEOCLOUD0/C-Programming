#include <stdio.h>
#include <string.h>

typedef struct Pizza_struct
{
    char pizzaName[75];
    int numberOfCalories;
} Pizza;

int main(void)
{
    Pizza availablePizzas[2];

    scanf("%s", availablePizzas[0].pizzaName);
    scanf("%d", &availablePizzas[0].numberOfCalories);

    scanf("%s", availablePizzas[1].pizzaName);
    scanf("%d", &availablePizzas[1].numberOfCalories);

    /* Your code goes here */
    // Assign availablePizzas's first element's numberOfCalories with the value in availablePizzas's second element's numberOfCalories.
    availablePizzas[0].numberOfCalories = availablePizzas[1].numberOfCalories;

    printf("A %s slice contains %d calories.\n", availablePizzas[0].pizzaName, availablePizzas[0].numberOfCalories);
    printf("A %s slice contains %d calories.\n", availablePizzas[1].pizzaName, availablePizzas[1].numberOfCalories);

    return 0;
}