#include <stdio.h>
#include <ctype.h>


// Calculates the Scrabble value of a word.
int main(void)
{
    char ch;
    int count = 0;
    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                count += 1;
                break;
            case 'D':
            case 'G':
                count += 2;
                break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                count += 3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                count += 4;
                break;
            case 'K':
                count += 5;
                break;
            case 'J':
            case 'X':
                count += 8;
                break;
            case 'Q':
            case 'Z':
                count += 10;
                break;
            default:
                break;
        }
    }
    printf("Scrabble value: %d\n", count);
}
