/**
 * @file simple_calculator.c
 * @brief A simple calculator that uses switch case to perform basic arithmetic operations.
 * @author SharifdotG
 * @date 2023-06-29
 */

#include <stdio.h>

int main() {

    /**
     * @brief The first number to be operated on.
     */
    int first_number;

    /**
     * @brief The second number to be operated on.
     */
    int second_number;

    /**
     * @brief The operator to be used for the calculation.
     */
    char operator;

    /**
     * @brief Prompts the user to enter the first number.
     */
    printf("Enter the first number: ");

    /**
     * @brief Reads the first number from the user.
     */
    scanf("%d", &first_number);

    /**
     * @brief Prompts the user to enter the second number.
     */
    printf("Enter the second number: ");

    /**
     * @brief Reads the second number from the user.
     */
    scanf("%d", &second_number);

    /**
     * @brief Prompts the user to enter the operator.
     */
    printf("Enter the operator: ");

    /**
     * @brief Reads the operator from the user.
     */
    scanf(" %c", &operator);

    /**
     * @brief Performs the appropriate calculation based on the operator.
     */
    switch (operator) {

        case '+':
            /**
             * @brief Prints the sum of the two numbers.
             */
            printf("The sum is: %d\n", first_number + second_number);
            break;

        case '-':
            /**
             * @brief Prints the difference of the two numbers.
             */
            printf("The difference is: %d\n", first_number - second_number);
            break;

        case '*':
            /**
             * @brief Prints the product of the two numbers.
             */
            printf("The product is: %d\n", first_number * second_number);
            break;

        case '/':
            /**
             * @brief Prints the quotient of the two numbers.
             */
            printf("The quotient is: %d\n", first_number / second_number);
            break;

        default:
            /**
             * @brief Prints an error message if the operator is invalid.
             */
            printf("Invalid operator\n");
    }

    return 0;
}