#include <stdio.h>
#include <string.h>

#define WL 20

void read_line(char s[], int n);
void clear_string(char s[], int n);

// Prints the largest and smallest word, with smaller meaning earlier in a
// dictionary.
int main(void)
{
    char current[WL + 1], smallest[WL + 1] = "\0", largest[WL + 1] = "\0";
    while (strlen(current) != 4)
    {
        clear_string(current, WL);
        printf("Enter a word: ");
        read_line(current, WL);
        printf("%s\n", current);
        if (smallest[0] == '\0' || strcmp(current, smallest) <= 0)
        {
            clear_string(smallest, WL);
            strcpy(smallest, current);
        }
        if (strcmp(current, largest) >= 0)
        {
            clear_string(largest, WL);
            strcpy(largest, current);
        }
    }
    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

}

void clear_string(char s[], int n)
{
    for (int i = 0; i < n; i++)
        s[i] = '\0';
}

void read_line(char s[], int n)
{
    int i = 0, ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < n)
            s[i++] = ch;
    s[i] = '\0';
}
