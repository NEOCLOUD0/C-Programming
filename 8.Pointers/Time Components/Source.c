#include <stdio.h>
#include <stdlib.h>

// declasre functions
void timeSegments(int, int *, int *, int *);

int main()
{
    int secondsIn, hours, minutes, secondsOut;

    secondsIn = 3667;

    timeSegments(secondsIn, &hours, &minutes, &secondsOut);

    system("Pause");
}

// Determine how many hours, minutes, and seconds
// can come from some number of seconds.

void timeSegments(int secondsIn, int *pHours, int *pMinutes, int *secondsOut)
{
    *pHours = secondsIn / 3600;
    secondsIn = secondsIn % 3600;
    *pMinutes = secondsIn / 60;
    secondsIn = secondsIn % 60;
    *secondsOut = secondsIn;
}