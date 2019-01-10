#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define AL 26
#define WL 100

bool are_anagrams(const char *word1, const char *word2);

// Tests whether two words/sentences are anagrams by comparing letter frequency.
int main(void)
{
    char word1[WL], word2[WL];

    printf("Enter first word: ");
    fgets(word1, WL, stdin);

    printf("Enter second word: ");
    fgets(word2, WL, stdin);

    printf(are_anagrams(word1, word2) ?
           "The words are anagrams\n" :
           "The words are not anagrams\n");
    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int letter_frequency1[AL] = {0}, letter_frequency2[AL] = {0};

    for (; *word1 != '\n'; word1++)
        if (toupper(*word1) >= 'A' && toupper(*word1) <= 'Z')
            letter_frequency1[toupper(*word1) - 'A']++;

    for (; *word2 != '\n'; word2++)
        if (toupper(*word2) >= 'A' && toupper(*word2) <= 'Z')
            letter_frequency2[toupper(*word2) - 'A']++;

    for (int i = 0; i < AL; i++)
        if (letter_frequency1[i] != letter_frequency2[i])
            return false;
    return true;
}
