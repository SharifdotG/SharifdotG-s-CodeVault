#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfMeasurements;
    cin >> numberOfMeasurements;

    double previousTime, previousMeasurement;
    cin >> previousTime >> previousMeasurement;

    double total = 0;
    
    for (int i = 1; i < numberOfMeasurements; i++) {
        double time, measurement;
        cin >> time >> measurement;

        total += (time - previousTime) * (previousMeasurement + measurement) / 2;

        previousTime = time;
        previousMeasurement = measurement;
    }

    cout << fixed << setprecision(10) << total / 1000 << endl;

    return 0;
}
