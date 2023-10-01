/**
 * @file AreaofaParallelogram.cpp
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Area of a Parallelogram in C++
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
    double base, height;
    cin >> base >> height;

    double area = base * height;

    cout << fixed << setprecision(1) << area << endl;
    
    return 0;
}