#include <stdio.h>

int main(void) {
    int oldestPeople[5];
    int nthPerson;       // User input, Nth oldest person

    oldestPeople[0] = 122; // Died 1997 in France
    oldestPeople[1] = 119; // Died 1999 in U.S.
    oldestPeople[2] = 117; // Died 1993 in U.S.
    oldestPeople[3] = 117; // Died 1998 in Canada
    oldestPeople[4] = 116; // Died 2006 in Ecuador

    printf("Enter N (1-5): ");
    scanf_s("%d", &nthPerson);

    if ((nthPerson >= 1) && (nthPerson <= 5)) {
        printf("The %dth oldest person lived ", nthPerson);
        printf("%d years.\n", oldestPeople[nthPerson - 1]);
    }

    return 0;
}