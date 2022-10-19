
#include <stdio.h>

typedef struct TimeHrMin_struct
{
    int hourValue;
    int minuteValue;
} TimeHrMin;

TimeHrMin ConvHrMin(int totalTime)
{
    TimeHrMin timeStruct;

    timeStruct.hourValue = totalTime / 60;
    timeStruct.minuteValue = totalTime % 60;

    return timeStruct;
}

int main(void)
{
    int inTime;
    TimeHrMin travelTime;

    printf("Enter total minutes: ");
    scanf("%d", &inTime);

    travelTime = ConvHrMin(inTime);

    printf("Equals: ");
    printf("%d hrs ", travelTime.hourValue);
    printf("%d mins\n", travelTime.minuteValue);

    return 0;
}