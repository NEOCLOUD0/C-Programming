#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 10;
    int *pa;

    pa = &a;

    printf("a has %i\n", a);
    printf("the address of a is: %p\n", &a);

    *pa = 27;
    printf("a has %i\n", a);

    system("pause");
}