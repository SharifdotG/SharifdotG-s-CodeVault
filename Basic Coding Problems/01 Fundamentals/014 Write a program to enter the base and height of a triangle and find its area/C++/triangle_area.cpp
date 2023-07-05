#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float base, height, area;

    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    area = 0.5 * base * height;

    cout << "The area of the triangle is: " << fixed << setprecision(2) << area << endl;

    return 0;
}