
#include <stdio.h>
#define NUM_TOYS 3

typedef struct Toy_struct
{
    char type[20];
    char color[20];
} Toy;

int main(void)
{
    // const int NUM_TOYS = 3;
    Toy toyList[NUM_TOYS];
    int i;

    for (i = 0; i < NUM_TOYS; ++i)
    {
        scanf("%s", toyList[i].type);
        scanf("%s", toyList[i].color);
    }

    for (i = 0; i < NUM_TOYS; ++i)
    {
        printf("%s\n", toyList[i].type);
    }

    return 0;
}