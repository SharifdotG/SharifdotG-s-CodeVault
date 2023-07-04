#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float fahrenheit, celsius;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "The temperature in Celsius is: " << fixed << setprecision(2) << celsius << endl;

    return 0;
}