#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, a, b;
    cin >> testCases;

    while (testCases--) {
        cin >> a >> b;

        int difference = abs(a - b);
        int moves = difference / 10;

        if (difference % 10 != 0) {
            moves++;
        }

        cout << moves << endl;
    }

    return 0;
}