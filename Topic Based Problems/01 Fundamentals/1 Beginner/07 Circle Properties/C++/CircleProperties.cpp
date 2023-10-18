#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

int main() {
    double radius;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Diameter of circle is: " << 2 * radius << endl;
    cout << "Circumference of circle is: " << 2 * M_PI * radius << endl;
    cout << "Area of circle is: " << M_PI * pow(radius, 2) << endl;

    return 0;
}