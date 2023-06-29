/**
 * @file maximum_three_numbers.c
 * @author SharifdotG
 * @date 2023-06-29
 * @brief A C program to find a maximum between three numbers using ternary operator.
 */

#include <stdio.h>

int main() {
    
    int a, second_number, third_number, maximum;

    /*
     * Prompt the user to enter the first number.
     */
    printf("Enter the first number: ");
    scanf("%d", &a);

    /*
     * Prompt the user to enter the second number.
     */
    printf("Enter the second number: ");
    scanf("%d", &second_number);

    /*
     * Prompt the user to enter the third number.
     */
    printf("Enter the third number: ");
    scanf("%d", &third_number);

    /*
     * Find the maximum number.
     *
     * The ternary operator is used to evaluate the expression and return the
     * appropriate value. The expression first_number > second_number is first
     * evaluated. If the expression is true, then the value of first_number is
     * returned. Otherwise, the value of second_number is returned.
     *
     * The inner ternary operator is used to compare the value of first_number
     * with the value of third_number. If the value of first_number is greater
     * than the value of third_number, then the value of first_number is
     * returned. Otherwise, the value of third_number is returned.
     */
    maximum = first_number > second_number ? (first_number > third_number ? first_number : third_number) : (second_number > third_number ? second_number : third_number);

    /*
     * Print the maximum value.
     */
    printf("The maximum value is: %d\n", maximum);

    return 0;
}