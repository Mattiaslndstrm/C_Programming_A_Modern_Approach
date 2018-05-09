#include <stdio.h>


// Takes a date in the dd/mm/yyyy (No, I refuse to write a program that accept a
// date in the format mm/dd/yyyy, it does not make sense.) and then outputs
// the date in the format yyyy-mm-dd. Yes, unsafe use of scanf.

int main(void)
{
    int day, month, year;
    printf("Enter a date (dd/mm/yyyy):");
    scanf("%d/%d/%d/", &day, &month, &year);
    printf("You entered the date: %d-%.2d-%.2d\n", year, month, day);
    return 0;
}