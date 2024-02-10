#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double base, exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    cout << "Power of " << base << " to the " << exponent << " is: " << fixed << setprecision(2) << pow(base, exponent) << endl;

    return 0;
}