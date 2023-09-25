/**
 * @file KilometerstoMiles.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Kilometers to Miles in C++
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
    double kilometers;

    cout << "Enter the distance in Kilometers: ";
    cin >> kilometers;

    cout << fixed << setprecision(2) << "Distance in Miles = " << kilometers * 0.621371 << endl;

    return 0;
}