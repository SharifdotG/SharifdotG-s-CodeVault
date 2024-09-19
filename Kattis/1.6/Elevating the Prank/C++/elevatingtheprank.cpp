#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    int stops[n];
    for (int i = 0; i < n; i++) {
        cin >> stops[i];
    }

    sort(stops, stops + n);

    int start = min(a, b), end = max(a, b);

    int relevantStops = 0;
    for (int stop : stops) {
        if (stop > start && stop < end) {
            relevantStops++;
        }
    }

    int floorsMoved = abs(a - b);
    int travelTime = floorsMoved * 4;
    int stopTime = relevantStops * 10;

    cout << travelTime + stopTime << endl;
    
    return 0;
}
