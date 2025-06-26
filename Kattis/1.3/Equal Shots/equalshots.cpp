#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    double totalAlcoholA = 0, totalVolumeA = 0;
    for (int i = 0; i < a; i++) {
        int v, c;
        cin >> v >> c;
        totalAlcoholA += (double)v * c;
        totalVolumeA += v;
    }

    double totalAlcoholB = 0, totalVolumeB = 0;
    for (int i = 0; i < b; i++) {
        int v, c;
        cin >> v >> c;
        totalAlcoholB += (double)v * c;
        totalVolumeB += v;
    }

    double alcoholPercentageA = 0;
    if (totalVolumeA > 0) {
        alcoholPercentageA = totalAlcoholA / totalVolumeA;
    }

    double alcoholPercentageB = 0;
    if (totalVolumeB > 0) {
        alcoholPercentageB = totalAlcoholB / totalVolumeB;
    }

    if (abs(alcoholPercentageA - alcoholPercentageB) < 1e-9) {
        cout << "same" << endl;
    } else {
        cout << "different" << endl;
    }

    return 0;
}