#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string ring = "ABCDEFGHIJKLMNOPQRSTUVWXYZ '";
    double diameter = 60;
    double circumference = diameter * M_PI;
    double each = circumference / 28;

    map<char, int> ringMap;
    for (int i = 0; i < ring.length(); i++) {
        ringMap[ring[i]] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        string aphorism;
        getline(cin, aphorism);

        double totalDistance = 0;
        char previous = aphorism[0];
        
        for (int j = 1; j < aphorism.length(); j++) {
            int distance = min(abs(ringMap[aphorism[j]] - ringMap[previous]), 28 - abs(ringMap[aphorism[j]] - ringMap[previous]));
            double seconds = distance * each / 15;
            totalDistance += seconds;
            previous = aphorism[j];
        }

        totalDistance += aphorism.length();
        cout << fixed << setprecision(10) << totalDistance << endl;
    }

    return 0;
}
