#include <stdio.h>

// Prints the reversal of a two-digit number. Unsafe use of scanf.
int main(void)
{
    int input_number, ten, single;
    printf("Enter a two-digit number: ");
    scanf("%d", &input_number);
    ten = input_number / 10;
    single = input_number % 10;
    printf("The reversal is: %d%d\n", single, ten);
    return 0;
}