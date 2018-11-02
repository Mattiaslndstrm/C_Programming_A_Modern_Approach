#include <stdio.h>


// Sums a series of doubles. Unsafe use of scanf.
int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of floats.\n");
    printf("Enter integers: (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is %lf\n", sum);

    return 0;
}
