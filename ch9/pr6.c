#include <stdio.h>

long long int compute_polynomal(long long int x);

int main(void)
{
    long long int x;
    printf("This program calculates the value of the polynomal:"
            "\n\n3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n\n"
            "Enter a value for x: ");
    scanf("%lld", &x);
    printf("The value of the polynomial is: %lld\n", compute_polynomal(x));
    return 0;
}

long long int compute_polynomal(long long int x)
{
    return 3 * x * x * x * x * x
           + 2 * x * x * x * x
           - 5 * x * x * x
           - x * x
           + 7 * x
           - 6;
}
