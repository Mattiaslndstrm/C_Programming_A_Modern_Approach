#include <stdio.h>


// Calculates the surface are of a box
// Unsafe use of scanf!
int main(void)
{
    printf("\nCalculate the surface area of a box\n\n");
    int height, length, width;
    printf("Enter height: ");
    scanf("%d", &height);
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);

    printf("\nThe height is: %d\n", height);
    printf("The length is: %d\n", length);
    printf("The width is: %d\n", width);
    printf(
           "The surface are is: %d\n",
           height * length * 2 + length * width * 2 + width * height * 2

        );
    return 0;
}