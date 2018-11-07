#include <stdio.h>
#include <string.h>
#include <ctype.h>


// Unsafe use of scanf
int main(void)
{
    int hours, minutes;
    char ampm;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hours, &minutes, &ampm);
    if (toupper(ampm) == 'P')
        hours += 12;
    printf("Equivalent 24-hour time: %.2d:%.2d\n", hours, minutes);
    return 0;
}
