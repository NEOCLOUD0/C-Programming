#include <stdio.h>

typedef struct ProductInfo_struct
{
    char itemName[50];
    int itemQty;
} ProductInfo;

ProductInfo AddToStock(ProductInfo productToStock, int increaseValue)
{
    productToStock.itemQty = productToStock.itemQty + increaseValue;

    return productToStock;
}

int main(void)
{
    ProductInfo mugInfo;
    int addStock;

    scanf("%s", mugInfo.itemName);
    scanf("%d", &mugInfo.itemQty);
    scanf("%d", &addStock);

    /* Your code goes here */
    // Mug 7 5
    mugInfo = AddToStock(mugInfo, addStock);

    printf("Name: %s, stock: %d\n", mugInfo.itemName, mugInfo.itemQty);

    return 0;
}