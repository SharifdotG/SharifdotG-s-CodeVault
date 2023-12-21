#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int digitA, digitB, digitC;
        cin >> digitA >> digitB >> digitC;

        if (digitA + digitB >= 10 || digitB + digitC >= 10 || digitA + digitC >= 10) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }

    return 0;
}