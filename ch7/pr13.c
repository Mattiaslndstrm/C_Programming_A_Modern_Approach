#include <stdio.h>
#include <stdbool.h>


// Calculates the average word length of in a sentence.
int main(void)
{
    int words = 0;
    float characters = 0.0f;
    char current;
    bool last_space = true;
    printf("Enter a sentence: ");
    while ((current = getchar()) != '\n')
    {
        if (last_space && current != ' ')
        {
            words++;
        }
        if (current != ' ')
        {
            characters++;
            last_space = false;
        }
        else
        {
            last_space = true;
        }


    }

    printf("%.2f\n", characters / (float) words);
}