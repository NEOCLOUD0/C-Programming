
#include <stdio.h>
#include <stdlib.h>

void ConvFeetInches(int totDist,
                    int *inFeet, int *inInches)
{
    *inFeet = totDist / 12;
    *inInches = totDist % 12;
}

int main(void)
{
    int initMeasure;
    int resFeet;
    int resIn;

    initMeasure = 45;
    resFeet = 0;
    resIn = 0;

    ConvFeetInches(initMeasure, &resFeet, &resIn);
    printf("%d feet %d inches\n", resFeet, resIn);

    return 0;
}