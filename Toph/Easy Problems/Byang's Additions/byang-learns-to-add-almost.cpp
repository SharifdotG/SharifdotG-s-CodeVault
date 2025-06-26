#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (a > 0) {
        if (a % 10 + b % 10 > 9) {
            cout << "Yes" << endl;
            return 0;
        }

        a /= 10;
        b /= 10;
    }
    
    cout << "No" << endl;
    
    return 0;
}