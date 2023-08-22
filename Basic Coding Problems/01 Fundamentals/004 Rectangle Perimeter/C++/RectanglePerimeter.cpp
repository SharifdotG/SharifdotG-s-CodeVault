#include <iostream>

using namespace std;

int main() {
    int rectangleLength, rectangleBreadth, rectanglePerimeter;

    cout << "Enter the length of the rectangle: ";
    cin >> rectangleLength;

    cout << "Enter the breadth of the rectangle: ";
    cin >> rectangleBreadth;

    rectanglePerimeter = 2 * (rectangleLength + rectangleBreadth);

    cout << "The perimeter of the rectangle is: " << rectanglePerimeter << endl;

    return 0;
}