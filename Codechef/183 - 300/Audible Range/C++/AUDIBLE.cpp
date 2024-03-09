#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, commands;
    cin >> testCases;

    while (testCases--) {
        cin >> commands;

        if (commands >= 67 && commands <= 45000) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}