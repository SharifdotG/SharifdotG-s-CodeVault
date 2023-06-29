/**
 * @file print_number_of_days_in_month.c
 * @author SharifdotG
 * @date 2023-06-29
 * @brief A C program to print the total number of days in a month using switch case.
 */

#include <stdio.h>

/**
 * @brief The main function.
 * @return 0 on success, non-zero on failure.
 */
int main() {

    /**
     * @brief The month number.
     */
    int month;

    /**
     * @brief Prompt the user to enter the month number.
     */
    printf("Enter the month number: ");

    /**
     * @brief Read the month number from the user.
     */
    scanf("%d", &month);

    /**
     * @brief Switch on the month number.
     */
    switch (month) {

        case 1:
            /**
             * @brief There are 31 days in January.
             */
            printf("There are 31 days in January.\n");
            break;
        case 2:
            /**
             * @brief There are 28 days in February (29 in a leap year).
             */
            printf("There are 28 days in February (29 in a leap year).\n");
            break;
        case 3:
            /**
             * @brief There are 31 days in March.
             */
            printf("There are 31 days in March.\n");
            break;
        case 4:
            /**
             * @brief There are 30 days in April.
             */
            printf("There are 30 days in April.\n");
            break;
        case 5:
            /**
             * @brief There are 31 days in May.
             */
            printf("There are 31 days in May.\n");
            break;
        case 6:
            /**
             * @brief There are 30 days in June.
             */
            printf("There are 30 days in June.\n");
            break;
        case 7:
            /**
             * @brief There are 31 days in July.
             */
            printf("There are 31 days in July.\n");
            break;
        case 8:
            /**
             * @brief There are 31 days in August.
             */
            printf("There are 31 days in August.\n");
            break;
        case 9:
            /**
             * @brief There are 30 days in September.
             */
            printf("There are 30 days in September.\n");
            break;
        case 10:
            /**
             * @brief There are 31 days in October.
             */
            printf("There are 31 days in October.\n");
            break;
        case 11:
            /**
             * @brief There are 30 days in November.
             */
            printf("There are 30 days in November.\n");
            break;
        case 12:
            /**
             * @brief There are 31 days in December.
             */
            printf("There are 31 days in December.\n");
            break;
        default:
            /**
             * @brief Invalid month number.
             */
            printf("Invalid month number.\n");
    }

    return 0;
}