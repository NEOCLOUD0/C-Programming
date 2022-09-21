#include <stdio.h>
/*
   Ex: numRows = 2 and numColumns = 3 prints:
   1A 1B 1C 2A 2B 2C
*/

int main(void) {
	int numRows;
	int numColumns;
	int currentRow;
	int currentColumn;
	char currentColumnLetter;

	// scan user input for row and column
	scanf("%d", &numRows);
	scanf("%d", &numColumns);

	/* Your solution goes here  */
	for (currentRow = 1; currentRow <= numRows; currentRow++) {
		currentColumnLetter = 'A';
		for (int currentColumn = 1; currentColumn <= numColumns; currentColumn++) {
			printf("%d%c ", currentRow, currentColumnLetter);
			currentColumnLetter++;
		}
	}
	printf("\n");
	return 0;
}
