#include <stdio.h>


// Prints the corresponding name to a wind speed in knots.
// Unsafe use of scanf.
int main(void)
{
    int speed;
    char text[] = "The wind force would be classified as %s\n";
    printf("Enter a wind speed in knots: ");
    scanf("%d", &speed);
    if (speed < 1)
        printf(text, "calm");
    else if (speed <= 3)
        printf(text, "light breeze");
    else if (speed <= 27)
        printf(text, "breeze");
    else if (speed <= 47)
        printf(text, "gale");
    else if (speed <= 63)
        printf(text, "storm");
    else
        printf(text, "hurricane");

    return 0;
}
