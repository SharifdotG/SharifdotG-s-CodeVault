#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, totalIncome;
    cin >> testCases;

    while (testCases--) {
        cin >> totalIncome;

        if (totalIncome <= 100) cout << totalIncome << endl;
        else cout << totalIncome - 10 << endl;
    }
    
    return 0;
}