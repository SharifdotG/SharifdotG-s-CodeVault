#include <iostream>

using namespace std;

int main() {
    int angle_a, angle_b, angle_c;

    cout << "Enter the angles of the triangle: ";
    cin >> angle_a >> angle_b >> angle_c;

    if (angle_a + angle_b + angle_c == 180 && angle_a > 0 && angle_b > 0 && angle_c > 0) {
        cout << "The triangle is valid.";
    } else {
        cout << "The triangle is not valid.";
    }

    return 0;
}