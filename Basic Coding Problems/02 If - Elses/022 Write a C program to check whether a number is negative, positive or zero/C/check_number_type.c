/**
 * @file check_number_type.c
 * @author SharifdotG
 * @date 2023-06-25
 * @brief A C program to check whether a number is negative, positive or zero.
 */

#include <stdio.h>

/**
 * @brief The main function.
 *
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
     * @brief Check whether the number is positive.
     */
    if (number > 0) {
        printf("The number is positive.");
    }

    /**
     * @brief Check whether the number is negative.
     */
    else if (number < 0) {
        printf("The number is negative.");
    }

    /**
     * @brief Check whether the number is zero.
     */
    else {
        printf("The number is zero.");
    }

    /**
     * @brief Return 0 on success, non-zero on failure.
     */
    return 0;
}