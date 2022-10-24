
int main()
{
    int someInt;
    int *valPointer;

    someInt = 5;
    printf("someInt address is %p\n", (void *)&someInt);

    valPointer = &someInt;
    printf("valPointer is %p\n", (void *)valPointer);

    printf("*valPointer is %d\n", *valPointer);

    *valPointer = 10; // Changes someInt to 10

    printf("someInt is %d\n", someInt);
    printf("*valPointer is %d\n", *valPointer);

    return 0;
}