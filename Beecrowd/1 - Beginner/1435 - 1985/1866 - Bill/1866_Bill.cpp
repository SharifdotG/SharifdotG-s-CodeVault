#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;

        if (number % 2 == 0) {
            cout << 0 << endl;
        } else cout << 1 << endl;
    }

    return 0;
}