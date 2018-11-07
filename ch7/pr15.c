#include <stdio.h>


// Calculates the factorial of an integer.
int main(void)
{
    long long input, temp, fact = 1;
    printf("Enter a positive integer under 21: ");
    scanf("%lld", &input);
    temp = input;
    while (temp > 1)
        fact *= temp--;
    printf("Factorial of %lld: %lld\n", input, fact);
}
