#include <iostream>

using namespace std;

int main() {
    int side_a, side_b, side_c;

    cout << "Enter the three sides of the triangle: ";
    cin >> side_a >> side_b >> side_c;

    if (side_a == side_b && side_b == side_c) {
        cout << "The triangle is equilateral." << endl;
    } else if (side_a == side_b || side_a == side_c || side_b == side_c) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}