#include <bits/stdc++.h>

using namespace std;

int main() {
    double denominatorRepetitions;
    cin >> denominatorRepetitions;

    double result = 0;

    for (int i = 0; i < denominatorRepetitions; i++) {
        if (i == 0) {
            result = 1 / (6 + result);
        } else result = 1 / (6 + result);
    }

    cout << fixed << setprecision(10) << result + 3 << endl;

    return 0;
}