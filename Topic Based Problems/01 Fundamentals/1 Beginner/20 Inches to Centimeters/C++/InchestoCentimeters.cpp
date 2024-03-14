#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double inches;

    cout << "Enter the length in Inches: ";
    cin >> inches;

    cout << fixed << setprecision(2) << "Length in Centimeters = " << inches * 2.54 << endl;

    return 0;
}