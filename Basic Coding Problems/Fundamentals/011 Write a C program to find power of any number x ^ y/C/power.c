/**
 * @file power.c
 * @author SharifdotG
 * @date 2023-06-22
 * @brief A C program to find power of any number x ^ y.
 */

#include <stdio.h>
#include <math.h>

/**
 * @brief The main function.
 * @return 0 on success, non-zero on failure.
 */
int main() {

    /**
     * @brief The number whexponent is to be found.
     */
    int number;

    /**
     * @brief The exponent of the number.
     */
    int exponent;

    /**
     * @brief The result of the power calculation.
     */
    int result;

    /**
     * @brief Prompts the user to enter the number.
     */
    printf("Enter the the number: ");

    /**
     * @brief Reads the number from the user.
     */
    scanf("%d", &number);

    /**
     * @brief Prompts the user to enter the exponent.
     */
    printf("Enter the value of the exponent: ");

    /**
     * @brief Reads the exponent from the user.
     */
    scanf("%d", &exponent);

    /**
     * @brief Calculates the power of the number.
     */
    result = pow(number, exponent);

    /**
     * @brief Prints the result of the power calculation.
     */
    printf("The value of %d ^ %d is %d\n", number, exponent, result);

    /**
     * @brief Returns 0 on success, non-zero on failure.
     */
    return 0;
}