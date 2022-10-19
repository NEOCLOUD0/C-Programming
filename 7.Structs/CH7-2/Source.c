#include <stdio.h>

typedef struct Birthday_struct
{
    int month;
    int day;
} Birthday;

int main()
{
    Birthday joeBirthday;
    Birthday pamBirthday;

    joeBirthday.month = 5;
    joeBirthday.day = 1;
    pamBirthday.month = 4;
    pamBirthday.day = 10;

    printf("Joe: %d/%d\n", joeBirthday.month, joeBirthday.day);

    return 0;
}