/**
 * @file days_to_years_weeks_days.c
 * @author SharifdotG
 * @date 2023-06-22
 * @brief A C program to convert days into years, weeks, and days.
 *
 * This program takes an input number of days and prints the number of years, weeks, and days
 * that make up that number of days.
 */

#include <stdio.h>

int main() {

    /* Declare variables */
    int days, years, weeks;

    /* Get the number of days from the user */
    printf("Enter the number of days: ");
    scanf("%d", &days);

    /* Calculate the number of years, weeks, and days */
    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;

    /* Print the results */
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}