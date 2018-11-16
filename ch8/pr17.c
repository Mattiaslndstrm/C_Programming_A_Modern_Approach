#include <stdio.h>
#include <stdlib.h>

int modulo(int a, int b);

// Prints a magic square of size that the user enters.
int main(void)
{
    int size = 0;
    printf("This program creates a magic square of a specified size\n"
            "The size must be an odd number between 1 and 99\n");
    while (size < 1 || size > 99 || size % 2 == 0)
    {
        printf("Enter size of magic square: ");
        scanf("%d", &size);
    }
    int magic[size][size];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            magic[i][j] = 0;

    int x = 0, y = size / 2;
    for (int i = 1; i <= size * size; i++)
    {
        if (magic[x][y] != 0)
        {
            x = modulo(x + 1, size) + 1;
            y = modulo(y - 1, size);
        }
        magic[x][y] = i;
        x = modulo(x - 1, size), y = modulo(y + 1, size);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%3d  ", magic[i][j]);
        printf("\n");
    }
}

// https://stackoverflow.com/questions/12089514/real-modulo-operator-in-c-c
int modulo(int a, int b)
{
    const int result = a % b;
    return result >= 0 ? result : result + b;
}
