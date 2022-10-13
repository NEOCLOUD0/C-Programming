#include <stdio.h>

/* Define your function here */ 
double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven);

int main(void) {

   /* Type your code here. */
   printf("enter:\n");
   double mpg;
   scanf("%lf", &mpg);
   double dpg;
   scanf("%lf", &dpg);

   // The function called with arguments (20.0, 3.1599, 50.0) returns 7.89975.
   printf("%.2lf ",DrivingCost(mpg, dpg, 10.0));
   printf("%.2lf ",DrivingCost(mpg, dpg, 50.0));
   printf("%.2lf\n",DrivingCost(mpg, dpg, 400.0));


   return 0;
}

double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven){
    double cost = dollarsPerGallon / milesPerGallon * milesDriven;
    return cost;
}

