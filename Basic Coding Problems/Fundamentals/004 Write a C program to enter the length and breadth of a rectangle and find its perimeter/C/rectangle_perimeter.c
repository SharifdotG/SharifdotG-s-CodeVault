/**
 * @file rectangle_perimeter.c
 * @author SharifdotG
 * @date 2023-06-22
 * @brief A C program to enter the length and breadth of a rectangle and find its perimeter.
 *
 * This program first prompts the user to enter the length and breadth of the rectangle. Then, it calculates the perimeter of the rectangle and prints it to the console.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The length of the rectangle.
     */
    int length;

    /**
     * @brief The breadth of the rectangle.
     */
    int breadth;

    /**
     * @brief The perimeter of the rectangle.
     */
    int perimeter;

    /**
     * Prompts the user to enter the length of the rectangle.
     */
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    /**
     * Prompts the user to enter the breadth of the rectangle.
     */
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    /**
     * Calculates the perimeter of the rectangle.
     */
    perimeter = 2 * (length + breadth);

    /**
     * Prints the perimeter of the rectangle to the console.
     */
    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}