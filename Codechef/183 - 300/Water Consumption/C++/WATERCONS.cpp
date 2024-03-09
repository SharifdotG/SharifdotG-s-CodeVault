#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, waterAmount;
    cin >> testCases;

    while (testCases--) {
        cin >> waterAmount;

        if (waterAmount >= 2000) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}