#include <bits/stdc++.h>

using namespace std;

int main() {
    int carsTurnToMEGA, minutesPassed;
    cin >> carsTurnToMEGA >> minutesPassed;

    int carsStandingInTraffic = 0;
    for (int i = 0; i < minutesPassed; i++) {
        int carsApproachedTheTurn;
        cin >> carsApproachedTheTurn;

        carsStandingInTraffic += carsApproachedTheTurn;
        carsStandingInTraffic -= carsTurnToMEGA;
        if (carsStandingInTraffic < 0) carsStandingInTraffic = 0;
    }

    cout << carsStandingInTraffic << endl;
    
    return 0;
}