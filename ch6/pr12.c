#include <stdio.h>

long int fact(long int n);


// Calculates an approximate value of e. Lets the user enter a decimal value
// of the term used to calculate e. The program will calculate until the term
// becomes smaller than the term the user entered.
// Unsafe use of scanf.
int main(void)
{
    double e = 1, n, m = 1;
    printf("Enter a small floating point number: ");
    scanf("%lf", &n);
    for (int i = 1; m > n; i++)
    {
        m = (1 / (double) fact(i));
        e += m;
    }
    printf("Approximated value of e: %f\n", e);
}

long int fact(long int n)
{
    long int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
