#include <stdio.h> 

double ConvKilometersToMiles(double numKm) {
   double milesPerKm = 0.621371;
   return numKm * milesPerKm;
}
 
double ConvLitersToGallons(double numLiters) {
   double gallonsPerLiter = 0.264172;
   return numLiters * gallonsPerLiter;
}
 
double CalcMpg(double distMiles, double gasGallons) {
   printf("FIXME: Calculate MPG\n");
   return 0.0;
}
 
int main(void) {
   double distKm;
   double distMiles;
   double gasLiters;
   double gasGal;
   double userMpg;
   
   printf("Enter kilometers driven: ");
   scanf("%lf", &distKm);
   printf("Enter liters of gas consumed: ");
   scanf("%lf", &gasLiters);
   
   distMiles = ConvKilometersToMiles(distKm);
   gasGal = ConvLitersToGallons(gasLiters);
   userMpg = CalcMpg(distMiles, gasGal);
   
   printf("Miles driven: %lf\n", distMiles);
   printf("Gallons of gas: %lf\n", gasGal);
   printf("Mileage: %lf mpg\n", userMpg);
   
   return 0;
}