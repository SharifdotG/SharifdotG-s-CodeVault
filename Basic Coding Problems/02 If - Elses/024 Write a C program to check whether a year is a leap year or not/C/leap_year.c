/**
 * @file leap_year.c
 * @author SharifdotG
 * @brief A C program to check whether a year is a leap year or not.
 * @date 2023-06-25
 *
 * This program takes a year as input and prints whether it is a leap year or not.
 * A leap year is a year that has 366 days, instead of the usual 365 days.
 * Leap years occur every four years, except for century years that are not divisible by 400.
 *
 * For example, the years 2000, 2004, and 2008 are leap years, while the years 1900, 2100, and 2200 are not leap years.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The year to be checked.
     */
    int year;

    /**
     * @brief Prompts the user to enter a year.
     */
    printf("Enter a year: ");

    /**
     * @brief Reads the year from the user.
     */
    scanf("%d", &year);

    /**
     * @brief Checks whether the year is a leap year.
     *
     * A year is a leap year if it is divisible by 4, but not by 100, or if it is divisible by 400.
     */
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}