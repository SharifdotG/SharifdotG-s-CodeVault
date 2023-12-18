#include <bits/stdc++.h>

using namespace std;

int main() {
    int lastValue, i = 1;

    while (cin >> lastValue) {
        int sum = 1;

        for (int j = 1; j <= lastValue; j++) sum += j;

        if (lastValue == 0) cout << "Caso " << i << ": " << sum << " numero" << endl;
        else cout << "Caso " << i << ": " << sum << " numeros" << endl;

        cout << 0;

        for (int j = 1; j <= lastValue; j++) {
            for (int k = 1; k <= j; k++) {
                cout << " " << j;
            }
        }

        cout << endl << endl;

        i++;
    }

    return 0;
}
