#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, time = 0;
    cin >> n >> k;

    int timeLeft = 240 - k;

    for (int i = 1; i <= n; i++) {
        time += 5 * i;
        if (time > timeLeft) {
            cout << i - 1;
            return 0;
        }
    }

    cout << n;

    return 0;
}