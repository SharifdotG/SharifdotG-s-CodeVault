#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int candles, days;
        cin >> candles >> days;

        int totalCandles = 0;

        for (int j = 1; j <= days; j++) totalCandles += j + 1;

        cout << candles << " " << totalCandles << endl;
    }

    return 0;
}