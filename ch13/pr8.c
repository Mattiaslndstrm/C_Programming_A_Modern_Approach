#include <stdio.h>
#include <ctype.h>

#define WL 20

int compute_scrabble_value(const char *word);
char *read_line(char *word);

// Calculates the Scrabble value of a word.
int main(void)
{
    char word[WL + 1];
    printf("Enter a word: ");
    printf("Scrabble value: %d\n", compute_scrabble_value(read_line(word)));
}

char *read_line(char *word)
{
    int ch, i = 0;
    while ((ch = getchar()) == ' ')
        ;
    word[i++] = ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < WL)
            word[i++] = ch;
    if (i == WL)
        printf("Maximum wordlength reached. Result calculated for the first %d letters\n", WL);
    word[i] = '\0';
    return word;
}

int compute_scrabble_value(const char *word)
{
    int count = 0;
    for (; *word; word++)
    {
    switch (toupper(*word))
        {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
            case 'R': case 'S': case 'T': case 'U':
                count += 1;
                break;
            case 'D': case 'G':
                count += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                count += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                count += 4;
                break;
            case 'K':
                count += 5;
                break;
            case 'J': case 'X':
                count += 8;
                break;
            case 'Q': case 'Z':
                count += 10;
                break;
            default:
                break;
        }
    }
    return count;
}
