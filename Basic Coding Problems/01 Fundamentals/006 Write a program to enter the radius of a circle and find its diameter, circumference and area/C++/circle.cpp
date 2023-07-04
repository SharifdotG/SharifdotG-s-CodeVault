#include <iostream>

using namespace std;

int main()
{
    int radius;
    float diameter, circumference, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    cout << "The diameter of the circle is: " << diameter << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}