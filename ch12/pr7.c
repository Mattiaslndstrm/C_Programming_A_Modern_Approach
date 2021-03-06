#include <stdio.h>


#define N 10

void max_min (int a[], int n, int *max, int *min);

// Prints the largest and smallest of N numbers with a pointer. Unsafe use of scanf
int main(void)
{
    int b[N], i, big, small;
    printf("Enter %d numbers: \n", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);
    max_min(b, N, &big, &small);
    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    *max = *min = *a;
    for (int *p = &a[1]; p < a + n; p++)
    {
        if (*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;
    }
}
