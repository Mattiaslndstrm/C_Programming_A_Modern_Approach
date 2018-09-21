#include <stdio.h>


// Prints a US phone number in a different format.
// Unsafe use of scanf.
int main(void)
{
    int first, middle, end;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first, &middle, &end);
    printf("You entered %d.%d.%d\n", first, middle, end);
}