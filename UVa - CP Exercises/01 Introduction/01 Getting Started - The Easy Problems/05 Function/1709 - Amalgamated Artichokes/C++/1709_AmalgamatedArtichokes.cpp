#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, a, b, c, d, n;
    double price, maxDecline, maxDeclineSoFar, maxDeclineSoFarAt;

    while (cin >> p >> a >> b >> c >> d >> n) {
        maxDecline = 0;
        maxDeclineSoFar = 0;
        maxDeclineSoFarAt = 0;
        for (int k = 1; k <= n; k++) {
            price = p * (sin(a * k + b) + cos(c * k + d) + 2);
            if (price > maxDeclineSoFar) {
                maxDeclineSoFar = price;
                maxDeclineSoFarAt = k;
            } else {
                maxDecline = max(maxDecline, maxDeclineSoFar - price);
            }
        }
        cout << fixed << setprecision(6) << maxDecline << endl;
    }
    
    return 0;
}