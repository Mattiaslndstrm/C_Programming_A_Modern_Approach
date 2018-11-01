#include <stdio.h>


// Prints a table of square up to n. Unsafe use of scanf.

// For an int the biggest square this program can handle before overflow is
// occuring is 46340^2 = 2147395600

// The version of C that I use seems to convert i * i to an int. But since n is
// a short it can't handle values above 32766.

int main(void)
{
    short i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%hd", &n);

    for (i = 1; i <= n; i++)
        printf("%12hd%12d\n", i, i * i);
    return 0;
}
