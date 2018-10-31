#include <stdio.h>


// Prints the sqauare up to n. Unsafe use of scanf.
int main(void)
{
    int n, square = 2;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (square * square <= n)
    {
        printf("%d\n", square * square);
        square += 2;
    }
    return 0;
}
