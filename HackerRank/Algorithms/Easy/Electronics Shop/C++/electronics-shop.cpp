#include <bits/stdc++.h>

using namespace std;

int main() {
    int budget, keyboards, drives;
    cin >> budget >> keyboards >> drives;

    vector<int> keyboardPrices(keyboards);
    for (int i = 0; i < keyboards; i++) {
        cin >> keyboardPrices[i];
    }

    vector<int> drivePrices(drives);
    for (int i = 0; i < drives; i++) {
        cin >> drivePrices[i];
    }

    int maxSpent = -1;
    for (int i = 0; i < keyboards; i++) {
        for (int j = 0; j < drives; j++) {
            if (keyboardPrices[i] + drivePrices[j] <= budget) {
                maxSpent = max(maxSpent, keyboardPrices[i] + drivePrices[j]);
            }
        }
    }

    cout << maxSpent << endl;

    return 0;
}