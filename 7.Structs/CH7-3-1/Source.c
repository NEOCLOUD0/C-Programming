
#include <stdio.h>
#include <string.h>

typedef struct Toy_struct
{
    char type[20];
    char color[20];
} Toy;

int main(void)
{
    Toy toyList[3];

    strcpy(toyList[0].type, "plane");
    strcpy(toyList[0].color, "blue");
    strcpy(toyList[1].type, "bunny");
    strcpy(toyList[1].color, "white");
    strcpy(toyList[2].type, "bike");
    strcpy(toyList[2].color, "orange");

    printf("%s %s\n", toyList[0].color, toyList[0].type);
    printf("%s %s\n", toyList[1].color, toyList[1].type);

    return 0;
}