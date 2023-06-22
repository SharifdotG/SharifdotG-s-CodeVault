/**
 * @file circle.c
 * @author SharifdotG
 * @date 2023-06-22
 * @brief A C program to enter the radius of a circle and find its diameter, circumference and area.
 */

#include <stdio.h>

/**
 * @brief The main function.
 * @return 0 on success.
 */
int main() {

    /**
     * @brief The radius of the circle.
     */
    int radius;

    /**
     * @brief The diameter of the circle.
     */
    float diameter;

    /**
     * @brief The circumference of the circle.
     */
    float circumference;

    /**
     * @brief The area of the circle.
     */
    float area;

    /**
     * @brief Prompt the user to enter the radius of the circle.
     */
    printf("Enter the radius of the circle: ");

    /**
     * @brief Read the radius of the circle from the user.
     */
    scanf("%d", &radius);

    /**
     * @brief Calculate the diameter of the circle.
     */
    diameter = 2 * radius;

    /**
     * @brief Calculate the circumference of the circle.
     */
    circumference = 2 * 3.14 * radius;

    /**
     * @brief Calculate the area of the circle.
     */
    area = 3.14 * radius * radius;

    /**
     * @brief Print the diameter of the circle.
     */
    printf("The diameter of the circle is: %f\n", diameter);

    /**
     * @brief Print the circumference of the circle.
     */
    printf("The circumference of the circle is: %f\n", circumference);

    /**
     * @brief Print the area of the circle.
     */
    printf("The area of the circle is: %f\n", area);

    /**
     * @brief Return 0 on success.
     */
    return 0;
}