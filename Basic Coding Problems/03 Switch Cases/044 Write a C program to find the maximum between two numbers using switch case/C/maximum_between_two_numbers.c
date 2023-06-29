/**
 * @file maximum_between_two_numbers.c
 * @author SharifdotG
 * @date 2023-06-29
 * @brief A C program to find the maximum between two numbers using switch case.
 *
 * This program first prompts the user to enter two numbers. It then uses a switch case
 * statement to determine the maximum number. The maximum number is then printed to the
 * console.
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
    scanf("%d %d", &first_number, &second_number);

    /**
     * @brief Uses a switch case statement to determine the maximum number.
     *
     * The switch case statement checks if the first number is greater than the second
     * number. If it is, the maximum number is the first number. If it is not, the
     * maximum number is the second number. If the two numbers are equal, the
     * default case is executed.
     */
    switch (first_number > second_number) {

        case 1:
            /**
             * @brief Prints the maximum number to the console.
             */
            printf("The maximum number is %d.\n", first_number);
            break;
        case 0:
            /**
             * @brief Prints the maximum number to the console.
             */
            printf("The maximum number is %d.\n", second_number);
            break;
        default:
            /**
             * @brief Prints a message to the console indicating that the two numbers
             * are equal.
             */
            printf("The numbers are equal.\n");
    }
    
    /**
     * @brief Returns 0 to indicate that the program terminated successfully.
     */
    return 0;
}