#include <stdio.h>


// Returns the reverse of a number. Unsafe use of scanf.
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Your number reversed is: ");
    for (; n > 0; n /= 10)
    {
        printf("%d", n % 10);
    }
    printf("\n");
}
