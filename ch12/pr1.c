#include <stdio.h>

#define N 100

int main(void)
{
    char a[N], ch;
    char *p = a;
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && ch != EOF)
        if (p < a + N)
            *p++ = ch;
    printf("Reversal is: ");
    for (; p >= a; p--)
        putchar(*p);
    putchar('\n');
}

int main2(void)
{
    char a[N], ch;
    int i = 0;
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < N)
            a[i++] = ch;
    printf("Reversal is: ");
    for (int j = i - 1; j >= 0; j--)
        putchar(a[j]);
    putchar('\n');
    return 0;
}

