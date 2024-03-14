#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int playerA, playerB, playerC, playerD;
        cin >> playerA >> playerB >> playerC >> playerD;

        if (max(playerA, playerB) < min(playerC, playerD) || min(playerA, playerB) > max(playerC, playerD)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}