#include <stdio.h>
#include <ctype.h>

#define AL 1000

// Translates the user input to L33T-5P34K.
int main(void)
{
    char a[AL], ch;
    int n = 0;
    printf("Enter message: ");
    for (int i = 0; i < AL && ch != '\n'; i++)
    {
        a[i] = (ch = getchar());
        n++;
    }
    printf("In B1FF-speak: ");
    for (int i = 0; i < n -1; i++)
    {
        switch(toupper(a[i]))
        {
            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default:
                printf("%c", toupper(a[i]));
        }
    }
    printf("!!!!!!!!!!\n");
}
