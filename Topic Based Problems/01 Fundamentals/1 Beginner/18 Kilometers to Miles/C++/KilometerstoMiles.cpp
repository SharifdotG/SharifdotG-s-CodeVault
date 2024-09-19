#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double kilometers;

    cout << "Enter the distance in Kilometers: ";
    cin >> kilometers;

    cout << fixed << setprecision(2) << "Distance in Miles = " << kilometers * 0.621371 << endl;

    return 0;
}