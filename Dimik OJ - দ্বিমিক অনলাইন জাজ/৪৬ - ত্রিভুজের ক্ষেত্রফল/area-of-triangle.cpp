#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        double a, b, c;
        cin >> a >> b >> c;

        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << fixed << setprecision(3) << "Area = " << area << endl;
    }

    return 0;
}