#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


// Calculates the Scrabble value of a word.
int main(void)
{
    char ch;
    int count = 0, values[26] =
    {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
     1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        if (toupper(ch) >= 'A' && toupper(ch) <= 'Z')
            count += values[(int) toupper(ch) - 65];
        else
        {
            printf("Invalid input\n");
            exit(EXIT_FAILURE);
        }
    }
    printf("Scrabble value: %d\n", count);
}
