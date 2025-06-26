#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, rank;
    cin >> testCases;

    while (testCases--) {
        cin >> rank;

        if (rank <= 10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}