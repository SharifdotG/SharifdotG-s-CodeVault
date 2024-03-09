#include <bits/stdc++.h>

using namespace std;

int main() {
    int denominatorRepititions;
    cin >> denominatorRepititions;

    double result = 0;

    for (int i = 0; i < denominatorRepititions; i++) {
        result += 2;
        result = 1 / result;
    }

    result += 1;

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}