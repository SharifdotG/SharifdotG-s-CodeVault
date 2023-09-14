#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int squareSide;
        cin >> squareSide;

        for (int i = 0; i < squareSide; i++) {
            for (int j = 0; j < squareSide; j++) cout << "*";

            cout << endl;
        }

        if (testCases) cout << endl;
    }
    
    return 0;
}