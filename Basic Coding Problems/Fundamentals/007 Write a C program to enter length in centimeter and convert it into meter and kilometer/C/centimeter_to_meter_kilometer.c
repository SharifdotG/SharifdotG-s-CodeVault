/**
 * @file centimeter_to_meter_kilometer.c
 * @brief A C program to enter length in centimeter and convert it into meter and kilometer.
 * @author SharifdotG
 * @date 2023-06-22
 *
 * This program takes the length in centimeter as input and converts it into meter and kilometer.
 * The conversion formula for centimeter to meter is 1 centimeter = 0.01 meter.
 * The conversion formula for centimeter to kilometer is 1 centimeter = 0.00001 kilometer.
 */

#include <stdio.h>

int main() {

    int centimeter;
    float meter, kilometer;

    /**
     * @brief Prompts the user to enter the length in centimeter.
     */
    printf("Enter the length in centimeter: ");

    /**
     * @brief Reads the length in centimeter from the user.
     */
    scanf("%d", &centimeter);

    /**
     * @brief Converts the length in centimeter to meter.
     */
    meter = centimeter / 100.0;

    /**
     * @brief Converts the length in centimeter to kilometer.
     */
    kilometer = centimeter / 100000.0;

    /**
     * @brief Prints the length in meter.
     */
    printf("The length in meter is: %f\n", meter);

    /**
     * @brief Prints the length in kilometer.
     */
    printf("The length in kilometer is: %f\n", kilometer);

    return 0;
}