/**
 * @file marks.c
 * @author SharifdotG
 * @date 2023-06-25
 * @brief A C program to enter marks of five subjects and calculate total, average and percentage.
 *
 * This program first prompts the user to enter the marks of five subjects. Then, it calculates the total, average and percentage of the marks. Finally, it prints the results to the console.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The variables `subject1`, `subject2`, `subject3`, `subject4`, and `subject5` store the marks of the five subjects.
     */
    int subject1, subject2, subject3, subject4, subject5;

    /**
     * @brief The variable `total` stores the total marks of the five subjects.
     */
    int total;

    /**
     * @brief The variable `average` stores the average marks of the five subjects.
     */
    float average;

    /**
     * @brief The variable `percentage` stores the percentage of the total marks of the five subjects.
     */
    float percentage;

    /**
     * @brief The `printf()` function prompts the user to enter the marks of the five subjects.
     */
    printf("Enter the marks of the subjects: ");
    scanf("%d %d %d %d %d", &subject1, &subject2, &subject3, &subject4, &subject5);

    /**
     * @brief The `total` variable is assigned the sum of the `subject1`, `subject2`, `subject3`, `subject4`, and `subject5` variables.
     */
    total = subject1 + subject2 + subject3 + subject4 + subject5;

    /**
     * @brief The `average` variable is assigned the total marks divided by 5.
     */
    average = total / 5.0;

    /**
     * @brief The `percentage` variable is assigned the total marks multiplied by 100 and divided by 500.
     */
    percentage = (total / 500.0) * 100;

    /**
     * @brief The `printf()` function prints the total marks of the five subjects.
     */
    printf("The total marks of the subjects is: %d\n", total);

    /**
     * @brief The `printf()` function prints the average marks of the five subjects.
     */
    printf("The average marks of the subjects is: %.2f\n", average);

    /**
     * @brief The `printf()` function prints the percentage of the total marks of the five subjects.
     */
    printf("The percentage of the total marks of the subjects is: %.2f%%\n", percentage);

    return 0;
}