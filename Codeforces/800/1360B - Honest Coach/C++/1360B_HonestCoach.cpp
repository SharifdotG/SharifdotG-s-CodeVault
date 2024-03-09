#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int numberOfAthletes;
        cin >> numberOfAthletes;

        int athletes[numberOfAthletes];

        for (int i = 0; i < numberOfAthletes; i++) cin >> athletes[i];

        sort(athletes, athletes + numberOfAthletes);

        int minimumDifference = athletes[1] - athletes[0];

        for (int i = 1; i < numberOfAthletes - 1; i++) {
            if (athletes[i + 1] - athletes[i] < minimumDifference) {
                minimumDifference = athletes[i + 1] - athletes[i];
            }
        }

        cout << minimumDifference << endl;
    }
    
    return 0;
}