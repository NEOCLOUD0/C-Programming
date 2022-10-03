#include <stdio.h>

int StepsToFeet(int baseSteps) {
   const int FEET_PER_STEP = 3;  // Unit conversion
   int feetTot;              // Corresponding feet to steps
   
   feetTot = baseSteps * FEET_PER_STEP;
}

int main(void) {
   int stepsInput;      // User defined steps
   int feetTot;         // Corresponding feet to steps
   
   // Prompt user for input
   printf("Enter number of steps walked: ");
   scanf("%d", &stepsInput);
   
   // Call functions to convert steps to feet
   feetTot = StepsToFeet(stepsInput);
   printf("Feet: %d\n", feetTot);
   
   return 0;
}
