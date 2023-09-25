/**
 * @file InchestoCentimeters.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Inches to Centimeters in C++
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double inches;

    cout << "Enter the length in Inches: ";
    cin >> inches;

    cout << fixed << setprecision(2) << "Length in Centimeters = " << inches * 2.54 << endl;

    return 0;
}