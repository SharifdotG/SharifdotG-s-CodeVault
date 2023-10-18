#include <iostream>

using namespace std;

int main() {
    int firstAngle, secondAngle, thirdAngle;

    cout << "Enter first angle: ";
    cin >> firstAngle;

    cout << "Enter second angle: ";
    cin >> secondAngle;

    thirdAngle = 180 - (firstAngle + secondAngle);

    cout << "Third angle is: " << thirdAngle << endl;

    return 0;
}