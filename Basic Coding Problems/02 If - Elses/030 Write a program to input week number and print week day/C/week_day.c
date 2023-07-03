/**
 * @file week_day.c
 * @brief A C program to input week number and print week day.
 * @author SharifdotG
 * @date 2023-06-26
 *
 * This program takes a week number as input and prints the corresponding week day.
 *
 * The program first declares an integer variable `week_number` to store the week number.
 * Then, it prompts the user to enter the week number and reads the input using the `scanf()` function.
 * Next, it uses an `if` statement to check if the week number is valid. If the week number is valid, the program prints the corresponding week day. Otherwise, the program prints an error message.
 * Finally, the program returns 0.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The variable `week_number` stores the week number.
     */
    int week_number;

    /**
     * @brief Prompts the user to enter the week number and reads the input using the `scanf()` function.
     */
    printf("Enter week number (1-7): ");
    scanf("%d", &week_number);

    /**
     * @brief Checks if the week number is valid.
     *
     * @return If the week number is valid, the program prints the corresponding week day. Otherwise, the program prints an error message.
     */
    if (week_number == 1) {
        printf("Sunday");
    } else if (week_number == 2) {
        printf("Monday");
    } else if (week_number == 3) {
        printf("Tuesday");
    } else if (week_number == 4) {
        printf("Wednesday");
    } else if (week_number == 5) {
        printf("Thursday");
    } else if (week_number == 6) {
        printf("Friday");
    } else if (week_number == 7) {
        printf("Saturday");
    } else {
        printf("Invalid Input");
    }

    return 0;
}