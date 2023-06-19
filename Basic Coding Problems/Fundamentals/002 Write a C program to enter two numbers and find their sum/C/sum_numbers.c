/**
 * @file sum_numbers.c
 * @author SharifdotG
 * @date 2023-06-19
 * @brief A C program to enter two numbers and find their sum.
 */

#include <stdio.h>

/**
 * @brief The main function.
 * @return 0 on success, non-zero on error.
 */
int main() {

    int a, b, sum;

    /**
     * @brief Prompts the user to enter the first number.
     */
    printf("Enter the first number: ");

    /**
     * @brief Reads the first number from the user.
     */
    scanf("%d", &a);

    /**
     * @brief Prompts the user to enter the second number.
     */
    printf("Enter the second number: ");

    /**
     * @brief Reads the second number from the user.
     */
    scanf("%d", &b);

    /**
     * @brief Calculates the sum of the two numbers.
     */
    sum = a + b;

    /**
     * @brief Prints the sum of the two numbers.
     */
    printf("The sum of the two numbers is: %d\n", sum);

    return 0;
}
