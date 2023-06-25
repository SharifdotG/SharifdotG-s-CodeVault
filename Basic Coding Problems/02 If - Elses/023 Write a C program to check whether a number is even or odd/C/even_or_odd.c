/**
 * @file even_or_odd.c
 * @brief A C program to check whether a number is even or odd.
 * @author SharifdotG
 * @date 2023-06-25
 *
 * This program takes an integer as input and prints whether the number is even or odd.
 */

#include <stdio.h>

/**
 * @brief The main function.
 *
 * @return 0 on success.
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
     * @brief Check if the number is even.
     */
    if (number % 2 == 0) {

        /**
         * @brief Print that the number is even.
         */
        printf("%d is even.\n", number);
    } else {

        /**
         * @brief Print that the number is odd.
         */
        printf("%d is odd.\n", number);
    }

    /**
     * @brief Return 0 on success.
     */
    return 0;
}