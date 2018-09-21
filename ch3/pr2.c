#include <stdio.h>


// Prints formatted information about a purchase that the users enter.
// Unsafe use of scanf.
int main(void)
{
    int item_number, month, day, year;
    float price;
    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (yyyy/mm/dd): ");
    scanf("%d/%d/%d", &year, &month, &day);

    printf("\nItem\t\t\tUnit\t\t\tPurchase\n");
    printf("\t\t\tPrice\t\t\tDate\n");
    printf("%-4d\t\t\t$%8.2f\t\t%d/%.2d/%.2d\n", item_number, price, year, month, day);
}