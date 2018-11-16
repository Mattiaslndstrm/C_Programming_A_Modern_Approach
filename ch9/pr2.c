#include <stdio.h>



// Calculates a fictional (too low) income tax.
// Unsafe use of scanf.

float tax_due(int income);

int main(void)
{
    int income;
    float tax;
    printf("Please enter your income: ");
    scanf("%d", &income);
    tax = tax_due(income);
    printf("Your tax due is $%.2f\n", tax);

}

float tax_due(int income)
{
    if (income < 750)
        return 0.01 * income;
    else if (income < 2250)
        return 7.5 + 0.02 * (income - 750);
    else if (income < 3750)
        return 37.5 + 0.03 * (income - 2250);
    else if (income < 5250)
        return 82.5 + 0.04 * (income - 3750);
    else if (income < 7000)
        return 142.5 + 0.05 * (income - 5250);
    else
        return 230 + 0.06 * (income - 7000);

}
