#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int dice1, dice2;
        cin >> dice1 >> dice2;

        if (dice1 + dice2 > 6) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}