#include <stdio.h>

typedef struct Height_struct
{
    int feet;
    int inches;
} Height;

int main()
{
    Height pamHeight;
    Height janHeight;
    Height annHeight;

    pamHeight.feet = 5;
    pamHeight.inches = 4;
    janHeight.feet = 6;
    janHeight.inches = 0;
    annHeight = pamHeight;

    printf("Ann: %dft %d\n", annHeight.feet, annHeight.inches);

    return 0;
}