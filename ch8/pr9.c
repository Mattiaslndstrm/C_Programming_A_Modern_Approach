#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define AL 10

// Generates a random walk through a 10x10 array.
int main(void)
{
    char a[AL][AL];
    int x = 0, y = 0;
    for (int i = 0; i < AL; i++)
        for (int j = 0; j < AL; j++)
            a[i][j] = '.';
    a[x][y] = 'A';
    for (char c = 'B'; c <= 'Z'; c++)
    {
        srand(time(NULL) + rand());
        int random = rand() % 4, count = 0;
        while (1)
        {
            random = (random + 1) % 4;
            if (count++ > 4)
                goto end;
            if (random == 0)
            {
                if ((x + 1) > 9 || a[x + 1][y] != '.')
                    continue;
                else
                {
                    a[++x][y] = c;
                    break;
                }
            }
            else if (random == 1)
            {
                if ((x - 1) < 0 || a[x - 1][y] != '.')
                    continue;
                else
                {
                    a[--x][y] = c;
                    break;
                }
            }
            else if (random == 2)
            {
                if ((y + 1) > 9 || a[x][y + 1] != '.')
                    continue;
                else
                {
                    a[x][++y] = c;
                    break;
                }
            }
            else
            {
                if ((y - 1) < 0 || a[x][y - 1] != '.')
                    continue;
                else
                {
                    a[x][--y] = c;
                    break;
                }
            }
        }
    }
    end:
        for (int i = 0; i < AL; i++)
        {
            for (int j = 0; j < AL; j++)
            {
                printf("%c  ", a[i][j]);
            }
            printf("\n");
        }
    return 0;
}
