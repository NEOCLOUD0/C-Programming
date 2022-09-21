#include <stdio.h>

int main(void) {
    char triangleChar;
    int triangleHeight;

    printf("Enter a character:\n");
    scanf_s("%c", &triangleChar);

    printf("Enter triangle height:\n");
    scanf_s("%d", &triangleHeight);
    printf("\n");

    for (int i = 0; i <= triangleHeight; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", triangleChar);
        }
        printf("\n");
    }

    return 0;
}