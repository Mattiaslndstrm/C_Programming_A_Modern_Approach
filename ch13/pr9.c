#include <stdio.h>
#include <ctype.h>
#define SL 80

int compute_vowel_count(const char *sentence);

// Counts the number of vowels in the input.
int main(void)
{
    char sentence[SL + 1];
    printf("Enter a sentence: ");
    fgets(sentence, SL, stdin);
    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));
    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int count = 0, ch;
    while (*sentence)
        if ((ch = toupper(*sentence++)) == 'A' || ch == 'E' ||
             ch == 'I' || ch == 'O' || ch == 'U')
            count++;
    return count;
}
