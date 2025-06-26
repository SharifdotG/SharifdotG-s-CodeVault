#include <bits/stdc++.h>

using namespace std;

int main() {
    double ev1, ev2, at, d;
    while (cin >> ev1 >> ev2 >> at >> d && ev1) {
        double n1 = ceil(ev1 / d);
        double n2 = ceil(ev2 / d);

        double answer, p;

        if (at == 3) {
            answer = n1 / (n1 + n2);
        } else {
            p = at / 6;
            answer = (1 - pow((1 - p) / p, n1)) / (1 - pow((1 - p) / p, n1 + n2));
        }

        cout << fixed << setprecision(1) << answer * 100 << endl;
    }

    return 0;
}
