/**
 * @file days_to_years_weeks_days.cpp
 * @author SharifdotG
 * @date 2023-07-03
 * @brief A C++ program to convert days into years, weeks, and days.
 *
 * This program takes an input number of days and prints the number of years, weeks, and days
 * that make up that number of days.
 */

#include <iostream>

using namespace std;

int main() {

    /* Declare variables */
    int days, years, weeks;

    /* Get the number of days from the user */
    cout << "Enter the number of days: ";
    cin >> days;

    /* Calculate the number of years, weeks, and days */
    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;

    /* Print the results */
    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;

    return 0;
}