/**
 * @file rectangle_area.cpp
 * @author SharifdotG
 * @date 2023-07-03
 * @brief C++ program to enter the length and width of a rectangle and find its area.
 */

#include <iostream>

using namespace std;

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
    cout << "Enter the length of the rectangle: ";

    /**
     * @brief Reads the length of the rectangle from the user.
     */
    cin >> length;

    /**
     * @brief Prompts the user to enter the width of the rectangle.
     */
    cout << "Enter the width of the rectangle: ";

    /**
     * @brief Reads the width of the rectangle from the user.
     */
    cin >> width;

    /**
     * @brief Calculates the area of the rectangle.
     */
    area = length * width;

    /**
     * @brief Prints the area of the rectangle.
     */
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}