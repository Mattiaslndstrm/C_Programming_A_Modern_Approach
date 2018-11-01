#include <stdio.h>


// Prints a table of square up to n. Unsafe use of scanf.

// For an int the biggest square this program can handle before overflow is
// occuring is 46340^2 = 2147395600

// The version of C that I use seems to convert i * i to an int. But since n is
// a short it can't handle values above 32766.

// A long can handle values of up to 9.22 * 10^18. Therefore it would take me
// a long time to even print these tables. Modifying the program to only print
// the square lets me find that the highest square a double can handle is
// 3037000499^2 = 9223372030926249001.

int main(void)
{
    long i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);
    for (i = 1; i <= n; i++)
        printf("%10ld%20ld\n", n, n * n);
    return 0;
}
