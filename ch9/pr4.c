#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


#define AL 26

void read_word(int counts[AL]);
bool equal_array(int counts1[AL], int counts2[AL]);

// Tests whether two words/sentences are anagrams by comparing letter frequency.
int main(void)
{
    int word1[AL] = {0}, word2[AL] = {0};

    printf("Enter first word: ");
    read_word(word1);

    printf("Enter second word: ");
    read_word(word2);

    if (equal_array(word1, word2))
        printf("The words are anagrams\n");
    else
        printf("The words are not anagrams\n");
    return 0;
}

void read_word(int counts[AL])
{
    char ch;
    while ((ch = getchar()) != '\n')
        if (toupper(ch) >= 'A' && toupper(ch) <= 'Z')
            counts[toupper(ch) - 'A']++;
}

bool equal_array(int counts1[AL], int counts2[AL])
{
    for (int i = 0; i < AL; i++)
        if (counts1[i] != counts2[i])
        {
            return false;
        }
    return true;
}
