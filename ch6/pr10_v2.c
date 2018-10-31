#include <stdio.h>


// Returns the date that comes first of a number of dates in the format yy-mm-dd.
// Unsafe use of scanf

// Inspired by https://github.com/raywritescode/cpma2/blob/master/ch06/c6p10.c
int main(void)
{
    int year1, month1, day1, year2, month2, day2, total1, total2;
    printf("Enter a date (yy-mm-dd): ");
    scanf("%d-%d-%d", &year1, &month1, &day1);
    total1 = year1 > 18 ? (1900 + year1) * 365 : (2000 + year1) * 365
             + month1 * 30 + day1;
    for (;;)
    {
        printf("Enter a date (yy-mm-dd): ");
        scanf("%d-%d-%d", &year2, &month2, &day2);
        if (year2 == 0 && month2 == 0 && day2 == 0)
            break;
        total2 = year2 > 18 ? (1900 + year2) * 365 : (2000 + year2) * 365
                 + month2 * 30 + day2;
        if (total2 < total1)
        {
            year1 = year2;
            month1 = month2;
            day1 = day2;
        }
    }
    printf("%.2d-%.2d-%.2d comes first\n", year1, month1, day1);

}
