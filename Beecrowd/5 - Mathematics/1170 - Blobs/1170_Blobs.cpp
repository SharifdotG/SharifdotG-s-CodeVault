#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;

        int days = 0;
        while (x > 1) {
            x /= 2;
            days++;
        }

        cout << days << " dias" << endl;
    }

    return 0;
}
