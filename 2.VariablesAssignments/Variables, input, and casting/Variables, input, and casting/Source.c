#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {

	// FIXME: Define char and string variables similarly
	int userInt;
	printf("Enter integer:\n");
	scanf("%d", &userInt);

	// FIXME (1): Finish reading other items into variables, then output the four values on a single line separated by a space
	double userDouble;
	printf("Enter double:\n");
	scanf("%lf", &userDouble);

	char userCharacter;
	printf("Enter character:\n");
	scanf(" %c", &userCharacter);

	char userString[10];
	printf("Enter string:\n");
	scanf("%s", userString);

	printf("%d %lf %c %s\n", userInt, userDouble, userCharacter, userString);
	printf("%s %c %lf %d\n", userString, userCharacter, userDouble, userInt);
	printf("%lf cast to an integer is %d\n", userDouble, (int)userDouble);



	// FIXME (2): Output the four values in reverse


	// FIXME (3): Cast the double to an integer, and output that integer
}