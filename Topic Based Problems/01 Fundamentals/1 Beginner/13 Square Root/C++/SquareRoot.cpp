/**
 * @file SquareRoot.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Square Root in C++
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double number;

    cout << "Enter number: ";
    cin >> number;

    cout << "Square root of " << number << " is: " << fixed << setprecision(2) << sqrt(number) << endl;

    return 0;
}