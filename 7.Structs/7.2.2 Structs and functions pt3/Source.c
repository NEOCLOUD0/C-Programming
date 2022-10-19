#include <stdio.h>

typedef struct WidthFtIn_struct
{
    int numFeet;
    int numInches;
} WidthFtIn;

/* Your code goes here */
// Define a function SetHeight, with int parameters feetVal and inchesVal, that returns a struct of type WidthFtIn.
// The function should assign WidthFtIn's data member numFeet with feetVal and numInches with inchesVal.
WidthFtIn SetHeight(int feetVal, int inchesVal)
{
    WidthFtIn wFtIn;
    wFtIn.numFeet = feetVal;
    wFtIn.numInches = inchesVal;

    return wFtIn;
}

int main(void)
{
    WidthFtIn objectSize;
    int feetVal;
    int inchesVal;

    scanf("%d", &feetVal);
    scanf("%d", &inchesVal);

    objectSize = SetHeight(feetVal, inchesVal);

    printf("Size: %dft %din.\n", objectSize.numFeet, objectSize.numInches);

    return 0;
}