#include <stdio.h>


// Prints the number that the user enters in a 4x4 arrangment and sums the rows,
// columns and diagonals.
// Unsafe use of scanf.
int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
    printf("\n%2d %2d %2d %2d\n", a, b, c, d);
    printf("%2d %2d %2d %2d\n", e, f, g, h);
    printf("%2d %2d %2d %2d\n", i, j, k, l);
    printf("%2d %2d %2d %2d\n\n", m, n, o, p);
    printf("Row sums: %2d %2d %2d %2d\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p);
    printf("Column sums: %2d %2d %2d %2d\n", a+e+i+m, b+f+j+n, c+g+k+o, d+h+l+p);
    printf("Diagonal sums: %2d %2d\n\n", a+f+k+p, d+g+j+m);
    return 0;
}