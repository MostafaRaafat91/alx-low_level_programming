#include <stdio.h>
#include "main.h"

void print_remaining_days(int month, int day, int year)
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;
    
    // Check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        daysInMonth[2] = 29;  // February has 29 days in leap years
    }
    
    // Check if the provided date is valid
    if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month])
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }
    
    // Calculate the total number of days
    for (int i = 1; i < month; i++)
    {
        totalDays += daysInMonth[i];
    }
    totalDays += day;
    
    printf("Day of the year: %d\n", totalDays);
    printf("Remaining days: %d\n", 365 + (daysInMonth[2] == 29 ? 1 : 0) - totalDays);
}
