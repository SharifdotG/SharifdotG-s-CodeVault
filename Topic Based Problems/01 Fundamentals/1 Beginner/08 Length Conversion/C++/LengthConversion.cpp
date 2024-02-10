#include <iostream>

using namespace std;

int main() {
    double meter;

    cout << "Enter meter: ";
    cin >> meter;

    cout << "Centimeter: " << meter * 100 << endl;
    cout << "Kilometer: " << meter / 1000 << endl;
    cout << "Mile: " << meter / 1609.34 << endl;
    cout << "Foot: " << meter * 3.28084 << endl;
    cout << "Inch: " << meter * 39.3701 << endl;

    return 0;
}