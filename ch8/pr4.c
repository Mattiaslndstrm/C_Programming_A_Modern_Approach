#include <stdio.h>

#define N 10
#define L (int) (sizeof(a) / sizeof(a[0]))


int main(void)
{
    int a[N], i;
    printf("Enter %d numbers: ", N);
    for (i = 0; i < L; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = L - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}
