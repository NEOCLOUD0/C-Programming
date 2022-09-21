#include <stdio.h>
#include <string.h>

int main() {
    char userWord[50];

    printf("Enter a word: ");
    scanf_s("%s", userWord);

    if (strcmp(userWord, "USA") == 0) {
        printf("United States of America\n");
    }
    else {
        printf("%s\n", userWord);
    }

    return 0;
}