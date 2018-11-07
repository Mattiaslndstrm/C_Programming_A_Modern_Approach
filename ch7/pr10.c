#include <stdio.h>
#include <ctype.h>


// Counts the number of vowels in the input.
int main(void)
{
    char ch;
    int count = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count++;
    }
    printf("Your sentence contains %d vowels.\n", count);
    return 0;
}
