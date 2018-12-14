#include <stdio.h>
#include <string.h>


void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);
// Prints the next departure time from an imaginary flight time table.
// Unsafe use of scanf
int main(void)
{
    int hours, minutes, min_midnight, departure, arrival;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    min_midnight = hours * 60 + minutes;

    find_closest_flight(min_midnight, &departure, &arrival);
    printf("The next departure time is %.2d:%.2d, arriving at %.2d:%.2d\n",
           departure / 60, departure % 60, arrival / 60, arrival % 60);
}

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time)
{
    // Each departure time converted to minutes since midnight.
    int departure[] = {(8 * 60), (9 * 60 + 43), (11 * 60 + 19), (12 * 60 + 47),
                       (14 * 60), (15 * 60 + 45), (19 * 60), (21 * 60 + 45),
                       (8 * 60)};
    int arrival[] = {(10 * 60 + 16), (11 * 60 + 52), (13 * 60 + 31), (15 * 60),
                     (16 * 60 + 8), (17 * 60 + 55), (21 * 60 + 20), (23 * 60 + 58),
                     (10 * 60 + 16)};
    int array_length = (int) sizeof(departure) /sizeof(departure[0]);

    for (int i = 0; i < array_length; i++)
        if (departure[i] - desired_time >= 0 || i == array_length - 1)
        {
            *departure_time = departure[i];
            *arrival_time = arrival[i];
            break;
        }
}
