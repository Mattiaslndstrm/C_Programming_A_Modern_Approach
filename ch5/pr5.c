#include <stdio.h>


// Calculates a fictional (too low) income tax.
// Unsafe use of scanf.
int main(void)
{
    int income;
    float tax;
    printf("Please enter your income: ");
    scanf("%d", &income);

    if (income < 750)
        tax = 0.01 * income;
    else if (income < 2250)
        tax = 7.5 + 0.02 * (income - 750);
    else if (income < 3750)
        tax = 37.5 + 0.03 * (income - 2250);
    else if (income < 5250)
        tax = 82.5 + 0.04 * (income - 3750);
    else if (income < 7000)
        tax = 142.5 + 0.05 * (income - 5250);
    else
        tax = 230 + 0.06 * (income - 7000);

    printf("Your tax due is $%.2f\n", tax);

}
