#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int bought, sold;
        cin >> bought >> sold;

        if (bought > sold) cout << "LOSS" << endl;
        else if (bought < sold) cout << "PROFIT" << endl;
        else cout << "NEUTRAL" << endl;
    }
    
    return 0;
}