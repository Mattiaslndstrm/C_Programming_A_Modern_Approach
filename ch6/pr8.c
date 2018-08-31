#include <stdio.h>


int main(void)
{
    int days, weekday;
    printf("Enter the number of days in the month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Mon, 7=Sun): ");
    scanf("%d", &weekday);
    printf("M  T  W  T  F  S  S\n");

    for (int i = weekday - 1; i > 0; i--)
    {
        printf("   ");
    }

    for (int i = 1; i <= days; i++)
    {
        printf("%-3d", i);
        if ((i + weekday - 1) % 7 == 0 || i == days)
        {
            printf("\n");
        }
    }
}   