/**
 * @file triangle_validation.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief A C program to input all sides of a triangle and check whether triangle is valid or not.
 */

#include <stdio.h>

/**
 * @brief The main function.
 * @return 0 on success, non-zero on error.
 */
int main() {
    
    /**
     * @brief The three sides of the triangle.
     */
    int side_a, side_b, side_c;

    /**
     * @brief Prompt the user to enter the three sides of the triangle.
     */
    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d", &side_a, &side_b, &side_c);

    /**
     * @brief Check if the triangle is valid.
     * @return 1 if the triangle is valid, 0 otherwise.
     */
    int is_valid = (side_a + side_b > side_c) && (side_a + side_c > side_b) && (side_b + side_c > side_a);

    /**
     * @brief Print the result.
     */
    if (is_valid) {
        printf("The triangle is valid.");
    } else {
        printf("The triangle is not valid.");
    }

    /**
     * @brief Return 0 on success, non-zero on error.
     */
    return 0;
}