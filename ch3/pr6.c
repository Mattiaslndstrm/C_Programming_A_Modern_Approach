#include <stdio.h>


// Sums two fractions in the format "d/d+d/d".
// Unsafe use of scanf.
int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter an expression that sums two fraction (d/d + d/d): ");
    scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is: %d/%d\n", result_num, result_denom);
    return 0;
}