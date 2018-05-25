
#include <stdio.h>


// Converts a 24-hour time to a 12-hour time.
// Unsafe use of scanf.
int main (void)
{
    int h, m;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);
    if (h == 12)
        printf("Equivalent 12-hour time: 12:%.2d AM\n", m);
    else if (h >= 0 && h <= 11)
        printf("Equivalent 12-hour time: %d:%.2d AM\n", h, m);
    else if (h >= 13 && h <= 24)
        printf("Equivalent 12-hour time: %d:%.2d PM\n", h - 12, m);
    else 
        printf("Non valid format\n");
    return 0;
}