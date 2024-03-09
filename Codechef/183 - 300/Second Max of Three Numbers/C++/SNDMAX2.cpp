#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int a, b, c;
        cin >> a >> b >> c;

        // print the second max of a, b, c
        if (a > b) {
            if (b > c) cout << b << endl;
            else if (a > c) cout << c << endl;
            else cout << a << endl;
        } else {
            if (a > c) cout << a << endl;
            else if (b > c) cout << c << endl;
            else cout << b << endl;
        }
    }
    
    return 0;
}