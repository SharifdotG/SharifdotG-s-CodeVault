#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double radius, area;

    cin >> radius;

    area = 3.14159 * radius * radius;

    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}