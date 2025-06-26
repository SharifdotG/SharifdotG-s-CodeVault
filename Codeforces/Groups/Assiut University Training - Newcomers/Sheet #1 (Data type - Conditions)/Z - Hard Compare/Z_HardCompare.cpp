#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == 1 || c == 1) {
        if (a == 1 && c == 1) {
            cout << "NO" << endl;
        } else if (a == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        return 0;
    }

    long double log_a = logl((long double)a);
    long double log_c = logl((long double)c);
    long double x = b * log_a, y = d * log_c;

    if (x > y) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}