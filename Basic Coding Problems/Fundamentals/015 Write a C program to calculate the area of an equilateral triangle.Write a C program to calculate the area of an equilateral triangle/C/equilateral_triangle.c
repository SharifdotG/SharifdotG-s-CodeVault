/**
 * @file equilateral_triangle.c
 * @brief Calculates the area of an equilateral triangle.
 * @author SharifdotG
 * @date 2023-06-25
 *
 * This program calculates the area of an equilateral triangle. The user
 * enters the side length of the triangle, and the program then calculates
 * the area using the formula:
 *
 * area = (sqrt(3) / 4) * side * side
 *
 * The program then prints the area to the console.
 */

#include <stdio.h>
#include <math.h>

/**
 * @brief The main function.
 * @return 0 on success.
 */
int main() {

    /**
     * @brief The side of the equilateral triangle.
     */
    float side, area;

    /**
     * @brief Prompt the user to enter the side of the equilateral triangle.
     */
    printf("Enter the side of the equilateral triangle: ");
    scanf("%f", &side);

    /**
     * @brief Calculate the area of the equilateral triangle.
     */
    area = (sqrt(3) / 4) * side * side;

    /**
     * @brief Print the area of the equilateral triangle.
     */
    printf("The area of the equilateral triangle is: %f\n", area);

    /**
     * @brief Return 0 on success.
     */
    return 0;
}