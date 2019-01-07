#include <stdio.h>
#include <string.h>

#define SL 80

void reverse_name(char *name);

// Prints the last name and the first initial in the format: Last, F.
int main(void)
{
    char name[SL + 1];
    printf("Enter a first and last name: ");
    fgets(name, SL, stdin);
    reverse_name(name);
    printf("The name in the new form is: %s\n", name);
}

void reverse_name(char *name)
{
    char *p = name, *q = name, initial;
    while (*p == ' ')
        p++;
    initial = *p;
    while (*p != ' ')
        p++;
    while (*p == ' ')
        p++;
    while ((*q++ = *p))
        *p++ = '\0';
    q -= 2;
    sprintf(q, ", %c", initial);
}
