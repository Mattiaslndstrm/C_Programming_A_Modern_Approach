#include <stdio.h>

// Converts a number to base 8. Unsafe use of scanf.
int main(void)
{
    int num;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    printf("Base 8: %d%d%d%d%d\n", (num / 4096) % 8, (num / 512) % 8,
                           (num / 64) % 8, (num / 8) % 8, num % 8);
    return 0;
}