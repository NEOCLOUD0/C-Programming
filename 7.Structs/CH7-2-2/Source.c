#include <stdio.h>
#include <string.h>

typedef struct Vehicle_struct
{
    char *color;
    char *type;
} Vehicle;

void PrintVehicle(Vehicle myVehicle)
{
    printf("color: %s\n", myVehicle.color);
    printf("type: %s\n", myVehicle.type);
}

int main()
{
    Vehicle myVehicle;

    myVehicle.color = "blue";
    myVehicle.type = "motorcycle";

    PrintVehicle(myVehicle);

    return 0;
}