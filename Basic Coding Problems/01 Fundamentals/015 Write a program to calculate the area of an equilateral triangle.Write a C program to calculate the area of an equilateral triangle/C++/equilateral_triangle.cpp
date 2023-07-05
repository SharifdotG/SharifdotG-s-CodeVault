#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float side, area;

    cout << "Enter the side of the equilateral triangle: ";
    cin >> side;

    area = (sqrt(3) / 4) * side * side;

    cout << "The area of the equilateral triangle is: " << area << endl;

    return 0;
}