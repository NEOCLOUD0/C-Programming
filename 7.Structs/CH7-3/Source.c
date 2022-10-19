
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
    Birthday annBirthday;

    joeBirthday.month = 4;
    joeBirthday.day = 1;
    pamBirthday.month = 6;
    pamBirthday.day = 8;
    annBirthday.month = 7;
    annBirthday.day = joeBirthday.day;

    printf("Ann: %d/%d\n", annBirthday.month, annBirthday.day);

    return 0;
}