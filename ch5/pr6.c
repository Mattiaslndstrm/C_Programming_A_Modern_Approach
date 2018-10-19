#include <stdio.h>


// Checks whether a UPC code is valid.
int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, j6,
        first_sum, second_sum, total, checkdigit;
    printf("Enter a UPC code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    checkdigit = 9 - ((total - 1) % 10);
    if (j6 == checkdigit)
        printf("The UPC code is valid\n");
    else
        printf("The UPC code is invalid\n");
}
