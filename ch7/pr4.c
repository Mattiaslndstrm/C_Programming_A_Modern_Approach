#include <stdio.h>


// Converts an alphabetic phone number to numerical form. Only works for
// uppercase letters. The other characters are printed as is.
int main(void)
{
    char i = 1;
    printf("Enter a phone number: ");
    while (i != '\n')
    {
        i = getchar();
        // If i is an uppercase letter.
        if (i >= 65 && i <= 92)
            // Q is ignored. Therefore the offset is different for S and the
            // following characters: 83+
            printf("%d", i >= 83 ? ((i - 1) % 65) / 3 + 2 : (i % 65) / 3 + 2);
        else
            printf("%c", i);
    }
}
