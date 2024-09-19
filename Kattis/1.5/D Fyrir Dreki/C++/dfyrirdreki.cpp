#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        cout << 2 << endl;
    } else if (discriminant == 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}