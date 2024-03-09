#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; ++i) {
        double initialVelocity, theta, distanceCanonToWall, lowerEdgeHeight, upperEdgeHeight;
        cin >> initialVelocity >> theta >> distanceCanonToWall >> lowerEdgeHeight >> upperEdgeHeight;

        // As double x = initialVelocity * t * cos(theta * M_PI / 180.0);
        double t = distanceCanonToWall / (initialVelocity * cos(theta * M_PI / 180.0));
        double y = initialVelocity * t * sin(theta * M_PI / 180.0) - 0.5 * 9.81 * t * t;

        if (y - 1.0 > lowerEdgeHeight && y + 1.0 < upperEdgeHeight) {
            cout << "Safe" << endl;
        } else {
            cout << "Not Safe" << endl;
        }
    }

    return 0;
}