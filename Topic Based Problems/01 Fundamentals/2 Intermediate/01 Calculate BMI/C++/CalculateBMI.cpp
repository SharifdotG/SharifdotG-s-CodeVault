/**
 * @file CalculateBMI.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Calculate BMI in C++
 * @version 1.0
 * @date 2023-09-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double weight, height;
    
    cout << "Enter your weight in kilogram: ";
    cin >> weight;

    cout << "Enter your height in meter: ";
    cin >> height;

    double bmi = weight / (height * height);

    cout << fixed << setprecision(2) << "Your BMI is " << bmi << endl;
    
    return 0;
}