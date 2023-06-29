/**
 * @file maximum_between_two_numbers.c
 * @author SharifdotG
 * @date 2023-06-29
 * @brief A C program to find the maximum between two numbers using ternary operator.
 */

#include <stdio.h>

int main() {

    /**
     * @brief Variable to store the first number.
     */
    int first_number;

    /**
     * @brief Variable to store the second number.
     */
    int second_number;

    /**
     * @brief Variable to store the maximum number.
     */
    int max;

    /**
     * @brief Prompts the user to enter the value of the first number.
     */
    printf("Enter the value of the first number: ");

    /**
     * @brief Reads the value of the first number from the user.
     */
    scanf("%d", &first_number);

    /**
     * @brief Prompts the user to enter the value of the second number.
     */
    printf("Enter the value of of the second number: ");

    /**
     * @brief Reads the value of the second number from the user.
     */
    scanf("%d", &second_number);

    /**
     * @brief Calculates the maximum number and stores it in the `max` variable.
     *
     * The ternary operator is used to evaluate the condition and return the
     * appropriate value. If the first number is greater than the second number,
     * then the `max` variable is assigned the value of the first number.
     * Otherwise, the `max` variable is assigned the value of the second number.
     */
    max = (first_number > second_number) ? first_number : second_number;

    /**
     * @brief Prints the maximum number.
     */
    printf("The maximum value is: %d\n", max);

    /**
     * @brief Returns 0 to indicate that the program terminated successfully.
     */
    return 0;
}