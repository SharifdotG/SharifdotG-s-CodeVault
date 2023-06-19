/**
 * @file arithmetic.c
 * @brief A C program to enter two numbers and perform all arithmetic operations.
 *
 * @author SharifdotG
 * @date 2023-06-19
 */

#include <stdio.h>

/**
 * @brief The main function.
 *
 * @param argc The number of arguments.
 * @param argv The arguments.
 *
 * @return The exit status.
 */
int main(int argc, char *argv[])
{

    // Declare variables.
    int a, b;

    // Prompt the user for two numbers.
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate the sum, difference, product, quotient, and remainder of the two numbers.
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    // Print the results.
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    // Return 0 to indicate success.
    return 0;
}