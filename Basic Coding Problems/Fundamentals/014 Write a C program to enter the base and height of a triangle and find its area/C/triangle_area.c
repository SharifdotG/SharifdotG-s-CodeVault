/**
 * @file triangle_area.c
 * @author SharifdotG
 * @date 2023-06-25
 * @brief A C program to enter the base and height of a triangle and find its area.
 */

#include <stdio.h>

/**
 * @brief The main function.
 * @return 0 on success, 1 on failure.
 */
int main() {

    float base, height, area;

    /**
     * @brief Prompts the user to enter the base of the triangle.
     */
    printf("Enter the base of the triangle: ");

    /**
     * @brief Reads the base of the triangle from the user.
     */
    scanf("%f", &base);

    /**
     * @brief Prompts the user to enter the height of the triangle.
     */
    printf("Enter the height of the triangle: ");

    /**
     * @brief Reads the height of the triangle from the user.
     */
    scanf("%f", &height);

    /**
     * @brief Calculates the area of the triangle.
     */
    area = 0.5 * base * height;

    /**
     * @brief Prints the area of the triangle.
     */
    printf("The area of the triangle is: %f\n", area);

    return 0;
}