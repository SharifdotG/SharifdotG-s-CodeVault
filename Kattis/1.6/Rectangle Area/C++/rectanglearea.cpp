#include <bits/stdc++.h>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double width = abs(x1 - x2);
    double height = abs(y1 - y2);

    cout << fixed << setprecision(3) << width * height << endl;

    return 0;
}
