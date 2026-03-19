#include <stdio.h>

int main()
{
    long seconds;
    int days, hours, minutes, remaining_seconds;

    printf("Enter total seconds: ");
    scanf("%ld", &seconds);

    days = seconds / 86400;
    seconds = seconds % 86400;

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    remaining_seconds = seconds % 60;

    printf("Days: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", remaining_seconds);

    return 1;
}
