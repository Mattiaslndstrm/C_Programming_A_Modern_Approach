#include <stdio.h>


// Prints a table of square up to n. Unsafe use of scanf.

int main(void)
{
    long i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);
    // Consumes the newline character left from the scanf-call.
    getchar();
    for (i = 1; i <= n; i++)
    {
        if (i % 24 == 0)
        {
            printf("Press enter to continue...");
            getchar();
        }
        printf("%10ld%20ld\n", i, i * i);
    }

    return 0;
}
