#include <stdio.h>
#include <math.h>


// Estimates the square root with Newton's method.
int main(void)
{
    int n;
    long double root, new_root, guess = 1;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    while (fabsl(guess - root) >= (0.00000000001))
    {
        root = guess;
        new_root = ((n / guess) + guess) / 2;
        guess = new_root;
    }
    printf("Square root: %Lf\n", new_root);
    return 0;
}