#include <stdio.h>


// Reduces a fraction to lowest terms.
// Unsafe use of scanf
int main(void)
{
    int a, b, temp;
    printf("Enter a fraction: ");
    scanf("%d/%d", &a, &b);
    int m = a, n = b;

    while (n > 0)
    {
        temp = n;
        n = m % n;
        m = temp;
    }
    a /= m;
    b /= m;
    printf("In lowest term: %d/%d\n", a, b);
}
