#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, a, b, c, d, e;

    cin >> testCases;

    while (testCases--) {
        cin >> a >> b >> c >> d >> e;

        if (a == 1 && b == 2 && c == 3 && d == 4 && e == 5) {
            cout << "Y" << endl;
        } else if (a == 2 && b == 3 && c == 4 && d == 5 && e == 6) {
            cout << "Y" << endl;
        } else if (a == 3 && b == 4 && c == 5 && d == 6 && e == 1) {
            cout << "Y" << endl;
        } else if (a == 4 && b == 5 && c == 6 && d == 1 && e == 2) {
            cout << "Y" << endl;
        } else if (a == 5 && b == 6 && c == 1 && d == 2 && e == 3) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    
    return 0;
}