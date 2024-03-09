#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a > b) swap(a, b);
        if (a > c) swap(a, c);
        if (b > c) swap(b, c);

        cout << b << endl;
    }

    return 0;
}