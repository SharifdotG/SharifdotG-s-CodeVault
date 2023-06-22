/**
 * @file rectangle_area.c
 * @author SharifdotG
 * @date 2023-06-22
 * @brief C program to enter the length and width of a rectangle and find its area.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The length of the rectangle.
     */
    int length;

    /**
     * @brief The width of the rectangle.
     */
    int width;

    /**
     * @brief The area of the rectangle.
     */
    int area;

    /**
     * @brief Prompts the user to enter the length of the rectangle.
     */
    printf("Enter the length of the rectangle: ");

    /**
     * @brief Reads the length of the rectangle from the user.
     */
    scanf("%d", &length);

    /**
     * @brief Prompts the user to enter the width of the rectangle.
     */
    printf("Enter the width of the rectangle: ");

    /**
     * @brief Reads the width of the rectangle from the user.
     */
    scanf("%d", &width);

    /**
     * @brief Calculates the area of the rectangle.
     */
    area = length * width;

    /**
     * @brief Prints the area of the rectangle.
     */
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}