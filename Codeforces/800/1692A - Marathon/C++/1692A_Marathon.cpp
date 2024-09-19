#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        cout << (b > a) + (c > a) + (d > a) << endl;
    }

    return 0;
}