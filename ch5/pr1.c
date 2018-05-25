#include <stdio.h>


// Returns the number of digits in a number. Unsafe use of scanf
int main (void)
{
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    if (num  >= 0 && num  <= 10)
        printf("The number %d has 1 digit\n", num);
    else if (num  >= 10 && num  <= 99)
        printf("The number %d has 2 digit\n", num);
    else if (num  >= 100 && num  <= 999)
        printf("The number %d has 3 digit\n", num);
    else if (num  >= 1000 && num  <= 9999)
        printf("The number %d has 4 digit\n", num);
    else
        printf("The number %d is negative or has more than 4 digits\num ", num );
    return  0;
}