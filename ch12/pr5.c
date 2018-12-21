#include <stdio.h>

#define SL 100


// Prints the words of a sentence in reverse with pointers.
int main(void)
{
    char ch, sentence[SL], *p = sentence, *q, last = '\0';
    int len = 0;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && p < sentence + SL)
        *p++ = ch;
    // If last character is not a symbol
    if (*--p <= 65 || (*p <= 48 && *p >= 57))
    {
        last = *p--;
    }
    for (; p >= sentence; p--)
    {
        if (*p != ' ' && p > sentence)
            len++;
        else
        {
            // To make sure there is spaces after every word except the last
            for (q = p == sentence ? sentence : p + 1; q <= p + len; q++)
                printf("%c", *q);
            if (p > sentence)
                printf(" ");
            len = 0;
        }
    }
    if (last)
        printf("%c\n", last);
    else
        printf("\n");
}
