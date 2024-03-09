#include <bits/stdc++.h>

using namespace std;

int main() {
    int stars;
    cin >> stars;

    cout << stars << ":" << endl;

    for (int i = 2; i <= stars / 2 + 1; i++) {
        if (stars % (2 * i - 1) == 0 || stars % (2 * i - 1) == i) {
            cout << i << "," << i - 1 << endl;
        }

        if (stars % i == 0) {
            cout << i << "," << i << endl;
        }
    }

    return 0;
}
