#include <stdio.h>

/* Define your function here */ 
double LapsToMiles(double userLaps);

int main(void) {

   /* Type your code here. Your code must call the function.  */
   double laps;
   scanf("%lf", &laps);
   double value = LapsToMiles(laps);
   printf("%.2lf\n", value);
   return 0;
}

double LapsToMiles(double userLaps){
    userLaps = userLaps / 4;
    return userLaps;
}

