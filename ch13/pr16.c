#include <stdio.h>

#define N 100

void reverse(char *message);

// Reverses a message
int main(void)
{
    char a[N];
    printf("Enter a message: ");
    fgets(a, N, stdin);
    reverse(a);
    printf("Your message reversed: %s", a);
}


void reverse(char *message)
{
    char *p = message, *q = message, temp;
    // Makes q point to the newline character
    while (*q != '\n')
        q++;
    // Makes q point to the last character before the newline character
    q--;

    // Swaps the characters p and q points to until they meet or passes each other
    while (p <= q)
    {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }
}
