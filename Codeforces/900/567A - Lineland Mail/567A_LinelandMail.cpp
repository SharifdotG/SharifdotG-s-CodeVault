#include <bits/stdc++.h>

using namespace std;

int main() {
    int cities;
    cin >> cities;

    vector<int> coordinates(cities);

    for (int i = 0; i < cities; i++) {
        cin >> coordinates[i];
    }

    for (int i = 0; i < cities; i++) {
        int minDistance = 0, maxDistance = 0;

        if (i == 0) {
            minDistance = abs(coordinates[i] - coordinates[i + 1]);
            maxDistance = abs(coordinates[i] - coordinates[cities - 1]);
        } else if (i == cities - 1) {
            minDistance = abs(coordinates[i] - coordinates[i - 1]);
            maxDistance = abs(coordinates[i] - coordinates[0]);
        } else {
            minDistance = min(abs(coordinates[i] - coordinates[i - 1]), abs(coordinates[i] - coordinates[i + 1]));
            maxDistance = max(abs(coordinates[i] - coordinates[0]), abs(coordinates[i] - coordinates[cities - 1]));
        }

        cout << minDistance << " " << maxDistance << endl;
    }
    
    return 0;
}