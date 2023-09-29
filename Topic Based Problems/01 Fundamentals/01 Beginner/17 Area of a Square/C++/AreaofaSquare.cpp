/**
 * @file AreaofaSquare.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Area of a Square in C++
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double side;
    
    cout << "Enter the side of a Square: ";
    cin >> side;

    cout << fixed << setprecision(2) << "Area of a Square = " << pow(side, 2) << endl;

    return 0;
}