/**
 * @file day_of_week.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief A C program to print day of week name using switch case.
 */

#include <stdio.h>

/**
 * @brief The main function.
 * @return 0 on success.
 */
int main() {

    /**
     * @brief The day number.
     */
    int day;

    /**
     * @brief Prompt the user to enter the day number.
     */
    printf("Enter day number (1-7): ");

    /**
     * @brief Read the day number from the user.
     */
    scanf("%d", &day);

    /**
     * @brief Switch on the day number.
     */
    switch (day) {
        case 1:
            /**
             * @brief Print "Sunday".
             */
            printf("Sunday");
            break;
        case 2:
            /**
             * @brief Print "Monday".
             */
            printf("Monday");
            break;
        case 3:
            /**
             * @brief Print "Tuesday".
             */
            printf("Tuesday");
            break;
        case 4:
            /**
             * @brief Print "Wednesday".
             */
            printf("Wednesday");
            break;
        case 5:
            /**
             * @brief Print "Thursday".
             */
            printf("Thursday");
            break;
        case 6:
            /**
             * @brief Print "Friday".
             */
            printf("Friday");
            break;
        case 7:
            /**
             * @brief Print "Saturday".
             */
            printf("Saturday");
            break;
        default:
            /**
             * @brief Print "Invalid input!".
             */
            printf("Invalid input! Please enter a day number between 1-7.");
    }

    /**
     * @brief Return 0 on success.
     */
    return 0;
}