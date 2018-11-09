#include <stdio.h>

#define COL 5
#define ROW 5


// Reads and sums a 5 x 5 array of integers.
int main(void)
{
    int a[COL][ROW], temp;

    for (int i = 0; i < COL; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < ROW; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Row totals: ");
    for (int i = 0; i < COL; i++)
    {
        temp = 0;
        for (int j = 0; j < ROW; j++)
            temp += a[i][j];
        printf("%d ", temp);
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < ROW; i++)
    {
        temp = 0;
        for (int j = 0; j < COL; j++)
            temp += a[j][i];
        printf("%d ", temp);
    }
    printf("\n");

    return 0;
}
