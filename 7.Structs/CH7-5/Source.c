#include <stdio.h>

typedef struct Birthday_struct
{
    int month;
    int day;
} Birthday;

int main()
{
    Birthday pamBirthday;
    Birthday joeBirthday;
    Birthday annBirthday;

    pamBirthday.month = 3;
    pamBirthday.day = 16;
    joeBirthday.month = 9;
    joeBirthday.day = 23;
    annBirthday = pamBirthday;
    annBirthday.day = 8;

    printf("Ann: %d/%d\n", annBirthday.month, annBirthday.day);

    return 0;
}