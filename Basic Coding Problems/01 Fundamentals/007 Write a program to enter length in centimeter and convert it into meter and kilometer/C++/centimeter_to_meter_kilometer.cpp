#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int length_in_cm;
    float length_in_m, length_in_km;

    cout << "Enter the length in centimeter: ";
    cin >> length_in_cm;

    length_in_m = length_in_cm / 100.0;
    length_in_km = length_in_cm / 100000.0;

    cout << "The length in meter is: " << fixed << setprecision(2) << length_in_m << endl;
    cout << "The length in kilometer is: " << fixed << setprecision(2) << length_in_km << endl;

    return 0;
}