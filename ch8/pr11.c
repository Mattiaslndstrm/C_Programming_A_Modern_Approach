#include <stdio.h>

#define LEN 15

// Converts an alphabetic phone number to numerical form. Only works for
// uppercase letters. The other characters are printed as is.
int main(void)
{
    int n = 0;
    char a[LEN], ch;
    printf("Enter a phone number: ");
    while (ch != '\n' && n < LEN)
    {
        a[n++] = ch = getchar();
    }
    printf("In numeric form: ");
    for (int i = 0; i < n - 1; i++)
    {
        // If i is an uppercase letter.
        if (a[i] >= 65 && a[i] <= 92)
            // Q is ignored. Therefore the offset is different for S and the
            // following characters: 83+
            printf("%d", a[i] >= 83 ? ((a[i] - 1) % 65) / 3 + 2 : (a[i] % 65) / 3 + 2);
        else
            printf("%c", a[i]);
    }
    printf("\n");
}
