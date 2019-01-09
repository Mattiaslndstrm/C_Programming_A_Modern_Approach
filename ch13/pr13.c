#include <stdio.h>

#define SL 100


void encrypt(char *message, int shift);

// An implementation of the Caesar chipher. Only works for the English alphabet.
// If shift amount is out of range modulo is applied to bring it within range.
// Unsafe use of scanf.
int main(void)
{
    char message[SL];
    int shift;

    printf("Enter message to be encrypted: ");
    fgets(message, SL, stdin);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    encrypt(message, shift);
    printf("Encrypted message: %s", message);
}

void encrypt(char *message, int shift)
{
    if (shift < 0 || shift > 25)
        shift %= 26;
    for (; *message; message++)
    {
        if (*message >= 'a' && *message <= 'z')
            *message = (((*message - 'a') + shift) % 26 + 'a');
        else if (*message >= 'A' && *message <= 'Z')
            *message = (((*message - 'A') + shift) % 26 + 'A');
    }
}
