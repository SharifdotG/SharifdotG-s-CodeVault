#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    if (max == a) cout << max - b << " " << max - c << " " << max - d;
    else if (max == b) cout << max - a << " " << max - c << " " << max - d;
    else if (max == c) cout << max - a << " " << max - b << " " << max - d;
    else cout << max - a << " " << max - b << " " << max - c;

    return 0;
}