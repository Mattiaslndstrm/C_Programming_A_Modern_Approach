#include <stdio.h>


// Prints the last name and the first initial in the format: Last, F.
int main(void)
{
    char first, last;
    printf("Enter a first and last name: ");
    while ((first = getchar()) == ' ')
        ;
    while(getchar() != ' ')
        ;
    while ((last = getchar()) == ' ' )
        ;
    printf("%c", last);
    while ((last = getchar()) != ' ' && last != '\n')
        printf("%c", last);
    printf(", %c.\n", first);
}
