/**
 * @file RectanglePerimeter.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Rectangle Perimeter in C++
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

int main() {
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Perimeter of rectangle is: " << 2 * (length + width) << endl;

    return 0;
}