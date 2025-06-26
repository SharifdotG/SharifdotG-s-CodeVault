#include <bits/stdc++.h>

using namespace std;

int main() {
    int velocity, acceleration, time;
    cin >> velocity >> acceleration >> time;

    cout << setprecision(6) << fixed << velocity * time + 0.5 * acceleration * time * time << endl;

    return 0;
}