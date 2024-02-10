#include <bits/stdc++.h>

using namespace std;

int main() {
    double radius, points, circlePoints;

    while (cin >> radius >> points >> circlePoints && radius != 0) {
        double areaOfCircle = M_PI * radius * radius;
        double areaOfSquare = 4 * radius * radius;
        double ratio = circlePoints / points;

        cout << fixed << setprecision(10) << areaOfCircle << " " << areaOfSquare * ratio << endl;
    }

    return 0;
}
