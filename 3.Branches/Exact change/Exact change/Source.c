#include<stdio.h>
#include<stdlib.h>

int main() {
	/*
	* Dollar = 100
	* Quarter = 25
	* Dime = 10
	* Nickel = 5
	* Pennies = 1
	*/

	int total;
	int dollars = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;

	scanf_s("%d", &total);

	if (total <= 0) {
		printf("No change\n");
	}

	//DOLLARS
	dollars = total / 100;
	if (dollars > 0 && total > 0) {
		total = total - (dollars * 100);
	}
	if (dollars == 1) {
		printf("%d Dollar\n", dollars);
	}
	else if (dollars > 1) {
		printf("%d Dollars\n", dollars);
	}

	//QUARTERS
	quarters = total / 25;
	if (quarters > 0 && total > 0) {
		total = total - (quarters * 25);
	}
	if (quarters == 1) {
		printf("%d Quarter\n", quarters);
	}
	else if (quarters > 1) {
		printf("%d Quarters\n", quarters);
	}

	//DIMES
	dimes = total / 10;
	if (dimes > 0 && total > 0) {
		total = total - (dimes * 10);
	}
	if (dimes == 1) {
		printf("%d Dime\n", dimes);
	}
	else if (dimes > 1) {
		printf("%d Dimes\n", dimes);
	}

	//NICKEL
	nickels = total / 5;
	if (nickels > 0 && total > 0) {
		total = total - (nickels * 5);
	}
	if (nickels == 1) {
		printf("%d Nickel\n", nickels);
	}
	else if (nickels > 1) {
		printf("%d Nickels\n", nickels);
	}

	//PENNIES
	pennies = total / 1;
	if (pennies > 0 && total > 0) {
		total = total - (pennies * 1);
	}
	if (pennies == 1) {
		printf("%d Penny\n", pennies);
	}
	else if (pennies > 1) {
		printf("%d Pennies\n", pennies);
	}
}