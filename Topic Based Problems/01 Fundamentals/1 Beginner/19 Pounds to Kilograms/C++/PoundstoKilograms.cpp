#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pounds;

    cout << "Enter the weight in Pounds: ";
    cin >> pounds;

    cout << fixed << setprecision(2) << "Weight in Kilograms = " << pounds * 0.453592 << endl;

    return 0;
}