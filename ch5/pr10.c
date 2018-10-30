#include <stdio.h>
#include <stdlib.h>

// Converts a numerical grade to a letter grade. Unsafe use of scanf.
int main(void)
{
    int grade;
    char letter;

    printf("Enter a numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Illegal number!\n");
        exit(EXIT_FAILURE);
    }

    switch (grade / 10)
    {
        case 10:
        case 9:
            letter = 'A';
            break;
        case 8:
            letter = 'B';
            break;
        case 7:
            letter = 'C';
            break;
        case 6:
            letter = 'D';
            break;
        default:
            letter = 'F';
            break;
    }
    printf("Letter grade: %c\n", letter);
    return 0;
}
