#include <bits/stdc++.h>

using namespace std;

int main() {
    int cities;
    cin >> cities;

    int flightCosts[cities][cities];

    for (int i = 0; i < cities; i++) {
        for (int j = 0; j < cities; j++) {
            cin >> flightCosts[i][j];
        }
    }

    int directFlights = 0;

    for (int i = 0; i < cities; i++) {
        for (int j = 0; j < cities; j++) {
            if (flightCosts[i][j] != -1) directFlights++;
        }
    }

    cout << directFlights << endl;

    for (int i = 0; i < cities; i++) {
        for (int j = 0; j < cities; j++) {
            if (flightCosts[i][j] != -1) cout << i + 1 << " " << j + 1 << " " << flightCosts[i][j] << endl;
        }
    }

    return 0;
}