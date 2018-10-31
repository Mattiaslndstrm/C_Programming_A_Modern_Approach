#include <stdio.h>


// Returns the date that comes first of two dates in the format yy-mm-dd.
// Unsafe use of scanf
int main(void)
{
    int year1, month1, day1, year2, month2, day2;
    printf("Enter a date (yy-mm-dd): ");
    scanf("%d-%d-%d", &year1, &month1, &day1);
    for (;;)
    {
        printf("Enter a date (yy-mm-dd): ");
        scanf("%d-%d-%d", &year2, &month2, &day2);
        if (year2 == 0 && month2 == 0 && day2 == 0)
            break;

        if (year2 < year1)
        {
            year1 = year2;
            month1 = month2;
            day1 = day2;
        }
        else if (year1 < year2)
            continue;
        else
        {
            if (month2 < month1)
            {
                year1 = year2;
                month1 = month2;
                day1 = day2;
            }
            else if (month1 < month2)
                continue;
            else
            {
                if (day2 < day1)
                {
                    year1 = year2;
                    month1 = month2;
                    day1 = day2;
                }
                else if (day1 < day2)
                    continue;
            }
        }

    }

    printf("%.2d-%.2d-%.2d comes first\n", year1, month1, day1);
}
