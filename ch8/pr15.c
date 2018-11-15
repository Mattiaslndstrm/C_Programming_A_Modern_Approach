#include <stdio.h>

#define SL 100

// An implementation of the Caesar chipher. Only works for the English alphabet.
// If shift amount is out of range modulo is applied to bring it within range.
// Unsafe use of scanf.
int main(void)
{
    char message[SL], ch;
    int shift, i = 0;

    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n')
        message[i++] = ch;
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    if (shift < 0 || shift > 25)
        shift %= 26;
    printf("Encrypted message: ");
    for (int j = 0; j < i; j++)
    {
        if (message[j] >= 'a' && message[j] <= 'z')
            printf("%c", ((message[j] - 'a') + shift) % 26 + 'a');
        else if (message[j] >= 'A' && message[j] <= 'Z')
            printf("%c", ((message[j] - 'A') + shift) % 26 + 'A');
        else
            printf("%c", message[j]);
    }
    printf("\n");
}
