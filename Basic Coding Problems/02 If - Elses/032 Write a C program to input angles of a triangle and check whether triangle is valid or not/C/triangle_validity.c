/**
 * @file triangle_validity.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief A C program to input angles of a triangle and check whether triangle is valid or not.
 *
 * This program takes three angles as input and checks whether they form a valid triangle.
 * A valid triangle is a triangle whose three angles add up to 180 degrees.
 * The program prints "The triangle is valid." if the three angles form a valid triangle,
 * and "The triangle is not valid." if they do not.
 */

#include <stdio.h>

/**
 * @brief The main function.
 *
 * @return 0 on success, non-zero on failure.
 */
int main() {

    /**
     * @brief The angles of the triangle.
     */
    int angle_a, angle_b, angle_c;

    /**
     * @brief Prompts the user to enter the angles of the triangle.
     */
    printf("Enter the angles of the triangle: ");

    /**
     * @brief Reads the angles of the triangle from the user.
     */
    scanf("%d %d %d", &angle_a, &angle_b, &angle_c);

    /**
     * @brief Checks whether the triangle is valid.
     *
     * A triangle is valid if the sum of its three angles is 180 degrees, and all three angles are positive.
     */
    if (angle_a + angle_b + angle_c == 180 && angle_a > 0 && angle_b > 0 && angle_c > 0) {
        printf("The triangle is valid.");
    } else {
        printf("The triangle is not valid.");
    }

    /**
     * @brief Returns 0 on success, non-zero on failure.
     */
    return 0;
}