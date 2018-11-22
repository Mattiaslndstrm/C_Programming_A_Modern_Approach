#include <stdio.h>
#include <stdlib.h>

int modulo(int a, int b);
void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

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
    create_magic_square(size, magic);
    print_magic_square(size, magic);
}

void create_magic_square(int n, int magic_square[n][n])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magic_square[i][j] = 0;

    int x = 0, y = n / 2;
    for (int i = 1; i <= n * n; i++)
    {
        if (magic_square[x][y] != 0)
        {
            x = modulo(x + 1, n) + 1;
            y = modulo(y - 1, n);
        }
        magic_square[x][y] = i;
        x = modulo(x - 1, n), y = modulo(y + 1, n);
    }
}

void print_magic_square(int n, int magic_square[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%3d  ", magic_square[i][j]);
        printf("\n");
    }
}

// https://stackoverflow.com/questions/12089514/real-modulo-operator-in-c-c
int modulo(int a, int b)
{
    const int result = a % b;
    return result >= 0 ? result : result + b;
}
