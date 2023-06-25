/**
 * @file maximum_between_three_numbers.c
 * @brief A C program to find a maximum between three numbers.
 * @author SharifdotG
 * @date 2023-06-25
 *
 * This program first asks the user to enter three numbers. Then, it compares the three numbers and prints the maximum number.
 */

#include <stdio.h>

int main()
{

    /**
     * @brief The first number entered by the user.
     */
    int first_number;

    /**
     * @brief The second number entered by the user.
     */
    int second_number;

    /**
     * @brief The third number entered by the user.
     */
    int third_number;

    /**
     * @brief Prompts the user to enter three numbers.
     */
    printf("Enter three numbers: ");

    /**
     * @brief Reads the three numbers entered by the user.
     */
    scanf("%d %d %d", &first_number, &second_number, &third_number);

    /**
     * @brief Compares the three numbers and prints the maximum number.
     */
    if (first_number > second_number && first_number > third_number) {
        printf("%d is the maximum number", first_number);
    } else if (second_number > first_number && second_number > third_number) {
        printf("%d is the maximum number", second_number);
    } else {
        printf("%d is the maximum number", third_number);
    }

    return 0;
}