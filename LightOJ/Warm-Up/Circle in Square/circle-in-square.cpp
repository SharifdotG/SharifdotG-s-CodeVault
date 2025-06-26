#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        double r;
        cin >> r;

        double PI = 2 * acos(0.0);

        double areaOfCircle = PI * r * r;
        double areaOfSquare = 4 * r * r;

        cout << fixed << setprecision(2) << "Case " << i << ": " << areaOfSquare - areaOfCircle << endl;
    }

    return 0;
}