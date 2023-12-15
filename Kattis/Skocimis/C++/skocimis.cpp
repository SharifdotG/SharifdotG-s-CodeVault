#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c; // a, b, c are the positions of the three kangaroos
    cin >> a >> b >> c;

    cout << max(b - a, c - b) - 1 << endl;

    return 0;
}
