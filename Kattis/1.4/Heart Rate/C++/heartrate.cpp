#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        double beats, bestInSeconds;
        cin >> beats >> bestInSeconds;

        double bpm = 60 * beats / bestInSeconds;
        double minABPM = bpm - 60 / bestInSeconds;
        double maxABPM = bpm + 60 / bestInSeconds;

        cout << fixed << setprecision(4) << minABPM << " " << bpm << " " << maxABPM << endl;
    }

    return 0;
}