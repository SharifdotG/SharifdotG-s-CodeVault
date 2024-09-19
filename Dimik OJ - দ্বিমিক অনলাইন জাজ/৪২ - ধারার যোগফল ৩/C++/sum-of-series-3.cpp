#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        if (n == 0) {
            cout << "1" << endl;
            continue;
        }

        if (n == 1) {
            cout << "2 + 1" << endl;
            continue;
        }
        
        for (int i = n; i >= 2; i--) {
            cout << "2^" << i << " + ";
        }

        cout << "2 + 1" << endl;
    }

    return 0;
}