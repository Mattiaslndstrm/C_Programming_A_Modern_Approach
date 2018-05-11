#include <stdio.h>

// Prints the reversal of a three-digit number. Unsafe use of scanf.
int main(void)
{
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    printf("The reversal is: %d%d%d\n", num % 10, (num / 10) % 10, num / 100);
    return 0;
}