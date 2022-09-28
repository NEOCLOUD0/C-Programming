#include <stdio.h>
#include <stdlib.h>
#define NUM_ELEMENTS 20

int main(void)
{

    /* Type your code here. */
    int userNumbers[NUM_ELEMENTS];

    int numVals;
    int userInput;
    int i;
    int smallerNum;
    int smallestNum;

    // Integer indicating the number of integers that follow
    scanf("%d", &numVals);
    // Get list of integers from input
    for (i = 0; i < numVals; ++i)
    {
        scanf("%d", &userInput);
        userNumbers[i] = userInput;
    }
    // Determine if element 0 or element 1 is the smallest integer, initialize accordingly
    if (userNumbers[0] < userNumbers[1])
    {
        smallerNum = userNumbers[1];
        smallestNum = userNumbers[0];
    }
    else
    {
        smallerNum = userNumbers[0];
        smallestNum = userNumbers[1];
    }

    // Look through remaining elements to determine the two smallest integers in the list
    for (i = 2; i < numVals; ++i)
    {
        if (userNumbers[i] < smallestNum)
        {
            smallerNum = smallestNum;
            smallestNum = userNumbers[i];
        }
        else if (userNumbers[i] < smallerNum)
        {
            smallerNum = userNumbers[i];
        }
    }
    // Output the two smallest integers in the list in ascending order
    printf("%d %d\n", smallestNum, smallerNum);
    return 0;
}
