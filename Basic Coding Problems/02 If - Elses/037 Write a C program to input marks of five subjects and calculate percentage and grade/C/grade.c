/**
 * @file grade.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief A C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to the following:
 *
 * Percentage >= 90% : Grade A
 * Percentage >= 80% : Grade B
 * Percentage >= 70% : Grade C
 * Percentage >= 60% : Grade D
 * Percentage >= 40% : Grade E
 * Percentage  <  40% : Grade F
 */

#include <stdio.h>

int main() {

    /**
     * @brief The variables `physics`, `chemistry`, `biology`, `mathematics`, and `computer` store the marks of the student in the five subjects.
     */
    float physics, chemistry, biology, mathematics, computer, percentage;

    /**
     * @brief The `printf()` function prompts the user to enter the marks of the student in the five subjects.
     */
    printf("Enter the marks of Physics, Chemistry, Biology, Mathematics and Computer respectively: ");
    scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &mathematics, &computer);

    /**
     * @brief The `percentage` variable stores the percentage of the student's marks.
     * @note The percentage is calculated by dividing the sum of the student's marks by 5.
     */
    percentage = (physics + chemistry + biology + mathematics + computer) / 5;

    /**
     * @brief The `if` statement checks the percentage of the student's marks and prints the corresponding grade.
     */
    if (percentage >= 90) {
        printf("Grade A");
    } else if (percentage >= 80) {
        printf("Grade B");
    } else if (percentage >= 70) {
        printf("Grade C");
    } else if (percentage >= 60) {
        printf("Grade D");
    } else if (percentage >= 40) {
        printf("Grade E");
    } else {
        printf("Grade F");
    }

    return 0;
}