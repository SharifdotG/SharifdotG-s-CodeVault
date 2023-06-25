/**
 * @file triangle_angles.c
 * @brief A C program to enter two angles of a triangle and find the third angle.
 * @author SharifdotG
 * @date 2023-06-25
 *
 * This program first prompts the user to enter the two angles of a triangle. It then
 * calculates the third angle by subtracting the sum of the first two angles from 180
 * degrees. Finally, it prints the value of the third angle to the console.
 */

#include <stdio.h>

/**
 * @brief The main function.
 * @return 0 on success, non-zero on failure.
 */
int main() {

    /**
     * @brief The first angle of the triangle.
     */
    int first_angle;

    /**
     * @brief The second angle of the triangle.
     */
    int second_angle;

    /**
     * @brief The third angle of the triangle.
     */
    int third_angle;

    /**
     * @brief Prompts the user to enter the first angle.
     */
    printf("Enter the first angle: ");

    /**
     * @brief Reads the first angle from the user.
     */
    scanf("%d", &first_angle);

    /**
     * @brief Prompts the user to enter the second angle.
     */
    printf("Enter the second angle: ");

    /**
     * @brief Reads the second angle from the user.
     */
    scanf("%d", &second_angle);

    /**
     * @brief Calculates the third angle of the triangle.
     */
    third_angle = 180 - (first_angle + second_angle);

    /**
     * @brief Prints the third angle of the triangle.
     */
    printf("The third angle of the triangle is: %d\n", third_angle);

    /**
     * @brief Returns 0 on success, non-zero on failure.
     */
    return 0;
}