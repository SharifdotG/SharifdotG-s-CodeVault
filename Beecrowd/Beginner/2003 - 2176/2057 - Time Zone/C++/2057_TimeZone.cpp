#include <bits/stdc++.h>

using namespace std;

int main() {
    int timeOfDeparture, travelTime, timeZone;
    cin >> timeOfDeparture >> travelTime >> timeZone;

    int result = timeOfDeparture + travelTime + timeZone;

    if (result < 0) result += 24;
    else if (result >= 24) {
        result -= 24;
    }

    cout << result << endl;

    return 0;
}
