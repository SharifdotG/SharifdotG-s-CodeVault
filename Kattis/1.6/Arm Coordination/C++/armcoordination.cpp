#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, radius;
    cin >> x >> y >> radius;

    cout << x + radius << " " << endl;
    cout << y + radius << " " << endl;

    cout << x - radius << " " << endl;
    cout << y + radius << " " << endl;

    cout << x - radius << " " << endl;
    cout << y - radius << " " << endl;

    cout << x + radius << " " << endl;
    cout << y - radius << " " << endl;

    return 0;
}
