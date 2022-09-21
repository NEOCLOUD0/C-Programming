/*
* Write a program that read a name, a purchase amount and a tax code.
* The tax code has been violated and will be one of the following:
* 
* 0 tax exempt(0%)
* 1 store sale tax(3%)
* 2 federal and state tax(5%)
* 3 all other special tax (7%)
* 
* the program will compute the sales tax, the toal amount and print 
* the customers name, purchase amount, sales tax and total due.
* 
* inputs: name, purchaseAmount, taxCode
* process:
*			if(taxCode == 0){
*				taxRate = 0;
*			} else if(taxCode == 1){
*				taxRate = 0.03;
*			} else if(taxCode == 2){
*				taxRate = 0.05;
*			} else {
*				taxRate = 0.07;
*			}
* 
*		tax = taxRate * purchaseAmount;
*		totalDue = purchaseAmount + tax;
* output: name, purAmount, salesTax, and totalDue
* 
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	char name;
	int taxCode;
	double purchaseAmount, tax, taxRate, totalDue;

	printf("Enter the name\n");
	scanf_s("%c", &name);
	printf("Enter the purchase amount\n");
	scanf_s("%lf", &purchaseAmount);
	printf("Enter the tax code\n");
	scanf_s("%d", &taxCode);

	if (taxCode == 0) {
		taxRate = 0;
	}
	else if(taxCode == 1)
	{
		taxRate = 0.03;
	}
	else if(taxCode == 2)
	{
		taxRate = 0.05;
	}
	else {
		taxRate = 0.07;
	}

	tax = taxRate * purchaseAmount;
	totalDue = purchaseAmount + tax;

	printf("Name: %c\n", name);
	printf("Purchase amount: %.2lf\n", purchaseAmount);
	printf("Tax: %.2lf\n", tax);
	printf("Total amount due %.2lf\n", totalDue);

	//SWITCH

	switch (taxCode)
	{
	case 0: 
		taxRate = 0;
		break;
	case 1: 
		taxRate = 0.03;
		break;
	case 2:
		taxRate = 0.05;
		break;
	default:
		taxRate = 0.07;
		break;
	}
	
	printf("Name: %c\n", name);
	printf("Purchase amount: %.2lf\n", purchaseAmount);
	printf("Tax: %.2lf\n", tax);
	printf("Total amount due %.2lf\n", totalDue);
}

