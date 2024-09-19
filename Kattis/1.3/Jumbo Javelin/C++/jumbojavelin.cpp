#include <bits/stdc++.h>

using namespace std;

int main() {
    int steelRods, length, sum = 0;
    cin >> steelRods;

    while (steelRods--) {
        cin >> length;
        sum += length - 1;
    }

    cout << sum + 1 << endl;

    return 0;
}