#include <stdio.h>

typedef struct
{
    /* data */
    int month;
    int day;
    int year;
} DATE;

// declare a function that uses our newly defined datatype
void printADate(DATE);

int main()
{
    DATE birthday;
    birthday.month = 11;
    birthday.day = 16;
    birthday.year = 1980;

    // This is a pass by value! Cannot change the data
    printADate(birthday);
}

// Output the DATE in USA style - pass by value
void printADate(DATE myDate)
{
    printf("%02i/%02i/%i\n", myDate.day, myDate.month, myDate.year);
}