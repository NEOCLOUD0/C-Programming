#include <stdio.h>
#include <string.h>

/* Define your function here */
int CalcNumCharacters(char *userString, char userChar);

int main(void)
{

    /* Type your code here. */
    char userChar;
    char userString[50];

    scanf(" %c", &userChar);
    scanf("%s", userString);

    // CalcNumCharacters(userString, userChar);

    if (CalcNumCharacters(userString, userChar) == 1)
    {
        printf("%d %c", CalcNumCharacters(userString, userChar), userChar);
    }
    else if (CalcNumCharacters(userString, userChar) > 1 || CalcNumCharacters(userString, userChar) == 0)
    {
        printf("%d %c's", CalcNumCharacters(userString, userChar), userChar);
    }

    return 0;
}

int CalcNumCharacters(char *userString, char userChar)
{
    int count = 0;
    for (int i = 0; i < strlen(userString); i++)
    {
        if (userString[i] == userChar)
        {
            count++;
        }
    }
    return count;
}
