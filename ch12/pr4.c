#include <stdio.h>
#include <ctype.h>


#define N 100

int main(void)
{
    char a[N], ch, *p = a, *q = a;
    printf("Enter a message: ");
    while (p < a + N && ch != '\n')
    {
        if (isalpha((ch = getchar())))
        {
            *p++ = tolower(ch);
        }
    }
    for (p--; q < p; q++, p--)
    {
        if (*p != *q)
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
}
