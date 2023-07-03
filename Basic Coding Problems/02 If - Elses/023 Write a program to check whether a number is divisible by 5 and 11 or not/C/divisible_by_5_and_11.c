/**
 * @file divisible_by_5_and_11.c
 * @author SharifdotG
 * @date 2023-06-25
 * @brief A C program to check whether a number is divisible by 5 and 11 or not.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The number to be checked.
     */
    int number;

    /**
     * @brief Prompts the user to enter a number.
     */
    printf("Enter a number: ");

    /**
     * @brief Reads the number entered by the user.
     */
    scanf("%d", &number);

    /**
     * @brief Checks if the number is divisible by both 5 and 11.
     * @return True if the number is divisible by both 5 and 11, false otherwise.
     */
    if (number % 5 == 0 && number % 11 == 0) {

        /**
         * @brief Prints a message indicating that the number is divisible by 5 and 11.
         */
        printf("%d is divisible by 5 and 11.\n", number);
    } else {

        /**
         * @brief Prints a message indicating that the number is not divisible by 5 and 11.
         */
        printf("%d is not divisible by 5 and 11.\n", number);
    }

    /**
     * @brief Returns 0 to indicate successful completion.
     */
    return 0;
}