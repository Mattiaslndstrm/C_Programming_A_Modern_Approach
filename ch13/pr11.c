#include <stdio.h>
#include <stdbool.h>

#define SL 100

double compute_average_word_length(const char *sentence);

// Calculates the average word length in a sentence.
int main(void)
{
    char sentence[SL];
    printf("Enter a sentence: ");
    fgets(sentence, SL, stdin);
    printf("Average word length: %.2f\n", compute_average_word_length(sentence));
}

double compute_average_word_length(const char *sentence)
{
    int words = 0;
    float characters = 0.0f;
    bool last_space = true;
    for (; *sentence != '\n'; sentence++)
    {
        if (last_space && *sentence != ' ')
            words++;

        if (*sentence != ' ')
        {
            characters++;
            last_space = false;
        }

        else
            last_space = true;
    }
    return characters / words;
}
