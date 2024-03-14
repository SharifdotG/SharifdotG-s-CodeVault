#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, stores, position, min, max;

    cin >> testCases;

    while (testCases--) {
        cin >> stores;

        min = 100;
        max = 0;

        while (stores--) {
            cin >> position;

            if (position < min) min = position;

            if (position > max) max = position;
        }

        cout << (max - min) * 2 << endl;
    }
    
    return 0;
}