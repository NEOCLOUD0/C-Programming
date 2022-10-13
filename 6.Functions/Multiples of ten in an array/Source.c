#include <stdio.h>
#include <stdbool.h>
#define NUM_ELEMENTS 20

// declare function
bool IsArrayMult10(int inputVals[], int numVals);
bool IsArrayNoMult10(int inputVals[], int numVals);

int main()
{
    int userVals[NUM_ELEMENTS];
    int size;

    scanf("%d", &size);
    // scanning for the size of array
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &(userVals[i]));
    }

    // outputting the result once scan input from user
    if (IsArrayMult10(userVals, size))
    {
        printf("all multiples of 10");
    }
    else if (IsArrayNoMult10(userVals, size))
    {
        printf("no multiples of 10");
    }
    else
    {
        printf("mixed values");
    }
}

// define function
bool IsArrayMult10(int inputVals[], int numVals)
{
    int i;
    for (int i = 0; i < numVals; i++)
    {
        if (inputVals[i] % 10 != 0)
        {
            return false;
        }
    }
    return true;
}

bool IsArrayNoMult10(int inputVals[], int numVals)
{
    int i;
    for (int i = 0; i < numVals; i++)
    {
        if (inputVals[i] % 10 == 0)
        {
            return false;
        }
    }
    return true;
}
