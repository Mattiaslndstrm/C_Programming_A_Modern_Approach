#include <stdio.h>

// Prints the reversal of a three-digit number. Unsafe use of scanf.
int main(void)
{
    int input_number, hundred, ten, single;
    printf("Enter a three-digit number: ");
    scanf("%d", &input_number);
    hundred = input_number / 100;
    ten = (input_number / 10) % 10;
    single = (input_number) % 10;
    printf("The reversal is: %d%d%d\n", single, ten, hundred);
    return 0;
}