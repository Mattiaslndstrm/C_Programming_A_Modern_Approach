#include <stdio.h>


// Calculatest the gretest common divisor of two integers.
// Unsafe use of scanf.
int main(void)
{
    int m, n, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    while (n > 0)
    {
        temp = n;
        n = m % n;
        m = temp;
    }
    printf("Greatest common divisor: %d\n", m);
}
