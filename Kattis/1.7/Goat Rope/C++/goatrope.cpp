#include <bits/stdc++.h>

using namespace std;

int main() {
    double x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    double distance = 0;

    if (x < x1) {
        if (y < y1) {
            distance = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
        } else if (y > y2) {
            distance = sqrt(pow(x1 - x, 2) + pow(y - y2, 2));
        } else distance = x1 - x;
    } else if (x > x2) {
        if (y < y1) {
            distance = sqrt(pow(x - x2, 2) + pow(y1 - y, 2));
        } else if (y > y2) {
            distance = sqrt(pow(x - x2, 2) + pow(y - y2, 2));
        } else distance = x - x2;
    } else {
        if (y < y1) distance = y1 - y;
        else if (y > y2) distance = y - y2;
    }

    cout << fixed << setprecision(3) << distance << endl;

    return 0;
}
