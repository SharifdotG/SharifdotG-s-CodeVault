/**
 * @file circle.cpp
 * @author SharifdotG
 * @date 2023-07-03
 * @brief A C++ program to enter the radius of a circle and find its diameter, circumference and area.
 */

#include <iostream>

using namespace std;

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
    cout << "Enter the radius of the circle: ";

    /**
     * @brief Read the radius of the circle from the user.
     */
    cin >> radius;

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
    cout << "The diameter of the circle is: " << diameter << endl;

    /**
     * @brief Print the circumference of the circle.
     */
    cout << "The circumference of the circle is: " << circumference << endl;

    /**
     * @brief Print the area of the circle.
     */
    cout << "The area of the circle is: " << area << endl;

    /**
     * @brief Return 0 on success.
     */
    return 0;
}