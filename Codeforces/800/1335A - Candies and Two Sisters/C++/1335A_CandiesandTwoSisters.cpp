#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, candies;
    cin >> testCases;

    while (testCases--) {
        cin >> candies;

        if (candies % 2 == 0) cout << (candies / 2) - 1 << endl;
        else cout << candies / 2 << endl;
    }

    return 0;
}