#include <stdio.h>

// Prints the largest and smallest of four integers. Unsafe use of scanf.
int main(void)
{
    int a, b, c, d;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max1, min1, max2, min2, max, min;

    if (a > b)
    {
        max1 = a;
        min1 = b;
    }
    else
    {
        max1 = b;
        min1 = a;
    }

    if (c > d)
    {
        max2 = c;
        min2 = d;
    }
    else
    {
        max2 = d;
        min2 = c;
    }
    if (max1 > max2)
        max = max1;
    else
        max = max2;

    if (min1 < min2)
        min = min1;
    else
        min = min2;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

}
