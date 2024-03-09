#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c || a - b == c || b - a == c || a * b == c || (a / b == c && a % b == 0) || (b / a == c && b % a == 0)) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}