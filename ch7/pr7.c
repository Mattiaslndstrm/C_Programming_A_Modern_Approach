#include <stdio.h>


// Perform the calculation on two fractions
// Unsafe use of scanf.
int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char sign;

    printf("Enter an expression that sums/subtracts/divides/multiplies two fractions (d/d # d/d): ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &sign, &num2, &denom2);

    switch (sign)
    {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        default:
            result_num = -1;
            result_denom = -1;
            break;
    }
    if (result_denom >= 0 && result_num >= 0)
        printf("The result is: %d/%d\n", result_num, result_denom);
    else
        printf("Unvalid input\n");
    return 0;
}
