#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int userNum;

	printf("Enter integer:\n");
	scanf("%d", &userNum);
	/* Type your code here. */

	printf("You entered: %d", userNum);
	int squaredNum = userNum * userNum;
	printf("\n%d squared is %d", userNum, squaredNum);
	int cubedNum = userNum * userNum * userNum;
	printf("\nAnd %d cubed is %d!!", userNum, cubedNum);
	
	printf("\nEnter another integer:\n");
	int userNum2;
	scanf("%d", &userNum2);
	printf("%d + %d is %d", userNum, 5, userNum2 + userNum);
	printf("\n%d * %d is %d\n", userNum, 5, userNum2 * userNum);

	return 0;

}