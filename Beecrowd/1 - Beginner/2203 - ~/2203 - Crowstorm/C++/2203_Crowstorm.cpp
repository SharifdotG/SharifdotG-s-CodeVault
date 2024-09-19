#include <bits/stdc++.h>

using namespace std;

int main() {
    int fiddlesticksX, fiddlesticksY, invaderX, invaderY, invaderSpeed, castingRadius, crowRadius;

    while (cin >> fiddlesticksX >> fiddlesticksY >> invaderX >> invaderY >> invaderSpeed >> castingRadius >> crowRadius) {
        double distance = sqrt(pow(invaderX - fiddlesticksX, 2) + pow(invaderY - fiddlesticksY, 2)) + invaderSpeed * 1.5;
        double range = castingRadius + crowRadius;

        if (distance <= range) {
            cout << "Y" << endl;
        } else cout << "N" << endl;
    }

    return 0;
}