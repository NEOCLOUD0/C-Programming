#include <stdio.h>

typedef struct ElapsedWeekDay_struct
{
    int weeksVal;
    int daysVal;
} ElapsedWeekDay;

ElapsedWeekDay ConvertToWeeksAndDays(int totalDays)
{
    ElapsedWeekDay tempVal;

    /* Your code goes here */
    tempVal.weeksVal = totalDays / 7;
    tempVal.daysVal = totalDays % 7;

    return tempVal;
}

int main(void)
{
    ElapsedWeekDay elapsedDays;
    int totalDays;

    scanf("%d", &totalDays);

    elapsedDays = ConvertToWeeksAndDays(totalDays);

    printf("%d weeks and %d days\n", elapsedDays.weeksVal, elapsedDays.daysVal);

    return 0;
}