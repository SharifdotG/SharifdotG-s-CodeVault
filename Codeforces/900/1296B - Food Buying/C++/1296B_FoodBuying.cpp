#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int burles, totalBurles = 0;
        cin >> burles;

        while (burles >= 10) {
            int burlesSpent = burles / 10 * 10;
            totalBurles += burlesSpent;
            burles -= burlesSpent;
            burles += burlesSpent / 10;
        }

        totalBurles += burles;

        cout << totalBurles << endl;
    }
    
    return 0;
}