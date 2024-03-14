#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, timeBeforeLeft;
    cin >> testCases;

    while (testCases--) {
        cin >> timeBeforeLeft;

        if (timeBeforeLeft >= 30) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}