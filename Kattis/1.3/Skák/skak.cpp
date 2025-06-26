#include <bits/stdc++.h>

using namespace std;

int main() {
    int xh, yh, xp, yp;
    cin >> xh >> yh >> xp >> yp;

    if (xh == xp || yh == yp) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }

    return 0;
}