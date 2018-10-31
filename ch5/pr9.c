#include <stdio.h>
#include <stdbool.h>


// Returns the date that comes first of two dates in the format yy-mm-dd.
// Unsafe use of scanf
int main(void)
{
    int year1, month1, day1, year2, month2, day2;
    bool date1 = false, date2 = false;
    printf("Enter first date (yy-mm-dd): ");
    scanf("%d-%d-%d", &year1, &month1, &day1);

    printf("Enter second date (yy-mm-dd): ");
    scanf("%d-%d-%d", &year2, &month2, &day2);

    if (year1 < year2)
        date1 = true;
    else if (year2 < year1)
        date2 = true;
    else
    {
        if (month1 < month2)
            date1 = true;
        else if (month2 < month1)
            date2 = true;
        else
        {
            if (day1 < day2)
                date1 = true;
            else if (day2 < day1)
                date2 = true;
        }
    }

    if (date1)
        printf("%.2d-%.2d-%.2d comes first\n", year1, month1, day1);
    else if (date2)
        printf("%.2d-%.2d-%.2d comes first\n", year2, month2, day2);
    else
        printf("The dates are equal\n");
}
