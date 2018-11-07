#include <stdio.h>


// Prints the sizes of different types.
int main(void)
{
    printf("The size of int is: %zu\n", sizeof(int));
    printf("The size of short is: %zu\n", sizeof(short));
    printf("The size of long is: %zu\n", sizeof(long));
    printf("The size of float is: %zu\n", sizeof(float));
    printf("The size of double is: %zu\n", sizeof(double));
    printf("The size of long double is: %zu\n", sizeof(long double));
}
