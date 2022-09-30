
#include <stdio.h>
#include <stdlib.h>

double CalcTax(double cost) {
   return cost * 0.15;
}

// Determine shipping cost based on weight
double CalcShippingCost(double weight) {
   double cost;

   if (weight < 1) {
      cost = 7.88;
   }
   else if (weight < 6) {
      cost = 14.32;
   }
   else if (weight < 10) {
      cost = 21.11;
   }
   else {
      cost = 25.5;
   }
   cost = cost + CalcTax(cost);

   return cost;
}

int main(void) {
   double weightOfPackage;        // User defined package weight

   printf("Enter package weight: ");
   scanf("%lf", &weightOfPackage);
   printf("Shipping cost: $");
   printf("%.2lf\n", CalcShippingCost(weightOfPackage));
   return 0;
}