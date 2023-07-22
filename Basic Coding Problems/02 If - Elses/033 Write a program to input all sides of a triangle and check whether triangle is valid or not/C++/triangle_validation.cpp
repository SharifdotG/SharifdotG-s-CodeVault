#include <iostream>

using namespace std;

int main() {
    int side_a, side_b, side_c;

    cout << "Enter the three sides of a triangle: ";
    cin >> side_a >> side_b >> side_c;

    if (side_a + side_b > side_c && side_a + side_c > side_b && side_b + side_c > side_a) {
        cout << "The triangle is valid.";
    } else {
        cout << "The triangle is not valid.";
    }

    return 0;
}