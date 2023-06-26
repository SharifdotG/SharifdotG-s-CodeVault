/**
 * @file maximum_between_two.c
 * @author SharifdotG
 * @date 2023-06-25
 * @brief A C program to find the maximum between two numbers.
 *
 * This program takes two numbers as input from the user and prints the maximum number.
 *
 * @see https://github.com/SharifdotG/SharifdotG-s-CodeVault
 */

#include <stdio.h>

int main() {
    
    /**
     * @brief The first number entered by the user.
     */
    int first_number;

    /**
     * @brief The second number entered by the user.
     */
    int second_number;

    /**
     * @brief Prompts the user to enter two numbers.
     */
    printf("Enter two numbers: ");

    /**
     * @brief Reads the two numbers entered by the user.
     */
    scanf("%d %d", &first_number, &second_number);

    /**
     * @brief Compares the two numbers and prints the maximum number.
     */
    if (first_number > second_number) {
        printf("%d is greater than %d\n", first_number, second_number);
    } else {
        printf("%d is greater than %d\n", second_number, first_number);
    }

    /**
     * @brief Returns 0 to indicate successful execution.
     */
    return 0;
}