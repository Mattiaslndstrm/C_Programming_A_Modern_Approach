#include <stdio.h>

#define QUIZ 5
#define STUDENT 5


// Reads and sums a 5 x 5 array of integers.
int main(void)
{
    int a[QUIZ][STUDENT], min, max;
    float temp;

    for (int i = 0; i < QUIZ; i++)
    {
        printf("Enter scores for quiz #%d: ", i + 1);
        for (int j = 0; j < STUDENT; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\nStudent#   total     average\n");
    for (int i = 0; i < STUDENT; i++)
    {
        temp = 0;
        for (int j = 0; j < QUIZ; j++)
            temp += a[j][i];
        printf("%d          %3g       %.2f\n", i + 1, temp, temp / QUIZ);
    }
    printf("\nQuiz#    min    max    average\n");
    for (int i = 0; i < QUIZ; i++)
    {
        temp = 0;
        max = 0;
        min = -1;
        for (int j = 0; j < STUDENT; j++)
        {
            if (a[i][j] < min || min == -1)
                min = a[i][j];
            if (a[i][j] > max)
                max = a[i][j];
            temp += a[i][j];
        }
        printf("%d        %3d    %3d    %.2f\n", i + 1, min, max, temp / STUDENT);
    }

    printf("\n");

    return 0;
}
