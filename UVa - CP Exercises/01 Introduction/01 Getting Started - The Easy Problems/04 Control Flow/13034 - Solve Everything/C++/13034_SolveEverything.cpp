#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, teams, i, j;

    cin >> testCases;

    for (i = 1; i <= testCases; i++) {
        bool isSolved = true;

        for (j = 0; j < 13; j++) {
            cin >> teams;

            if (teams == 0) isSolved = false;
        }

        if (isSolved) cout << "Set #" << i << ": Yes" << endl;
        else cout << "Set #" << i << ": No" << endl;
    }
    
    return 0;
}