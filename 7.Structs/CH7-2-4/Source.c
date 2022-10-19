#include <stdio.h>

typedef struct FruitStand_struct
{
    int numApples;
    int numOranges;
} FruitStand;

FruitStand AddFruits(FruitStand stand1, FruitStand stand2)
{
    FruitStand newStand;

    newStand.numApples = stand1.numApples + stand2.numApples;
    newStand.numOranges = stand1.numOranges + stand2.numOranges;

    return newStand;
}

int main()
{
    FruitStand stand1;
    FruitStand stand2;
    FruitStand standTotals;

    stand1.numApples = 3;
    stand1.numOranges = 7;

    stand2.numApples = 8;
    stand2.numOranges = 1;

    standTotals = AddFruits(stand1, stand2);

    printf("%d Apples\n", standTotals.numApples);
    printf("%d Oranges\n", standTotals.numOranges);

    return 0;
}