#include <bits/stdc++.h>

using namespace std;

int main() {
    int trainStops;
    cin >> trainStops;

    int max = 0;
    int current = 0;

    while (trainStops--) {
        int passengersExits, passengersEnters;
        cin >> passengersExits >> passengersEnters;

        current -= passengersExits;
        current += passengersEnters;

        if (current > max) {
            max = current;
        }
    }

    cout << max;
    
    return 0;
}