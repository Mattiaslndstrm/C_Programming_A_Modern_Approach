#include <stdio.h>


// Returns the number of bills of each value to pay the amount the user provides
// Unsafe use of scanf!
int main(void)
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int twenty = amount / 20;
    int ten = (amount - twenty * 20) / 10;
    int five = (amount - twenty * 20 - ten * 10) / 5;
    int one = (amount - twenty * 20 - ten * 10 - five * 5);

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf(" $5 bills: %d\n", five);
    printf(" $1 bills: %d\n", one);

    return 0;
}