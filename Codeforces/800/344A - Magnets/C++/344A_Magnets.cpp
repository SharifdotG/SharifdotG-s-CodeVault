#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfMagnets;
    cin >> numberOfMagnets;

    int numberOfGroups = 1;
    string previousMagnet;
    cin >> previousMagnet;

    for (int i = 1; i < numberOfMagnets; i++) {
        string magnet;
        cin >> magnet;

        if (magnet != previousMagnet) {
            numberOfGroups++;
            previousMagnet = magnet;
        }
    }

    cout << numberOfGroups;
    
    return 0;
}