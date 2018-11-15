#include <stdio.h>

#define NAME_LENGTH 15

// Prints the last name and the first initial in the format: Last, F.
int main(void)
{
    char ch, first, last[NAME_LENGTH];
    int i = 0;
    printf("Enter a first and last name: ");
    while ((first = getchar()) == ' ')
        ;
    while(getchar() != ' ')
        ;
    while ((ch = getchar()) == ' ' )
        ;
    do
        last[i++] = ch;
    while ((ch = getchar()) != ' ' && ch != '\n')
       ;
   for (int j = 0; j < i; j++)
        printf("%c", last[j]);
    printf(", %c.\n", first);
}
