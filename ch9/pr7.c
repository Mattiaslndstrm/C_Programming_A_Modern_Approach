#include <stdio.h>


long long int power(long long int base, int exponent);

int main(void)
{
    long long int base;
    int exponent;
    printf("Enter a base and an exponent: ");
    scanf("%lld %d", &base, &exponent);
    printf("%lld^%d = %lld\n", base, exponent, power(base, exponent));
}

// Calculates the power recursively.
long long int power(long long int base, int exponent)
{
    if (exponent == 0)
        return 1;
    if (exponent % 2 == 0)
        return power(base, exponent / 2) * power(base, exponent / 2);
    else
        return base * power(base, exponent - 1);
}
