#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    int x = 0, y = 0, z = 0;

    while (testCases--) {
        int x1, y1, z1;
        cin >> x1 >> y1 >> z1;

        x += x1;
        y += y1;
        z += z1;
    }

    if (x == 0 && y == 0 && z == 0) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;
    
    return 0;
}