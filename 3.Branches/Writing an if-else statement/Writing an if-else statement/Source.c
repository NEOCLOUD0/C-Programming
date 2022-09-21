#include<stdio.h>
#include<stdlib.h>

int main() {

	/*If userAge equals 62, assign itemDiscount with 15. 
	Else, assign itemDiscount with 0.*/
	int userAge = 62;
	int itemDiscount = 0;

	if (userAge == 62) {
		itemDiscount = 15;
	}
	else {
		itemDiscount = 0;
	}
	printf("%d", itemDiscount);

	/*If numPeople equals 10, execute groupSize = 2 * groupSize. 
	Otherwise, execute groupSize = 3 * groupSize and numPeople = numPeople - 1.*/
	int numPeople = 10;
	int groupSize = 2;

	if (numPeople == 10) {
		groupSize = 2 * groupSize;
	}
	else {
		groupSize = 3 * groupSize;
		numPeople = numPeople - 1;
	}
	printf("\n%d", groupSize);

	/*
	If numPlayers does not equal 11, execute teamSize = 11. 
	Otherwise, execute teamSize = numPlayers. 
	Then, no matter the value of numPlayers, execute teamSize = 2 * teamSize.*/
	int numPlayers = 10;
	int teamSize = 0;

	if (numPlayers != 11) {
		teamSize = 11;
	}
	else {
		teamSize = numPlayers;
	}
	teamSize = 2 * teamSize;

	
	
}