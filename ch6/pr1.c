#include <stdio.h>


// Prints the largest number of a series number entered by the user.
// Unsafe use of scanf.
int main(void)
{
    float n = 0, temp;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%f", &temp);
        if (temp > n)
            n = temp;
        if (temp == 0)
            break;
    }
    printf("The largest number entered was %g\n", n);
}
