#include <stdio.h>

#define SL 100


// Prints the words of a sentence in reverse.
int main(void)
{
    char ch, sentence[SL];
    int i = 0, len = 0, last = 1;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
        sentence[i++] = ch;
    // If last character is not a symbol
    if (sentence[i - 1] >= 65 || (sentence[i - 1] >= 48 && sentence[i - 1] <= 57))
    {
        i++;
        last = 0;
    }
    for (int j = i - 2; j >= 0; j--)
   {
        if (sentence[j] != ' ' && j != 0)
            len++;
        else
        {
            // To make sure there is spaces after every word except the last
            for (int k = j == 0 ? 0 : j + 1; k <= j + len; k++)
                printf("%c", sentence[k]);
            if (j > 0)
                printf(" ");
            len = 0;
        }
    }
    if (last)
        printf("%c\n", sentence[i - 1]);
    else
        printf("\n");
}
