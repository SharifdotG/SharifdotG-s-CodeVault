#include <bits/stdc++.h>

using namespace std;

int main() {
    int candles, burn;
    cin >> candles >> burn;

    int hours = candles;
    int remaining = 0;

    while (candles >= burn) {
        hours += candles / burn;
        remaining = candles % burn;
        candles /= burn;
        candles += remaining;
    }

    cout << hours << endl;
    
    return 0;
}