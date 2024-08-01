#include <bits/stdc++.h>

using namespace std;

int main() {
    int numCities, numStations;
    cin >> numCities >> numStations;

    vector<int> stations(numStations);
    for (int i = 0; i < numStations; i++) {
        cin >> stations[i];
    }

    sort(stations.begin(), stations.end());

    int maxDistance = 0;
    for (int i = 0; i < numCities; i++) {
        int distance = INT_MAX;
        for (int j = 0; j < numStations; j++) {
            distance = min(distance, abs(i - stations[j]));
        }

        maxDistance = max(maxDistance, distance);
    }

    cout << maxDistance << endl;

    return 0;
}