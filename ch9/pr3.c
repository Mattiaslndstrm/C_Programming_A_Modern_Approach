#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define AL 10


void generate_random_walk(char walk[AL][AL]);
void print_array(char walk[AL][AL]);

int main(void)
{
    char a[AL][AL];
    generate_random_walk(a);
    print_array(a);
    return 0;
}


// Generates a random walk through a 10x10 array.
void generate_random_walk(char walk[AL][AL])
{
    int x = 0, y = 0;
    for (int i = 0; i < AL; i++)
        for (int j = 0; j < AL; j++)
            walk[i][j] = '.';
    walk[x][y] = 'A';
    for (char c = 'B'; c <= 'Z'; c++)
    {
        srand(time(NULL) + rand());
        int random = rand() % 4, count = 0;
        while (1)
        {
            random = (random + 1) % 4;
            if (count++ > 4)
                return;
            if (random == 0)
            {
                if ((x + 1) > 9 || walk[x + 1][y] != '.')
                    continue;
                else
                {
                    walk[++x][y] = c;
                    break;
                }
            }
            else if (random == 1)
            {
                if ((x - 1) < 0 || walk[x - 1][y] != '.')
                    continue;
                else
                {
                    walk[--x][y] = c;
                    break;
                }
            }
            else if (random == 2)
            {
                if ((y + 1) > 9 || walk[x][y + 1] != '.')
                    continue;
                else
                {
                    walk[x][++y] = c;
                    break;
                }
            }
            else
            {
                if ((y - 1) < 0 || walk[x][y - 1] != '.')
                    continue;
                else
                {
                    walk[x][--y] = c;
                    break;
                }
            }
        }
    }
}

// prints a AL * AL sized two dimensional array.
void print_array(char walk[AL][AL])
{
    for (int i = 0; i < AL; i++)
        {
            for (int j = 0; j < AL; j++)
            {
                printf("%c  ", walk[i][j]);
            }
            printf("\n");
        }
}
