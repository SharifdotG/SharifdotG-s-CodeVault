#include <iostream>

using namespace std;

int main() {
    int first_angle, second_angle, third_angle;

    cout << "Enter the first angle: ";
    cin >> first_angle;

    cout << "Enter the second angle: ";
    cin >> second_angle;

    third_angle = 180 - (first_angle + second_angle);

    cout << "The third angle of the triangle is: " << third_angle << endl;

    return 0;
}