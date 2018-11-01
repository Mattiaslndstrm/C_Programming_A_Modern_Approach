#include <stdio.h>

long int fact(long int n);


// Calculates an approximate value of e. Lets the user enter the last value
// in the infinite series used to calculate e: e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n
// Unsafe use of scanf.
int main(void)
{
    long int n;
    double e = 1;
    printf("Enter a number: ");
    scanf("%ld", &n);
    for (int i = 1; i <= n; i++)
    {
        e +=  (1 / (double) fact(i));
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
