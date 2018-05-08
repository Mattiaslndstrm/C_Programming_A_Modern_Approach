#include <stdio.h>
#define PI 3.141592653579


// Computes the volume of a sphere with the radius the user provides
// Yes! I know I should not use scanf in this way.
int main(void)
{
    int radius;
    printf("Please enter the radius of the sphere: ");
    scanf("%d", &radius);
    printf("The volume of the sphere is %.2f m^3\n",
           4.0f / 3.0f * PI * radius * radius * radius);
    return 0;
}