#include<stdio.h>
#include<stdlib.h>

void PrintSummary(int id, int items, double price){
    printf("Order %d:\n", id);
    printf("   Items: %d\n", items);
    printf("   Total: $%.2lf\n", price);
}

int main(void) {
   // Assume id = 42, items = 4, price = 13.99
   PrintSummary(42, 4, 13.99);

   // Continues execution
}