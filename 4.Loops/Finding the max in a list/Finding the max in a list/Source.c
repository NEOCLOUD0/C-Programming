#include <stdio.h>

/* Outputs max of list of integers
   First value indicates list size
   Ex: 4 -1 9 0 3  yields 9
*/


int main(void) {
    int maxSoFar;
    int currValue;
    int numValues;
    int i;

    scanf_s("%d", &numValues);

    for (i = 0; i < numValues; ++i) {
        scanf_s("%d", &currValue);

        if (i == 0) { // First iteration
            maxSoFar = currValue;
        }
        else if (currValue > maxSoFar) {
            maxSoFar = currValue;
        }
    }

    if (numValues > 0) {
        printf("Max: %d\n", maxSoFar);
    }

    return 0;
}