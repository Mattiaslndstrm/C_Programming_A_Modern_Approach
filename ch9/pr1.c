#include <stdio.h>

void selection_sort(int a[], int n);

int main(void)
{
    int a[10] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selection_sort(a, 10);
    for (int i = 0; i < 10; i++)
        printf("%d\n", a[i]);
}

// A recursive implementation of selection sort.
void selection_sort(int a[], int n)
{
    if (n == 0)
        return;
    int index = 0, temp;
    for (int i = 0; i < n; i++)
        if (a[i] > a[index])
            index = i;
    temp = a[n - 1];
    a[n - 1] = a[index];
    a[index] = temp;
    return selection_sort(a, n - 1);
}
