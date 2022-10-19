#include <stdio.h>

typedef struct Birthday_struct
{
    int month;
    int day;
} Birthday;

int main()
{
    Birthday annBirthday;

    annBirthday.month = 5;
    annBirthday.day = 2;

    printf("Ann: %d/%d\n", annBirthday.month, annBirthday.day);

    return 0;
}