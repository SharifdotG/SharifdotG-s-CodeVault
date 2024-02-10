#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string cards;
        cin >> cards;

        if (cards == "cab" || cards == "bca") {
            cout << "NO" << endl;
        } else cout << "YES" << endl;
    }
    
    return 0;
}