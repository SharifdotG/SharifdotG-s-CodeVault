#include <bits/stdc++.h>

using namespace std;

int main() {
    int temperatureReadings;
    cin >> temperatureReadings;

    int temperatures[temperatureReadings], sum = 0;
    for (int i = 0; i < temperatureReadings; i++) {
        cin >> temperatures[i];
        sum += temperatures[i];
    }

    cout << floor(sum / (double) temperatureReadings) << endl;

    return 0;
}