#include <stdio.h>

// Calculates the result for 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 with the value
// for x that the user provides.
// Yes, unsafe use of scanf!
int main(void)
{
    double x;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Please enter x for the above polinomal: ");
    scanf("%lf", &x);
    printf(
           "The result with x = %.0f is %.0f\n",
           x, 3 * x * x * x * x * x + 2 * x * x * x *
           x - 5 * x * x * x - x * x + 7 * x - 6
           );
    return 0;
}