#include <stdio.h>

#define N 100

// Reverses a message with arrays and pointers, with the address operator.
int main(void)
{
    char a[N], ch;
    char *p = &a[0];
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && ch != EOF)
        if (p < &a[N])
            *p++ = ch;
    printf("Reversal is: ");
    for (; p >= &a[0]; p--)
        putchar(*p);
    putchar('\n');
}
