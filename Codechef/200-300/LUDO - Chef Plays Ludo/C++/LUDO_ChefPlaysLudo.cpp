#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, die;
    cin >> testCases;

    while (testCases--) {
        cin >> die;

        if (die == 6) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}