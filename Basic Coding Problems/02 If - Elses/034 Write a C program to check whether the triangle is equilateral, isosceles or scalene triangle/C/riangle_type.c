/**
 * @file triangle_type.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief A C program to check whether the triangle is equilateral, isosceles or scalene triangle.
 */

#include <stdio.h>

/**
 * @brief The main function.
 *
 * @return 0 on success, non-zero on failure.
 */
int main() {

    /**
     * @brief The three sides of the triangle.
     */
    int side_a, side_b, side_c;

    /**
     * @brief Prompt the user to enter the three sides of the triangle.
     */
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side_a, &side_b, &side_c);

    /**
     * @brief Check if the triangle is equilateral.
     *
     * An equilateral triangle has all three sides equal.
     */
    if (side_a == side_b && side_b == side_c) {
        printf("The triangle is equilateral.\n");
    }

    /**
     * @brief Check if the triangle is isosceles.
     *
     * An isosceles triangle has two sides equal.
     */
    else if (side_a == side_b || side_a == side_c || side_b == side_c) {
        printf("The triangle is isosceles.\n");
    }

    /**
     * @brief Otherwise, the triangle is scalene.
     *
     * A scalene triangle has no sides equal.
     */
    else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}