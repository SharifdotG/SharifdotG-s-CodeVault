#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        sum += x;
        cout << fixed << setprecision(10) << sum / (i + 1) << endl;
    }

    return 0;
}