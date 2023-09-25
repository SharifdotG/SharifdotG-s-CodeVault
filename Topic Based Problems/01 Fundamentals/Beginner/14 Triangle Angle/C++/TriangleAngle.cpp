/**
 * @file TriangleAngle.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Triangle Angle in C++
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

int main() {
    int firstAngle, secondAngle, thirdAngle;

    cout << "Enter first angle: ";
    cin >> firstAngle;

    cout << "Enter second angle: ";
    cin >> secondAngle;

    thirdAngle = 180 - (firstAngle + secondAngle);

    cout << "Third angle is: " << thirdAngle << endl;

    return 0;
}