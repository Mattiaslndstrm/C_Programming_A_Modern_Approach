#include <stdio.h>
#include <ctype.h>


#define N 100

int main(void)
{
    char a[N], ch;
    int i = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < N && isalpha(ch))
            a[i++] = tolower(ch);

    for (int j = 0; j < i / 2; j++)
        if (a[j] != a[i - j - 1])
        {
            printf("Not a palindrome\n");
            return 0;
        }
    printf("Palindrome\n");
}
