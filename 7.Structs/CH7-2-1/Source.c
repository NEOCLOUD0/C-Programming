
#include <stdio.h>

typedef struct Home_struct
{
    int numBathrooms;
    int numFloors;
    int numPeople;
    int numRooms;
} Home;

Home InitHome()
{
    Home tempHome;

    tempHome.numBathrooms = 4;
    tempHome.numFloors = 3;
    tempHome.numPeople = 8;
    tempHome.numRooms = 7;

    return tempHome;
}

int main()
{
    Home myHome = InitHome();

    printf("%d Floors\n", myHome.numFloors);
    printf("%d People\n", myHome.numPeople);

    return 0;
}