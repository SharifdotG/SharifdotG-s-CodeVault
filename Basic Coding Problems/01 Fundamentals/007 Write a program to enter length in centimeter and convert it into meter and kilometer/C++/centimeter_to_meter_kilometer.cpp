/**
 * @file centimeter_to_meter_kilometer.cpp
 * @brief A C++ program to enter length in centimeter and convert it into meter and kilometer.
 * @author SharifdotG
 * @date 2023-07-03
 *
 * This program takes the length in centimeter as input and converts it into meter and kilometer.
 * The conversion formula for centimeter to meter is 1 centimeter = 0.01 meter.
 * The conversion formula for centimeter to kilometer is 1 centimeter = 0.00001 kilometer.
 */

#include <iostream>

using namespace std;

/**
 * @brief The main function of the program.
 *
 * @return 0 on success, or a non-zero value on error.
 */
int main() {

    /**
     * @brief The length in centimeter.
     */
    int centimeter;

    /**
     * @brief The length in meter.
     */
    float meter;

    /**
     * @brief The length in kilometer.
     */
    float kilometer;

    /**
     * @brief Prompts the user to enter the length in centimeter.
     */
    cout << "Enter the length in centimeter: ";

    /**
     * @brief Reads the length in centimeter from the user.
     */
    cin >> centimeter;

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
    cout << "The length in meter is: " << meter << endl;

    /**
     * @brief Prints the length in kilometer.
     */
    cout << "The length in kilometer is: " << kilometer << endl;

    return 0;
}