
#include <stdio.h>
#include <string.h>
#define NUM_CARS 3

typedef struct Car_struct
{
    char type[20];
    char color[20];
} Car;

int main(void)
{
    // const int NUM_CARS = 3;
    Car carList[NUM_CARS];
    int i;

    strcpy(carList[0].type, "sedan");
    strcpy(carList[0].color, "red");
    strcpy(carList[1].type, "SUV");
    strcpy(carList[1].color, "white");
    strcpy(carList[2].type, "truck");
    strcpy(carList[2].color, "orange");

    for (i = 0; i < NUM_CARS; ++i)
    {
        printf("%s\n", carList[i].color);
    }

    return 0;
}