/**
 * @file number_of_days_in_month.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief A C program to input month number and print number of days in that month.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The month number entered by the user.
     */
    int month;

    /**
     * @brief Prompts the user to enter the month number and stores it in the `month` variable.
     */
    printf("Enter the month number: ");
    scanf("%d", &month);

    /**
     * @brief Checks if the `month` variable is equal to 1, 3, 5, 7, 8, 10, or 12, and prints "The number of days in this month is 31" if it is.
     */
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("The number of days in this month is 31.\n");
    }

    /**
     * @brief Checks if the `month` variable is equal to 4, 6, 9, or 11, and prints "The number of days in this month is 30" if it is.
     */
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("The number of days in this month is 30.\n");
    }

    /**
     * @brief Checks if the `month` variable is equal to 2, and prints "The number of days in this month is 28 or 29" if it is.
     */
    else if (month == 2) {
        printf("The number of days in this month is 28 or 29.\n");
    }

    /**
     * @brief Prints "Invalid month number" if the `month` variable is not equal to any of the values listed above.
     */
    else {
        printf("Invalid month number.\n");
    }

    return 0;
}