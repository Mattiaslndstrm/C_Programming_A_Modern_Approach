#include <stdio.h>
#include <string.h>
#include <ctype.h>


// Prints the closest departure time from an imaginary flight time table.
// Unsafe use of scanf
int main(void)
{
    int hours, minutes, min_midnight;
    char departure[10 + 1], arrival[10 +1], ampm;
    // Each departure time converted to minutes since midnight.
    int a = (8 * 60), b = (9 * 60 + 43), c = (11 * 60 + 19),
        d = (12 * 60 + 47), e = (14 * 60), f = (15 * 60 + 45),
        g = (19 * 60), h = (21 * 60 + 45);

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hours, &minutes, &ampm);

    if (toupper(ampm) == 'P')
        hours += 12;

    min_midnight = hours * 60 + minutes;

    if (min_midnight < ((1440 - h + a) / 2 - 135) || (min_midnight > (g + h) / 2))
    {
        strcpy(departure, "9:45 p.m.");
        strcpy(arrival, "11:58 p.m.");
    }
    else if (min_midnight < (a + b) / 2)
    {
        strcpy(departure, "8:00 a.m.");
        strcpy(arrival, "10:16 a.m.");
    }
    else if (min_midnight < (b + c) / 2)
    {
        strcpy(departure, "9:43 a.m.");
        strcpy(arrival, "11:52 a.m.");
    }
    else if (min_midnight < (c + d) / 2)
    {
        strcpy(departure, "11:19 a.m.");
        strcpy(arrival, "1:31 p.m.");
    }
    else if (min_midnight < (d + e) / 2)
    {
        strcpy(departure, "12:47 p.m.");
        strcpy(arrival, "3:00 p.m.");
    }
    else if (min_midnight < (e + f) / 2)
    {
        strcpy(departure, "2:00 p.m.");
        strcpy(arrival, "4:08 p.m.");
    }
    else if (min_midnight < (f + g) / 2)
    {
        strcpy(departure, "3:45 p.m.");
        strcpy(arrival, "5:55 p.m.");
    }
    else if (min_midnight < (g + h) / 2)
    {
        strcpy(departure, "7:00 p.m.");
        strcpy(arrival, "9:20 p.m.");
    }

    printf("Closest eparture time is %s, arriving at %s\n", departure, arrival);
    return 0;
}
