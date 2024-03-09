#include <bits/stdc++.h>

using namespace std;

int main() {
    int tempsCollected, temperature, negativeTemps = 0;
    cin >> tempsCollected;

    for (int i = 0; i < tempsCollected; i++) {
        cin >> temperature;
        if (temperature < 0) {
            negativeTemps++;
        }
    }

    cout << negativeTemps << endl;

    return 0;
}