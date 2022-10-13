/*
Write the code that will read a sales transcation and validate the sales number
against an array of 10 sales numbers. Any sales number not found in the array
is to be flagged as an error. The array of sales numbers are
{1,3,5,4,7,2,99,16,45,67}
*/
#include <stdio.h>
#include <stdlib.h>

// decalre functions
int getSalesNum();
int checkSalesNum(int[], int);
void outResult(int);

int main()
{
    int salesNum;
    int index;
    int numsArray[10] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67};

    salesNum = getSalesNum();
    index = checkSalesNum(numsArray, salesNum);
    outResult(index);

    return 0;
}

int getSalesNum()
{
    int x;
    printf("Enter the sales number\n");
    scanf("%d", &x);
    return x;
}

int checkSalesNum(int a[], int b)
{
    int i;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == b)
        {
            return i;
        }
    }

    return -1;
}

void outResult(int x)
{
    if (x == -1)
    {
        printf("The sales number is not found in the array. Error");
    }
    else
    {
        printf("The index of the sales number within the array is %d", x);
    }
}
