#include <stdio.h>


int main(void)
{
    float words = 1, characters = 1;
    char ch1, ch2;
    printf("Enter a sentence: ");
    while (getchar() == ' ')
        ;
    while ((ch1 = getchar()) != '\n')
    {
        if (ch2 == ' ' && ch1 != ' ')
            words++;
        if (ch1 != ' ')
            characters++;
        ch2 = ch1;
    }
    printf("Average word longth: %.2f\n", characters / words);
}
