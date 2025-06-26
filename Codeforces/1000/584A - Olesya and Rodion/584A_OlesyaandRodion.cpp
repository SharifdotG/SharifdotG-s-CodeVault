#include <bits/stdc++.h>

using namespace std;

int main() {
    int digits, divisor;
    cin >> digits >> divisor;

    if (digits == 1 && divisor == 10) {
        cout << -1 << endl;
    } else {
        if (divisor == 10) {
            for (int i = 0; i < digits - 1; i++) {
                cout << 1;
            }

            cout << 0 << endl;
        } else {
            for (int i = 0; i < digits; i++) {
                cout << divisor;
            }

            cout << endl;
        }
    }
    
    return 0;
}