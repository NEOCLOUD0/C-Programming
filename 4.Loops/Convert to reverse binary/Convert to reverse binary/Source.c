#include <stdio.h>
#include <stdlib.h>

int main() {
	int x; 
	scanf_s("%d", &x);

	while (x > 0)
	{
		printf("%d", (x % 2));
		x = x / 2;
	}
	printf("\n");

}