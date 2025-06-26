#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfAtBats;
    cin >> numberOfAtBats;

    int totalBases = 0;
    int hits = 0;
    for (int i = 0; i < numberOfAtBats; i++) {
        int atBats;
        cin >> atBats;

        if (atBats != -1) {
            totalBases += atBats;
            hits++;
        }
    }

    cout << (double) totalBases / hits << endl;

    return 0;
}