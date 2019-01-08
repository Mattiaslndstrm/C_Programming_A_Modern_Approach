#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


#define N 100

bool is_palindrome(const char *message);

// Checks if a word is a palindrome.
int main(void)
{
    char message[N], ch;
    int i = 0;

    printf("Enter a message: ");
    // Reads only the alphabetic characters into message.
    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < N && isalpha(ch))
            message[i++] = tolower(ch);
    message[i] = '\0';
    printf(is_palindrome(message) ? "Palindrome\n" : "Not a palindrome\n");
}

bool is_palindrome(const char *message)
{
    const char *p = message, *q = message;
    // Makes q point at the null character
    while (*q)
        q++;
    // Makes q point to the character before the null character
    q--;
    while (p <= q)
        if (*q-- != *p++)
        {
            return false;
        }
    return true;
}
