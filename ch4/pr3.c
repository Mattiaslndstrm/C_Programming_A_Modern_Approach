#include <stdio.h>


// Reverses a three digit number without arithmetic.
int main(void)
{
    int hundred, ten, singel;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hundred, &ten, &singel);
    printf("Your number reversed is %d%d%d\n", singel, ten, hundred);
    return 0;
}


