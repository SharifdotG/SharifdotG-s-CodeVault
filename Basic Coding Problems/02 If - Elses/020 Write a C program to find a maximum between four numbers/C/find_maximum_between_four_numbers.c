/**
 * @file find_maximum_between_four_numbers.c
 * @author SharifdotG
 * @date 2023-06-25
 * @brief This program finds the maximum number between four numbers.
 *
 * The program first prompts the user to enter four numbers. Then, it compares the numbers and prints the maximum number.
 */

#include <stdio.h>

int main() {

    /**
     * @brief This variable stores the first number entered by the user.
     */
    int first_number;

    /**
     * @brief This variable stores the second number entered by the user.
     */
    int second_number;

    /**
     * @brief This variable stores the third number entered by the user.
     */
    int third_number;

    /**
     * @brief This variable stores the fourth number entered by the user.
     */
    int fourth_number;

    /**
     * @brief This function prompts the user to enter four numbers and stores them in the corresponding variables.
     */
    printf("Enter four numbers:\n");
    scanf("%d %d %d %d", &first_number, &second_number, &third_number, &fourth_number);

    /**
     * @brief This if statement checks if the first number is the maximum number.
     *
     * If it is, the program prints the first number.
     */
    if (first_number > second_number && first_number > third_number && first_number > fourth_number) {
        printf("%d is the maximum number.\n", first_number);
    }

    /**
     * @brief This else if statement checks if the second number is the maximum number.
     *
     * If it is, the program prints the second number.
     */
    else if (second_number > first_number && second_number > third_number && second_number > fourth_number) {
        printf("%d is the maximum number.\n", second_number);
    }

    /**
     * @brief This else if statement checks if the third number is the maximum number.
     *
     * If it is, the program prints the third number.
     */
    else if (third_number > first_number && third_number > second_number && third_number > fourth_number) {
        printf("%d is the maximum number.\n", third_number);
    }

    /**
     * @brief This else statement prints the fourth number, as it is the maximum number.
     */
    else {
        printf("%d is the maximum number.\n", fourth_number);
    }

    return 0;
}