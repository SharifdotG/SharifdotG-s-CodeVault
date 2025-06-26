#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int sides, sideLength, expansionDistance, landGrabs;
        cin >> sides >> sideLength >> expansionDistance >> landGrabs;

        double theta = M_PI / sides;
        double polygonArea = sides * sideLength * sideLength / (4 * tan(theta));
        double radius = expansionDistance * landGrabs;
        double circleArea = M_PI * radius * radius;
        double rectangleArea = radius * sideLength;

        cout << fixed << setprecision(9) << polygonArea + circleArea + rectangleArea * sides << endl;
    }

    return 0;
}
