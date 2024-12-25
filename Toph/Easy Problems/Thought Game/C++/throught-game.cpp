#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int x, y;
        cin >> x >> y;

        int average = (x + y) / 2;

        if (average % 2 == 0) {
            cout << "Sadia will be happy." << endl;
        } else {
            cout << "Oops!" << endl;
        }
    }

    return 0;
}