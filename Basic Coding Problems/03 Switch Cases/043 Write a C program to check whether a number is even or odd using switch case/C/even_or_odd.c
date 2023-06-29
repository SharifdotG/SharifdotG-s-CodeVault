/**
 * @file even_or_odd.c
 * @author SharifdotG
 * @date 2023-06-29
 * @brief A C program to check whether a number is even or odd using switch case.
 */

#include <stdio.h>

/**
 * @brief The main function.
 * @return 0 on success, non-zero on failure.
 */
int main() {

    /**
     * @brief The number to be checked.
     */
    int number;

    /**
     * @brief Prompt the user to enter a number.
     */
    printf("Enter a number: ");

    /**
     * @brief Read the number from the user.
     */
    scanf("%d", &number);

    /**
     * @brief Check whether the number is even or odd using the switch case statement.
     */
    switch (number % 2) {

        /**
         * @brief The case for even numbers.
         */
        case 0:
            printf("The number is even.");
            break;

        /**
         * @brief The case for odd numbers.
         */
        case 1:
            printf("The number is odd.");
            break;

        /**
         * @brief The default case for invalid inputs.
         */
        default:
            printf("Invalid input.");
    }

    /**
     * @brief Return 0 on success, non-zero on failure.
     */
    return 0;
}