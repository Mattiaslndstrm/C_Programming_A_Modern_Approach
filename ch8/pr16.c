#include <stdio.h>
#include <ctype.h>

#define AL 26


// Tests whether two words/sentences are anagrams by comparing letter frequency.
int main(void)
{
    int word1[AL] = {0}, word2[AL] = {0};
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
        if (toupper(ch) >= 'A' && toupper(ch) <= 'Z')
            word1[toupper(ch) - 'A']++;

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
        if (toupper(ch) >= 'A' && toupper(ch) <= 'Z')
            word2[toupper(ch) - 'A']++;

    for (int i = 0; i < AL; i++)
        if (word1[i] != word2[i])
        {
            printf("The words are not anagrams\n");
            return 0;
        }
    printf("The words are anagrams\n");
    return 0;
}
