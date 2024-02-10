#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double s = (a + b + c + d) / 2;

    cout << fixed << setprecision(6) << sqrt((s - a) * (s - b) * (s - c) * (s - d)) << endl;

    return 0;
}