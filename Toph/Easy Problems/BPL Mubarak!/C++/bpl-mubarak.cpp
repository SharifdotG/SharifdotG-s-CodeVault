#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string overCycle;
        cin >> overCycle;

        int balls = 0;

        for (int i = 0; i < overCycle.size(); i++) {
            if (overCycle[i] == 'W' || overCycle[i] == 'N' || overCycle[i] == 'D') {}
            else {
                balls++;
            }
        }

        if (balls / 6 > 1) {
            cout << balls / 6 << " OVERS ";
        } else if (balls / 6 == 1) {
            cout << balls / 6 << " OVER ";
        }

        if (balls % 6 > 1) {
            cout << balls % 6 << " BALLS";
        } else if (balls % 6 == 1) {
            cout << balls % 6 << " BALL";
        }

        cout << endl;
    }
    
    return 0;
}