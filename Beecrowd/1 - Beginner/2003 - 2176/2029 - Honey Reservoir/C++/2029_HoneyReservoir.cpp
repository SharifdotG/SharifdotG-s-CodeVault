#include <bits/stdc++.h>

using namespace std;

int main() {
    double volume, diameter;

    while (cin >> volume >> diameter) {
        double radius = diameter / 2;
        double area = 3.14 * radius * radius;
        double height = volume / area;

        cout << "ALTURA = " << fixed << setprecision(2) << height << endl;
        cout << "AREA = " << fixed << setprecision(2) << area << endl;
    }

    return 0;
}
