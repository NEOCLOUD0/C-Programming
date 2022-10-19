
#include <stdio.h>;

typedef struct FruitStand_struct
{
    int numPlums;
    int numPeaches;
} FruitStand;

void PrintTotalFruits(FruitStand stand1, FruitStand stand2)
{
    printf("%d Plums\n", (stand1.numPlums + stand2.numPlums));
    printf("%d Peaches\n", (stand1.numPeaches + stand2.numPeaches));
}

int main()
{
    FruitStand fruitStand1;
    FruitStand fruitStand2;

    fruitStand1.numPlums = 6;
    fruitStand1.numPeaches = 9;

    fruitStand2.numPlums = 12;
    fruitStand2.numPeaches = 8;

    PrintTotalFruits(fruitStand1, fruitStand2);

    return 0;
}