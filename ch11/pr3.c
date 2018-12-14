#include <stdio.h>


void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

// Reduces a fraction to lowest terms.
// Unsafe use of scanf
int main(void)
{
    int num, denom, red_num, red_denom;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);
    reduce(num, denom, &red_num, &red_denom);

    printf("In lowest term: %d/%d\n", red_num, red_denom);
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int temp;
    *reduced_numerator = numerator;
    *reduced_denominator = denominator;
    while (numerator > 0)
    {
        temp = numerator;
        numerator = denominator % numerator;
        denominator = temp;
    }
    *reduced_numerator /= denominator;
    *reduced_denominator /= denominator;
}
