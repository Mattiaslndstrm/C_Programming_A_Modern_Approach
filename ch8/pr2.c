#include <stdio.h>
#include <stdbool.h>


// Prints the repeated digits in a number in a table
// Unsafe use of scanf
int main(void)
{
    int digit_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_count[digit]++;
        n /= 10;
    }
    printf("Digit:       ");
    for (int i = 0; i < 10; i++)
        printf("%d ", i);
    printf("\nOccurrences: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", digit_count[i]);
    printf("\n");

    return 0;
}
