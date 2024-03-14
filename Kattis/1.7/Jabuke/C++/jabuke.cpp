#include <bits/stdc++.h>

using namespace std;

int main() {
    double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    double area = abs(xa * (yb - yc) + xb * (yc - ya) + xc * (ya - yb)) / 2;

    cout << fixed << setprecision(1) << area << endl;

    int appleTrees;
    cin >> appleTrees;

    int treesAnte = 0;

    for (int i = 0; i < appleTrees; i++) {
        double x, y;
        cin >> x >> y;

        double area1 = abs(xa * (yb - y) + xb * (y - ya) + x * (ya - yb)) / 2;
        double area2 = abs(xa * (y - yc) + x * (yc - ya) + xc * (ya - y)) / 2;
        double area3 = abs(x * (yb - yc) + xb * (yc - y) + xc * (y - yb)) / 2;

        if (area == area1 + area2 + area3) {
            treesAnte++;
        }
    }

    cout << treesAnte << endl;

    return 0;
}
